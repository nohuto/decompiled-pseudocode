/*
 * XREFs of NtUserHardErrorControl @ 0x1C01F0990
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  _BYTE *v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0uLL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v14 = (_BYTE *)MmUserProbeAddress;
      *v14 = *v14;
      v14[15] = v14[15];
      v16 = *(_OWORD *)a3;
    }
    v13 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v16 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v16;
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
