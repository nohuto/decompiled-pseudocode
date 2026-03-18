/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C0106D3C
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C0106860 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct OEMBITMAPSET *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r14
  unsigned __int16 v3; // bp
  _WORD *v4; // r12
  unsigned int i; // r15d
  unsigned __int16 v7; // r13
  unsigned __int16 v8; // dx
  int DpiDependentMetric; // ebx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax

  v2 = (unsigned __int16 *)&unk_1C02CE100;
  v3 = 0;
  v4 = (_WORD *)((char *)a1 + 22);
  for ( i = 0; i < 0x5D; ++i )
  {
    v7 = v3;
    v8 = v2[1];
    DpiDependentMetric = 0;
    LOWORD(v10) = 0;
    switch ( *v2 )
    {
      case 1u:
        if ( (v8 & 0x80u) != 0 )
        {
          v11 = 24;
          v12 = 23LL;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          v11 = 26;
          v12 = 25LL;
        }
        else
        {
          v11 = 13;
          v12 = 12LL;
        }
        DpiDependentMetric = GetDpiDependentMetric(v12, a2, 0LL) - 2;
        LOWORD(v10) = GetDpiDependentMetric(v11, a2, v13) - 4;
        goto LABEL_12;
      case 2u:
        goto LABEL_28;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v16 = 1;
        }
        else
        {
          if ( (v8 & 2) != 0 )
          {
            v16 = 1;
            v17 = 11LL;
            goto LABEL_20;
          }
          v16 = 10;
        }
        v17 = 0LL;
LABEL_20:
        DpiDependentMetric = GetDpiDependentMetric(v17, a2, 0LL);
        v19 = v16;
LABEL_21:
        LOWORD(v10) = GetDpiDependentMetric(v19, a2, v18);
        goto LABEL_12;
    }
    if ( *v2 != 4 )
    {
      if ( *v2 == 5 )
      {
LABEL_28:
        if ( (v8 & 0x18) != 0 )
        {
          v10 = *(_DWORD *)(GetDPIMETRICSForDpi(a2) + 28);
          goto LABEL_27;
        }
        v21 = a2;
        v22 = 28LL;
      }
      else
      {
        if ( *v2 != 0xFFFF )
          goto LABEL_12;
        v20 = (v8 & 1) == 0;
        v21 = a2;
        if ( !v20 )
        {
          v23 = GetDpiDependentMetric(12LL, a2, 0LL);
          v19 = 13LL;
          DpiDependentMetric = 4 * v23;
          goto LABEL_21;
        }
        v22 = 13LL;
      }
      v10 = GetDpiDependentMetric(v22, v21, 0LL);
LABEL_27:
      DpiDependentMetric = v10;
      goto LABEL_12;
    }
    if ( (v8 & 0x408) == 8 )
    {
      LOWORD(v10) = i - 8;
    }
    else
    {
      v10 = (a2 >> 3) + 1;
      DpiDependentMetric = v10;
    }
LABEL_12:
    v14 = (__int16)v3;
    v3 = DpiDependentMetric;
    *(v4 - 1) = DpiDependentMetric;
    *v4 = v10;
    if ( DpiDependentMetric <= v14 )
      v3 = v7;
    v2 += 2;
    v4 += 4;
  }
  return v3;
}
