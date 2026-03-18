/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C01349E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C0134C2C (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  ULONG64 v17; // r8
  ULONG64 v18; // rdx
  _BYTE **v19; // rax
  __int64 v20; // r8
  ULONG64 v21; // rcx
  ULONG64 v22; // rdx
  int v24; // [rsp+20h] [rbp-98h]
  __int128 v25; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  ULONG64 v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+68h] [rbp-50h] BYREF
  __int64 v30; // [rsp+70h] [rbp-48h]
  __int64 v31; // [rsp+78h] [rbp-40h]
  ULONG64 v32; // [rsp+80h] [rbp-38h]
  __int128 v33; // [rsp+98h] [rbp-20h]
  ULONG64 v34; // [rsp+A8h] [rbp-10h]

  v27 = 0LL;
  v28 = 0LL;
  v25 = 0uLL;
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0LL;
  if ( v9 )
  {
    v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    v30 = v9;
    HMLockObject(v9);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v11, v12, v13);
LABEL_25:
        ThreadUnlock1(v21, v22, v20);
        goto LABEL_26;
      }
    }
    else if ( a2 == -8 )
    {
      v32 = a3;
      v14 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      v33 = *(_OWORD *)v14;
      v34 = *(_QWORD *)(v14 + 16);
      v25 = v33;
      v26 = (__int64 *)v34;
      v15 = (unsigned int *)v34;
      if ( v34 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v16 = *v15;
      v24 = *v15;
      LODWORD(v27) = *v15;
      v17 = *((_QWORD *)v15 + 1);
      v28 = v17;
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_19;
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int16)v16 + v17 + 2;
      v19 = (_BYTE **)MmUserProbeAddress;
      if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v24) )
      {
        if ( (v16 & 1) != 0 )
          goto LABEL_17;
        if ( v18 > v17 )
        {
LABEL_19:
          v26 = &v27;
          v10 = xxxSetClassLongPtr(v9, 4294967288LL, &v25, a4);
          v21 = MmUserProbeAddress;
          v22 = MmUserProbeAddress;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_OWORD *)a3 = v25;
          *(_QWORD *)(a3 + 16) = v26;
          goto LABEL_25;
        }
      }
      if ( (v16 & 1) == 0 )
      {
LABEL_18:
        **v19 = 0;
        goto LABEL_19;
      }
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
      v19 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_18;
    }
    v10 = xxxSetClassLongPtr(v9, a2, a3, a4);
    goto LABEL_25;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
