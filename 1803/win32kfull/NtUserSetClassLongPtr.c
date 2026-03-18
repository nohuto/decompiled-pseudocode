/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C010AE30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C010B038 (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
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
  __int128 v25; // [rsp+40h] [rbp-78h] BYREF
  int *v26; // [rsp+50h] [rbp-68h]
  int v27; // [rsp+58h] [rbp-60h] BYREF
  ULONG64 v28; // [rsp+60h] [rbp-58h]
  ULONG64 v29; // [rsp+68h] [rbp-50h]
  _QWORD v30[3]; // [rsp+80h] [rbp-38h] BYREF
  __int128 v31; // [rsp+98h] [rbp-20h]
  ULONG64 v32; // [rsp+A8h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v13 = 0LL;
  if ( v10 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v30;
    v30[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v8);
LABEL_25:
        ThreadUnlock1(v21, v22, v20);
        goto LABEL_26;
      }
    }
    else if ( a2 == -8 )
    {
      v29 = a3;
      v14 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      v31 = *(_OWORD *)v14;
      v32 = *(_QWORD *)(v14 + 16);
      v25 = v31;
      v26 = (int *)v32;
      v15 = (unsigned int *)v32;
      if ( v32 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v16 = *v15;
      v24 = *v15;
      v27 = *v15;
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
          v13 = xxxSetClassLongPtr(v10, 4294967288LL, &v25, a4);
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
    v13 = xxxSetClassLongPtr(v10, a2, a3, a4);
    goto LABEL_25;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v13;
}
