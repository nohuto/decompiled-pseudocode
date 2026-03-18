/*
 * XREFs of ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180150E44
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x18001BCC8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::ClearAllTelemetry(CTelemetryTracking *this)
{
  _QWORD *v1; // rsi
  unsigned __int64 *v2; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *i; // rdx
  CTelemetryTracking::CTelemetryTrackingInfo *v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int64 v11; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *k; // rdx

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
        goto LABEL_24;
    }
    v4 = 0LL;
  }
LABEL_24:
  while ( v4 )
  {
    v6 = (CTelemetryTracking::CTelemetryTrackingInfo *)v4;
    v7 = *(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v8 = *v1
       + 8
       * ((HIBYTE(v7)
         + 37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7)
            + 37
            * (((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v4 + 8) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v7 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1));
    v9 = (unsigned __int64 *)v4;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v9;
    if ( (v4 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v8 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5);
            ++j )
      {
        v4 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_18;
      }
      v4 = 0LL;
    }
LABEL_18:
    v11 = *((_QWORD *)v6 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    for ( k = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                           + 8
                                                           * ((HIBYTE(v11)
                                                             + 37
                                                             * (BYTE6(v11)
                                                              + 37
                                                              * (BYTE5(v11)
                                                               + 37
                                                               * (BYTE4(v11)
                                                                + 37
                                                                * (((*((_DWORD *)v6 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 24)
                                                                 + 37
                                                                 * ((unsigned __int8)((*((_DWORD *)v6 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 16)
                                                                  + 37
                                                                  * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v6 + 4) & (-1 << (*((_DWORD *)this + 129) & 0x1F))) >> 8)
                                                                   + 37 * ((unsigned __int8)v11 + 11623883)))))))) & ((*((_DWORD *)this + 129) >> 5) - 1)));
          (*(_QWORD *)k & 1) == 0;
          k = *(CTelemetryTracking::CTelemetryTrackingInfo **)k )
    {
      if ( *(CTelemetryTracking::CTelemetryTrackingInfo **)k == v6 )
      {
        *(_QWORD *)k = *(_QWORD *)v6;
        --*((_DWORD *)this + 128);
        *(_QWORD *)v6 |= 0x8000000000000002uLL;
        break;
      }
    }
    CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(v6);
  }
}
