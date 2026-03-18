/*
 * XREFs of NtUserHardErrorControl @ 0x1C0217C20
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  _BYTE *v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = 0uLL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v16 = (_BYTE *)MmUserProbeAddress;
      *v16 = *v16;
      v16[15] = v16[15];
      v18 = *(_OWORD *)a3;
    }
    v15 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v18 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v18;
  }
  else
  {
    v15 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
