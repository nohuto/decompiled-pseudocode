/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0075D60
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0075ADC (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C0098C60 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C0251910 (CLIPOBJ_GetRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C0282940 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C0290FA0 (NtGdiPathToRegion.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(void **this)
{
  void *v2; // rdi
  struct HOBJ__ *inserted; // rbx
  volatile signed __int32 *v4; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v7; // [rsp+40h] [rbp-18h]

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v6);
  v2 = *this;
  inserted = 0LL;
  v4 = v7;
  if ( v7 )
    goto LABEL_5;
  inserted = HmgInsertObjectInternal(v2, 1u, 4u);
  v4 = v7;
  if ( inserted )
    v4 = (volatile signed __int32 *)v2;
  v7 = v4;
  if ( v4 )
LABEL_5:
    _InterlockedDecrement(v4 + 3);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v6);
  return inserted;
}
