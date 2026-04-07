/*
 * XREFs of ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004017C
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800256EC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003EBF4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800401A8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::IconicRepresentationDestroyed(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rdx
  CIconicBitmapRegistry *v3; // rcx

  *((_BYTE *)a2 + 606) &= ~8u;
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
  if ( *((_QWORD *)v2 + 49) )
    CIconicBitmapRegistry::RegisterBitmapInUse(v3, v2, 0);
}
