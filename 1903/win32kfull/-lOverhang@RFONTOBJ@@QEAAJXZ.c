/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0054740
 * Callers:
 *     GreGetCharWidthW @ 0x1C004AE5C (GreGetCharWidthW.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0053DB0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0053EC0 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C011DD7C (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0074608 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0074E04 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0118DC0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+24h] [rbp-5Ch] BYREF
  float v13[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+50h] [rbp-30h] BYREF

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  if ( (*(_DWORD *)(v5 + 48) & 6) == 0 || v1[23] )
    return v4;
  v7 = v1[3];
  if ( (v7 & 0x4000) != 0 )
    v4 = (v1[89] - 1) / 2;
  if ( (v7 & 0x2000) == 0 )
    return v4;
  v15 = v5;
  if ( (*(_DWORD *)(v5 + 48) & 4) == 0 )
    return ++v4;
  memset(v16, 0, 0x24uLL);
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v14, (struct MATRIX *)v16, 8u);
  if ( v14[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v14);
    v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v15);
    v13[0] = (float)(int)v8;
    v13[1] = (float)SHIDWORD(v8);
    if ( (*(_DWORD *)(v14[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct VECTORFL *)v13, (struct VECTORFL *)v13, 1uLL) )
    {
      v12 = 0;
      EFLOAT::eqLength(&v12, &v11, v13);
      v11 = 0;
      bFToL(v9, &v11, 0LL);
      v10 = v11;
      if ( !v11 )
        v10 = 1;
      v4 += v10;
      return v4;
    }
    return 1;
  }
  return v2;
}
