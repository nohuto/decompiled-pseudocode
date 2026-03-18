/*
 * XREFs of ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C0131E84
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_UpdatePhysicalMonitors(CInputConfig *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 i; // r8
  __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)this;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CInpLockSharedIfNeeded *)&v8,
    (struct CInpPushLock *)&CInputConfig::slock);
  while ( (-(__int64)(v1 != 0LL) & (unsigned __int64)(v1 + 1)) != 0 )
  {
    v2 = 0LL;
    v3 = (unsigned __int64)(v1 + 1) & -(__int64)(v1 != 0LL);
    if ( *(_DWORD *)(v3 + 0xC) )
    {
      do
      {
        v4 = 0LL;
        v5 = *(_QWORD *)(v3 + 16) + 80 * v2;
        if ( (*(_DWORD *)(v5 + 16) & 2) != 0 )
        {
          for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(v7 + 56) )
          {
            if ( PtInRect((_DWORD *)v5, *(_QWORD *)(*(_QWORD *)(i + 40) + 28LL)) )
            {
              v4 = v7;
              break;
            }
          }
        }
        v2 = (unsigned int)(v2 + 1);
        *(_QWORD *)(v5 + 72) = v4;
      }
      while ( (_DWORD)v2 != *(_DWORD *)(v3 + 12) );
    }
    v1 = (_QWORD *)*v1;
  }
  if ( !v9 )
  {
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
}
