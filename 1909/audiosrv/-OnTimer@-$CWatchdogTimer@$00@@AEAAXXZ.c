/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C2A70
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C3050 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C2774 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C285C (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  unsigned __int32 v2; // eax
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  TraceLoggingHProvider v5; // r9
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  const WCHAR *v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r10
  __int64 v11; // rcx
  const WCHAR *v12; // rdx
  LPCGUID v13; // r8
  TraceLoggingHProvider v14; // r9
  DWORD CurrentProcessId; // eax
  __int64 v16; // r8
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int32 v19; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-C8h] BYREF
  GUID pguid; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int32 *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-60h] BYREF
  GUID *p_pguid; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v38; // [rsp+F0h] [rbp-10h] BYREF
  int *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  __int64 v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]

  LOBYTE(v2) = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( (_BYTE)v2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v19 = v2;
    if ( v2 >= 3 )
    {
      if ( v2 == 3 )
      {
        v6 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v6 )
        {
          (**v6)(v6, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        LOBYTE(v2) = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( (_BYTE)v2 )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          if ( **(_DWORD **)(a1 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 0x400000000001uLL) )
          {
            v7 = *(const WCHAR **)(a1 + 24);
            v33 = 0;
            p_pguid = &pguid;
            v32 = 16;
            TlgCreateWsz(&v34, v7);
            v37 = 0;
            v35 = a1 + 16;
            v36 = 4;
            TlgWrite(v10, &unk_180176902, v8, v9, 5u, &v30);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v11 = *(_QWORD *)(a1 + 32);
          if ( v11 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            if ( v18 && **(_DWORD **)(a1 + 8) > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL) )
            {
              v12 = *(const WCHAR **)(a1 + 24);
              v41 = 0;
              v39 = &v18;
              v40 = 4;
              TlgCreateWsz(&v42, v12);
              v45 = 0;
              v43 = a1 + 16;
              v44 = 4;
              TlgWrite(v14, &unk_1801768B4, v13, (LPCGUID)v14, 5u, &v38);
            }
          }
          else
          {
            v18 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v16 = *(unsigned int *)(a1 + 16);
          v20[0] = CurrentProcessId;
          v20[1] = v18;
          LOBYTE(v2) = ReportCoreHang(v20, (unsigned int)(v18 != 0) + 1, v16, 8LL);
        }
      }
    }
    else if ( **(_DWORD **)(a1 + 8) > 3u )
    {
      LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL);
      if ( (_BYTE)v2 )
      {
        v3 = *(const WCHAR **)(a1 + 24);
        v25 = 0;
        v23 = &v19;
        v24 = 4;
        TlgCreateWsz(&pDesc, v3);
        v29 = 0;
        v27 = a1 + 16;
        v28 = 4;
        LOBYTE(v2) = TlgWrite(v5, &unk_180176930, v4, (LPCGUID)v5, 5u, &pData);
      }
    }
  }
  return v2;
}
