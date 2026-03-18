/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C014A04C
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C014A3BC (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013C8DC (WPP_RECORDER_SF_dDD.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0147FB8 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0148320 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C014B274 (RIMIDESetLinkCollectionUsageValues.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v8; // rax
  int v10; // r14d
  int v11; // edx
  int v12; // eax
  unsigned int v13; // r13d
  int v14; // ecx
  _WORD *v15; // rsi
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  struct RawInputManagerObject *v20; // rsi
  int v22; // edx
  int v23; // eax
  char v24; // cl
  int v25; // edx
  unsigned int v26; // eax
  char *v27; // rbx
  __int64 v28; // rax
  char v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+44h] [rbp-54h] BYREF
  int v32; // [rsp+48h] [rbp-50h]
  struct RawInputManagerObject *v33; // [rsp+50h] [rbp-48h]
  int *v34; // [rsp+58h] [rbp-40h]
  unsigned __int16 v35; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+18h]

  v36 = a3;
  v4 = *(_QWORD *)(a1 + 424);
  v5 = a1 + 88;
  v33 = (struct RawInputManagerObject *)v4;
  v35 = 0;
  v31 = 0;
  v8 = *(_QWORD *)(a1 + 472);
  v34 = 0LL;
  v10 = 0;
  v30 = 1;
  v32 = 1;
  if ( !*(_DWORD *)(v8 + 16) )
    *(_DWORD *)(v8 + 16) = 1;
  RIMLockExclusive(v4 + 104);
  InputTraceLogging::RIM::InjectInput(v5, a4);
  if ( *(_BYTE *)(v4 + 81) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 51, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    v10 = -1073741637;
    v20 = (struct RawInputManagerObject *)v4;
  }
  else
  {
    v12 = *(_DWORD *)(v5 + 200);
    if ( (v12 & 0x10) != 0 || (v12 & 8) != 0 )
      v34 = &v31;
    memset(*(void **)(*(_QWORD *)(v5 + 464) + 24LL), 0, *(unsigned __int16 *)(*(_QWORD *)(v5 + 464) + 44LL));
    v13 = 0;
    if ( a3 )
    {
      v14 = 1;
      v15 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex((struct RIMDEV *)v5, (unsigned __int16)*v15, &v35, v14) )
      {
        v17 = *(_DWORD *)(v5 + 200);
        if ( ((v17 & 0x10) != 0 || (v17 & 8) != 0) && *(v15 - 4) == 13 && *(v15 - 3) == 84 )
          v32 = *((_DWORD *)v15 - 1);
        v18 = RIMIDESetLinkCollectionUsageValues(v5, v16, (unsigned int)a2 + 12 * v13, v35, (__int64)v34);
        v14 = 0;
        if ( !v18 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = *(unsigned __int16 *)(a2 + 12LL * v13 + 2);
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_dDD(
              *(unsigned __int16 *)(a2 + 12LL * v13),
              v19,
              *(unsigned __int16 *)(a2 + 12LL * v13 + 8),
              48,
              (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
              *(_WORD *)(a2 + 12LL * v13 + 8),
              *(_WORD *)(a2 + 12LL * v13 + 2),
              *(_WORD *)(a2 + 12LL * v13));
          }
          goto LABEL_23;
        }
        if ( *v15 )
          v30 = 0;
        else
          v14 = v30;
        ++v13;
        v15 += 6;
        if ( v13 >= v36 )
          goto LABEL_29;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int16 *)(a2 + 12LL * v13 + 2);
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_dDD(
          3 * v13,
          v22,
          *(unsigned __int16 *)(a2 + 12LL * v13 + 8),
          49,
          (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
          *(_WORD *)(a2 + 12LL * v13 + 8),
          *(_WORD *)(a2 + 12LL * v13 + 2),
          *(_WORD *)(a2 + 12LL * v13));
      }
      v18 = 0;
LABEL_29:
      if ( !v18 )
        goto LABEL_23;
      v23 = *(_DWORD *)(v5 + 200);
      if ( (v23 & 8) == 0 && (v23 & 0x10) == 0 )
        goto LABEL_37;
      v24 = v31;
      v25 = v32;
      if ( v32 == v31 )
      {
        v26 = v23 & 0xFFFFFFF7;
      }
      else
      {
        v26 = v23 | 8;
        v10 = -1073741436;
        *(_DWORD *)(v5 + 200) = v26;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = v25;
          LOBYTE(v25) = 2;
          WPP_RECORDER_SF_Dd(
            (_DWORD)gRimLog,
            v25,
            1,
            50,
            (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
            v29,
            v24);
          v26 = *(_DWORD *)(v5 + 200);
        }
      }
      *(_DWORD *)(v5 + 200) = v26 & 0xFFFFFFEF;
      if ( v10 >= 0 )
      {
LABEL_37:
        v20 = v33;
        v27 = (char *)v33 + 568;
        RIMLockExclusive((__int64)v33 + 568);
        v28 = *(_QWORD *)(v5 + 464);
        *(_DWORD *)(v5 + 256) = 0;
        *(_QWORD *)(v5 + 264) = *(unsigned __int16 *)(v28 + 44);
        rimProcessDeviceBufferAndStartRead(v20, (struct RIMDEV *)v5);
        *((_QWORD *)v27 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v27, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_25;
      }
    }
    else
    {
LABEL_23:
      v10 = -1073741668;
    }
    v20 = v33;
  }
LABEL_25:
  *((_QWORD *)v20 + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v20 + 104, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
