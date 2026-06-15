/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x180063E74
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800B4850 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x180063C5C (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x180063D44 (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  unsigned __int32 v2; // eax
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r11
  void (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rcx
  const WCHAR *v8; // rdx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r11
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  TraceLoggingHProvider v16; // r11
  DWORD CurrentProcessId; // eax
  __int64 v18; // r8
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int32 v21; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-C8h] BYREF
  GUID pguid; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int32 *v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-60h] BYREF
  GUID *p_pguid; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v40; // [rsp+F0h] [rbp-10h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+130h] [rbp+30h]
  int v46; // [rsp+138h] [rbp+38h]
  int v47; // [rsp+13Ch] [rbp+3Ch]

  LOBYTE(v2) = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( (_BYTE)v2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v21 = v2;
    if ( v2 >= 3 )
    {
      if ( v2 == 3 )
      {
        v7 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v7 )
        {
          (**v7)(v7, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        LOBYTE(v2) = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( (_BYTE)v2 )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          if ( **(_DWORD **)(a1 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 0x400000000001uLL) )
          {
            v8 = *(const WCHAR **)(a1 + 24);
            v35 = 0;
            p_pguid = &pguid;
            v34 = 16;
            TlgCreateWsz(&v36, v8);
            v39 = 0;
            v37 = a1 + 16;
            v38 = 4;
            TlgWrite(v11, &unk_1801725CA, v9, v10, 5u, &v32);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v12 = *(_QWORD *)(a1 + 32);
          if ( v12 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            if ( v20 && **(_DWORD **)(a1 + 8) > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL) )
            {
              v13 = *(const WCHAR **)(a1 + 24);
              v43 = 0;
              v41 = &v20;
              v42 = 4;
              TlgCreateWsz(&v44, v13);
              v47 = 0;
              v45 = a1 + 16;
              v46 = 4;
              TlgWrite(v16, &unk_18017257C, v14, v15, 5u, &v40);
            }
          }
          else
          {
            v20 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v18 = *(unsigned int *)(a1 + 16);
          v22[0] = CurrentProcessId;
          v22[1] = v20;
          LOBYTE(v2) = ReportCoreHang(v22, (unsigned int)(v20 != 0) + 1, v18, 8LL);
        }
      }
    }
    else if ( **(_DWORD **)(a1 + 8) > 3u )
    {
      LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL);
      if ( (_BYTE)v2 )
      {
        v3 = *(const WCHAR **)(a1 + 24);
        v27 = 0;
        v25 = &v21;
        v26 = 4;
        TlgCreateWsz(&pDesc, v3);
        v31 = 0;
        v29 = a1 + 16;
        v30 = 4;
        LOBYTE(v2) = TlgWrite(v6, &unk_1801725F8, v4, v5, 5u, &pData);
      }
    }
  }
  return v2;
}
