/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x1C029CA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009B96C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetColorSpaceforBitmap(HSURF a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  SURFREF::SURFREF((SURFREF *)v4, a1);
  if ( v5 )
  {
    if ( (unsigned int)SURFACE::bDIBSection(v5) )
      v1 = *(_QWORD *)(v2 + 200);
    DEC_SHARE_REF_CNT(v2);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v4);
  return v1;
}
