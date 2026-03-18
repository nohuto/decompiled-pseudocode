/*
 * XREFs of ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800061EC
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180005D50 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1800062C0 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x180199DFC (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rdi
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // xmm0_4
  int v8; // eax
  _BYTE v9[20]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (char *)this + 136;
  *((_QWORD *)this + 18) = *((_QWORD *)this + 17);
  std::vector<D2D1_GRADIENT_STOP>::reserve(
    (char *)this + 136,
    (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3);
  v3 = *((_QWORD *)this + 14);
  v4 = 0LL;
  v5 = (*((_QWORD *)this + 15) - v3 + 7) >> 3;
  if ( v3 > *((_QWORD *)this + 15) )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *((_QWORD *)v1 + 1);
      v7 = *(_DWORD *)(*(_QWORD *)v3 + 56LL);
      *(_OWORD *)&v9[4] = *(_OWORD *)(*(_QWORD *)v3 + 60LL);
      *(_DWORD *)v9 = v7;
      if ( *((_QWORD *)v1 + 2) == v6 )
      {
        std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(v1, v6, v9);
      }
      else
      {
        v8 = *(_DWORD *)&v9[16];
        *(_OWORD *)v6 = *(_OWORD *)v9;
        *(_DWORD *)(v6 + 16) = v8;
        *((_QWORD *)v1 + 1) += 20LL;
      }
      v3 += 8LL;
      ++v4;
    }
    while ( v4 != v5 );
  }
}
