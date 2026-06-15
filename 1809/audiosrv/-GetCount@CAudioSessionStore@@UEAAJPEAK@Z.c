/*
 * XREFs of ?GetCount@CAudioSessionStore@@UEAAJPEAK@Z @ 0x1800D26E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioSessionStore::GetCount(CAudioSessionStore *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( !a2 )
    return 2147500035LL;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 3);
  while ( v6 )
  {
    v7 = *(_WORD *)(v6 + 24) == 0;
    v8 = v4 + 1;
    v6 = *(_QWORD *)(v6 + 48);
    if ( v7 )
      v8 = v4;
    v4 = v8;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  *a2 = v4;
  return 0LL;
}
