/*
 * XREFs of NtUserHardErrorControl @ 0x1C022FAE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C023F06C (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edi
  _BYTE *v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v12 = (_BYTE *)MmUserProbeAddress;
      *v12 = *v12;
      v12[15] = v12[15];
      v14 = *(_OWORD *)a3;
    }
    v11 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v14 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v14;
  }
  else
  {
    v11 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
