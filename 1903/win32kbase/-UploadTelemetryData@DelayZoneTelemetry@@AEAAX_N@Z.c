/*
 * XREFs of ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C018FBF8
 * Callers:
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C018F7E0 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C018F8F0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C018FA44 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C015BF54 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C015BFB4 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 */

void __fastcall DelayZoneTelemetry::UploadTelemetryData(DelayZoneTelemetry *this, char a2)
{
  const char *v2; // rdi
  char v4; // r12
  char *v5; // r10
  unsigned __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+88h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+C0h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp+1Fh] BYREF

  v13 = 0LL;
  v2 = (char *)this + 16;
  v4 = 0;
  v5 = (char *)this + 16;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 || (unsigned int)(v6 - *((_DWORD *)this + 3)) >= 0x2710 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( v7 > 0xD5 )
      v7 = 213;
    v8 = 0;
    *((_DWORD *)this + 2) = v7;
    if ( v7 )
    {
      v9 = v13;
      do
      {
        if ( !*v2 )
        {
          RtlStringCchPrintfA(v5, 2048 - v9, "%lu,%lu_", *(_DWORD *)this, *((_DWORD *)this + 1));
          RtlStringCchLengthA(v2, v11, &v13);
          v9 = v13;
          v5 = (char *)&v2[v13];
        }
        v10 = v8 % 0xD5;
        RtlStringCchPrintfA(
          v5,
          2048 - v9,
          "%d,%ld,%ld,%d,%lu,0x%x,%d,%d,%d,%ld,%ld,%lu;",
          *((_DWORD *)this + 12 * v10 + 516),
          *((_DWORD *)this + 12 * v10 + 517),
          *((_DWORD *)this + 12 * v10 + 518),
          *((_DWORD *)this + 12 * v10 + 519),
          *((_DWORD *)this + 12 * v10 + 520),
          *((_DWORD *)this + 12 * v10 + 521),
          *((_DWORD *)this + 12 * v10 + 522),
          *((_DWORD *)this + 12 * v10 + 523),
          *((_DWORD *)this + 12 * v10 + 524),
          *((_DWORD *)this + 12 * v10 + 525),
          *((_DWORD *)this + 12 * v10 + 526),
          *((_DWORD *)this + 12 * v10 + 527));
        RtlStringCchLengthA(v2, v12, &v13);
        v9 = v13;
        if ( v13 + 96 >= 0x800 )
        {
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v2);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7F22, 0LL, 0LL, 3u, &pData);
          }
          v9 = 0LL;
          v13 = 0LL;
          v4 = 1;
          memset((char *)this + 17, 0, 0x7FFuLL);
          *v2 = 0;
        }
        ++v8;
        v5 = (char *)&v2[v9];
      }
      while ( v8 < *((_DWORD *)this + 2) );
      if ( v9 )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          TlgCreateSz(&v17, v2);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7F22, 0LL, 0LL, 3u, &v16);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 2) = 0;
        memset((char *)this + 2064, 0, 0x27F0uLL);
        memset((char *)this + 17, 0, 0x7FFuLL);
        *v2 = 0;
        *((_DWORD *)this + 3) = v6;
      }
    }
  }
}
