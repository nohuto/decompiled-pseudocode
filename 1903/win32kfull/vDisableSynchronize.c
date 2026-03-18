/*
 * XREFs of vDisableSynchronize @ 0x1C0132020
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C01320E0 (-vDisableTimers@@YAXK@Z.c)
 */

__int64 __fastcall vDisableSynchronize(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  __int64 result; // rax
  signed __int32 v5; // ett

  v2 = 0;
  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v3 = 0;
    result = UserIsUserCritSecInShared();
    v2 = result;
  }
  else
  {
    v3 = 1;
    result = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    if ( (_DWORD)result )
    {
      v2 = 1;
      v3 = 0;
    }
    else
    {
      result = UserEnterUserCritSec();
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800) != 0 )
  {
    if ( v2 )
      UserPostNKAPC(
        KeGetCurrentThread(),
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPCBegin,
        vDisableSynchronizeNKAPC,
        *(unsigned int *)(a1 + 2128));
    else
      vDisableTimers(*(_DWORD *)(a1 + 2128));
    _m_prefetchw((const void *)(a1 + 40));
    do
    {
      v5 = *(_DWORD *)(a1 + 40);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v5 & 0xFFFFF7FF, v5);
    }
    while ( v5 != (_DWORD)result );
  }
  if ( v3 )
    return UserLeaveUserCritSec();
  return result;
}
