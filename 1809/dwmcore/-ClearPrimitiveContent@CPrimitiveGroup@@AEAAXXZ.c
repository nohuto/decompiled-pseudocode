/*
 * XREFs of ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1800EF60C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180029400 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800C16C0 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroup::ClearPrimitiveContent(CPrimitiveGroup *this)
{
  *((_DWORD *)this + 143) = -1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_BYTE *)this + 576) = 0;
  *(_QWORD *)((char *)this + 564) = 0LL;
  *((_DWORD *)this + 140) = 0;
}
