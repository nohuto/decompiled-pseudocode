/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C02823E4
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C0291C00 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(HSURF a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  unsigned int v7; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v5, a1);
  v1 = v6;
  if ( !v6 || (*(_DWORD *)(v6 + 116) & 0x800) == 0 || (v2 = bFToL(*(float *)(v6 + 660), (int *)&v7, 6u), v3 = v7, !v2) )
    v3 = 1;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v5);
  return v3;
}
