/*
 * XREFs of ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18001B9EC
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18001BCC8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 */

void __fastcall CTelemetryTracking::SendTelemetry(CTelemetryTracking *this)
{
  _QWORD *v1; // r14
  unsigned __int64 *v2; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v6; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx
  CTelemetryTracking::CTelemetryTrackingInfo *v8; // rdi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  unsigned __int64 *j; // rdx
  const WCHAR *v13; // rdx
  const WCHAR *v14; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-29h]
  __int64 v19; // [rsp+80h] [rbp-21h]
  char *v20; // [rsp+88h] [rbp-19h]
  __int64 v21; // [rsp+90h] [rbp-11h]
  _QWORD *v22; // [rsp+98h] [rbp-9h]
  __int64 v23; // [rsp+A0h] [rbp-1h]
  char *v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  _QWORD *v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+1Fh]
  char *v28; // [rsp+C8h] [rbp+27h]
  __int64 v29; // [rsp+D0h] [rbp+2Fh]

  v1 = (_QWORD *)((char *)this + 520);
  v2 = (unsigned __int64 *)*((_QWORD *)this + 65);
  if ( !v2 )
    goto LABEL_5;
  v4 = *v2;
  if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v4 = *v2;
  if ( (v4 & 1) != 0 )
  {
LABEL_5:
    for ( i = v2 + 1; (unsigned __int64)i < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5); ++i )
    {
      v4 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_17;
    }
    v4 = 0LL;
  }
LABEL_17:
  while ( v4 )
  {
    v8 = (CTelemetryTracking::CTelemetryTrackingInfo *)v4;
    v9 = *(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v10 = *v1
        + 8
        * ((HIBYTE(v9)
          + 37
          * (BYTE6(v9)
           + 37
           * (BYTE5(v9)
            + 37
            * (BYTE4(v9)
             + 37
             * (((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
              + 37
              * ((unsigned __int8)((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
               + 37
               * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v4 + 8) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
                + 37 * ((unsigned __int8)v9 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1));
    v11 = (unsigned __int64 *)v4;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v11;
    if ( (v4 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v10 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5);
            ++j )
      {
        v4 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_11;
      }
      v4 = 0LL;
    }
LABEL_11:
    if ( dword_180305E80 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL) )
    {
      v13 = (const WCHAR *)&unk_180276388;
      if ( *((_QWORD *)v8 + 2) )
        v13 = (const WCHAR *)*((_QWORD *)v8 + 2);
      TlgCreateWsz(&pDesc, v13);
      v14 = (const WCHAR *)&unk_180276388;
      if ( *((_QWORD *)v8 + 3) )
        v14 = (const WCHAR *)*((_QWORD *)v8 + 3);
      TlgCreateWsz(&v17, v14);
      v19 = 4LL;
      v20 = (char *)v8 + 44;
      v18 = (_QWORD *)((char *)v8 + 40);
      v22 = (_QWORD *)((char *)v8 + 48);
      v24 = (char *)v8 + 52;
      v26 = (_QWORD *)((char *)v8 + 56);
      v28 = (char *)v8 + 60;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B39FD, 0LL, 0LL, 0xAu, &pData);
    }
    v6 = *((_QWORD *)v8 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8
                                                           * ((HIBYTE(v6)
                                                             + 37
                                                             * (BYTE6(v6)
                                                              + 37
                                                              * (BYTE5(v6)
                                                               + 37
                                                               * (BYTE4(v6)
                                                                + 37
                                                                * (((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
                                                                 + 37
                                                                 * ((unsigned __int8)((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
                                                                  + 37
                                                                  * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v8 + 4) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
                                                                   + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1)));
          (*(_QWORD *)k & 1) == 0;
          k = *(CTelemetryTracking::CTelemetryTrackingInfo **)k )
    {
      if ( *(CTelemetryTracking::CTelemetryTrackingInfo **)k == v8 )
      {
        *(_QWORD *)k = *(_QWORD *)v8;
        --*((_DWORD *)this + 128);
        *(_QWORD *)v8 |= 0x8000000000000002uLL;
        break;
      }
    }
    CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(v8, (unsigned int)k);
  }
}
