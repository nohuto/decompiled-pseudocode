/*
 * XREFs of ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18004DAE0
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180028AE0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSession::ResetPolicyGainStages(CAudioSession *this)
{
  __int64 v2; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 432);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_QWORD *)this + 59);
  if ( v2 && !*(_BYTE *)(v2 + 32) )
    *(_DWORD *)(v2 + 56) = 1065353216;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
