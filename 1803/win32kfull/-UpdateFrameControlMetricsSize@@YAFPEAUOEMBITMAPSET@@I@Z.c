/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C000B45C
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C000D420 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct OEMBITMAPSET *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v3; // si
  _WORD *v4; // r15
  unsigned int i; // ebp
  int v7; // ebx
  unsigned __int16 v8; // dx
  int v9; // eax
  int DpiDependentMetric; // eax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax

  v2 = (unsigned __int16 *)&unk_1C02DCBB0;
  v3 = 0;
  v4 = (_WORD *)((char *)a1 + 22);
  for ( i = 0; i < 0x5D; ++i )
  {
    v7 = 0;
    v8 = v2[1];
    LOWORD(v9) = 0;
    switch ( *v2 )
    {
      case 1u:
        if ( (v8 & 0x80u) != 0 )
        {
          DpiDependentMetric = GetDpiDependentMetric(23LL, a2);
          v11 = 24LL;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          DpiDependentMetric = GetDpiDependentMetric(25LL, a2);
          v11 = 26LL;
        }
        else
        {
          DpiDependentMetric = GetDpiDependentMetric(12LL, a2);
          v11 = 13LL;
        }
        v7 = DpiDependentMetric - 2;
        LOWORD(v9) = GetDpiDependentMetric(v11, a2) - 4;
        goto LABEL_18;
      case 2u:
LABEL_29:
        if ( (v8 & 0x18) != 0 )
        {
          v9 = *(_DWORD *)(GetDPIMETRICSForDpi(a2) + 28);
        }
        else
        {
          v13 = a2;
          v14 = 28LL;
LABEL_16:
          v9 = GetDpiDependentMetric(v14, v13);
        }
LABEL_17:
        v7 = v9;
        goto LABEL_18;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v16 = a2;
          v19 = 0LL;
        }
        else
        {
          v12 = (v8 & 2) == 0;
          v16 = a2;
          if ( v12 )
          {
            v17 = GetDpiDependentMetric(0LL, a2);
            v18 = 10LL;
LABEL_27:
            v7 = v17;
LABEL_28:
            LOWORD(v9) = GetDpiDependentMetric(v18, a2);
            goto LABEL_18;
          }
          v19 = 11LL;
        }
        v17 = GetDpiDependentMetric(v19, v16);
        v18 = 1LL;
        goto LABEL_27;
    }
    if ( *v2 != 4 )
    {
      if ( *v2 == 5 )
        goto LABEL_29;
      if ( *v2 != 0xFFFF )
        goto LABEL_18;
      v12 = (v8 & 1) == 0;
      v13 = a2;
      if ( v12 )
      {
        v14 = 13LL;
        goto LABEL_16;
      }
      v20 = GetDpiDependentMetric(12LL, a2);
      v18 = 13LL;
      v7 = 4 * v20;
      goto LABEL_28;
    }
    if ( (v8 & 0x408) != 8 )
    {
      v9 = (a2 >> 3) + 1;
      goto LABEL_17;
    }
    LOWORD(v9) = i - 8;
LABEL_18:
    *(v4 - 1) = v7;
    *v4 = v9;
    if ( v7 > (__int16)v3 )
      v3 = v7;
    v2 += 2;
    v4 += 4;
  }
  return v3;
}
