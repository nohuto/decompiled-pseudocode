/*
 * XREFs of ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C00C0CA0
 * Callers:
 *     UpdateDesktopThresholds @ 0x1C00C09B0 (UpdateDesktopThresholds.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C001D140 (GetMonitorWorkRectForDpi.c)
 */

void __fastcall UpdateDesktopMonitorNavigationOrder(struct tagMONITOR_MARGIN *Base)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  _QWORD *i; // r8
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  __m128i *MonitorWorkRectForDpi; // rax
  unsigned __int64 v10; // xmm0_8
  signed int v11; // r8d
  unsigned int v12; // r8d
  _QWORD *v13; // rdx
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = 255;
  for ( i = *(_QWORD **)(gpDispInfo + 104LL); i; i = (_QWORD *)i[7] )
  {
    if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 && (unsigned int)v2 < *(_DWORD *)*gpDispInfo )
    {
      *((_QWORD *)Base + 3 * v2 + 2) = i;
      i[35] = 0LL;
      i[36] = 0LL;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  qsort(Base, (unsigned int)v2, 0x18uLL, MonitorCoordComp);
  v5 = gpDispInfo;
  v6 = 0LL;
  *(_QWORD *)(gpDispInfo + 152LL) = gpDispInfo + 144LL;
  *(_QWORD *)(gpDispInfo + 144LL) = gpDispInfo + 144LL;
  if ( !(_DWORD)v2 )
    goto LABEL_15;
  do
  {
    v7 = *((_QWORD *)Base + 3 * v6 + 2);
    v8 = (_QWORD *)(v7 + 280);
    MonitorWorkRectForDpi = GetMonitorWorkRectForDpi(&v14, v7, 0x60u);
    v10 = _mm_srli_si128(*MonitorWorkRectForDpi, 8).m128i_u64[0];
    v5 = gpDispInfo;
    v11 = HIDWORD(v10) - HIDWORD(MonitorWorkRectForDpi->m128i_i64[0]);
    if ( (int)(v10 - MonitorWorkRectForDpi->m128i_i64[0]) < v11 )
      v11 = v10 - MonitorWorkRectForDpi->m128i_i64[0];
    v12 = (unsigned int)v11 >> 1;
    if ( v3 < v12 )
      v12 = v3;
    v3 = v12;
    v13 = *(_QWORD **)(gpDispInfo + 152LL);
    if ( *v13 != gpDispInfo + 144LL )
      __fastfail(3u);
    *v8 = gpDispInfo + 144LL;
    v6 = (unsigned int)(v6 + 1);
    v8[1] = v13;
    *v13 = v8;
    *(_QWORD *)(gpDispInfo + 152LL) = v8;
  }
  while ( (unsigned int)v6 < (unsigned int)v2 );
  if ( v12 == -1 )
    *(_DWORD *)(gpDispInfo + 136LL) = 0;
  else
LABEL_15:
    *(_DWORD *)(*(_QWORD *)v5 + 136LL) = v3;
}
