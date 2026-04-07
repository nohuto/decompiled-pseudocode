/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800401A8
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004017C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180081D40 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  char v3; // al

  if ( !*((_QWORD *)a2 + 49) )
  {
    v3 = *((_BYTE *)a2 + 606) & 4;
    if ( a3 )
    {
      if ( !v3 )
        ++*((_DWORD *)this + 21);
    }
    else if ( v3 )
    {
      --*((_DWORD *)this + 21);
    }
  }
  *((_BYTE *)a2 + 606) &= ~4u;
  *((_BYTE *)a2 + 606) |= 4 * a3;
}
