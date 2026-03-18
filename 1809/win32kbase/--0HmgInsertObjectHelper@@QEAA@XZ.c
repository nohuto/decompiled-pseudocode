/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0004E38 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreCreateRectRgn @ 0x1C0004F50 (GreCreateRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0043910 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C006AF70 (NtGdiCreateRectRgn.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0070A6C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  memset(this, 0, 0x20uLL);
  PushThreadGuardedObject(
    this,
    (__int64)this,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
