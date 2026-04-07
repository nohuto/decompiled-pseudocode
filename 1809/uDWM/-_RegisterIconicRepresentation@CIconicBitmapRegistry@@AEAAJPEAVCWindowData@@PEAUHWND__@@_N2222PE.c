/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18007BEA8
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18007BC7C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180020DC4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18007BBE8 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // ebx
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  int v16; // r8d

  v9 = 0;
  if ( a6 )
    v13 = 2;
  else
    v13 = a4 && !a5;
  *(_DWORD *)a9 = v13;
  if ( v13 == 1 && !a7 )
  {
    v14 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xB2u);
      return v9;
    }
    v13 = *(_DWORD *)a9;
  }
  if ( a8 != (v13 == 2) && a2 != (struct CWindowData *)-1LL )
  {
    CIconicBitmapRegistry::RegisterBitmapInUse(this, a2, v13 == 2);
    v13 = *(_DWORD *)a9;
  }
  v15 = v13 - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
      v16 = 6;
    else
      v16 = 4;
  }
  else
  {
    v16 = 5;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp((__int64)this, (int)&UdwmSelectIconicRepresentation_Info, v16, a3);
  return v9;
}
