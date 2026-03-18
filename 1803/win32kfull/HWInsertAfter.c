/*
 * XREFs of HWInsertAfter @ 0x1C019EEC0
 * Callers:
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C006FEBC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
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
