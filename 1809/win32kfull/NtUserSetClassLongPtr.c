/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C00FC0C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C00FC2D8 (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG64 v13; // rdx
  __int128 v14; // xmm2
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  ULONG64 v17; // r8
  ULONG64 v18; // rdx
  _BYTE **v19; // rax
  ULONG64 v20; // rcx
  ULONG64 v21; // rdx
  int v23; // [rsp+20h] [rbp-98h]
  __int128 v24; // [rsp+38h] [rbp-80h] BYREF
  int *v25; // [rsp+48h] [rbp-70h]
  int v26; // [rsp+58h] [rbp-60h] BYREF
  ULONG64 v27; // [rsp+60h] [rbp-58h]
  ULONG64 v28; // [rsp+68h] [rbp-50h]
  _QWORD v29[5]; // [rsp+80h] [rbp-38h] BYREF
  ULONG64 v30; // [rsp+A8h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v29;
    v29[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v8, v11, v12);
        v10 = 0LL;
LABEL_25:
        ThreadUnlock1(v20, v21);
        goto LABEL_26;
      }
    }
    else if ( a2 == -8 )
    {
      v28 = a3;
      v13 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v14 = *(_OWORD *)v13;
      v30 = *(_QWORD *)(v13 + 16);
      v24 = v14;
      v25 = (int *)v30;
      v15 = (unsigned int *)v30;
      if ( v30 >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      v16 = *v15;
      v23 = *v15;
      v26 = *v15;
      v17 = *((_QWORD *)v15 + 1);
      v27 = v17;
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_19;
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int16)v16 + v17 + 2;
      v19 = (_BYTE **)MmUserProbeAddress;
      if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v23) )
      {
        if ( (v16 & 1) != 0 )
          goto LABEL_17;
        if ( v18 > v17 )
        {
LABEL_19:
          v25 = &v26;
          v10 = xxxSetClassLongPtr(v10, 4294967288LL, &v24, a4);
          v25 = 0LL;
          v20 = MmUserProbeAddress;
          v21 = MmUserProbeAddress;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_OWORD *)a3 = v24;
          *(_QWORD *)(a3 + 16) = v25;
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
    v10 = xxxSetClassLongPtr(v10, a2, a3, a4);
    goto LABEL_25;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v10;
}
