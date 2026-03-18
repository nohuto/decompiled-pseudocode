/*
 * XREFs of HWInsertAfter @ 0x1C01D4038
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001A430 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  else
    return *(_QWORD *)a1;
}
