/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003FE98
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003FDEC (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012ADC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp @ 0x18007E89C (McTemplateU0qp.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800821A4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
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
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // r8
  int v16; // eax
  void *v17; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( a6 )
    v12 = 2;
  else
    v12 = a4 && !a5;
  *(_DWORD *)a9 = v12;
  if ( v12 == 1 && !a7 )
  {
    v16 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1);
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB2u, v17);
      return v9;
    }
    v12 = *(_DWORD *)a9;
  }
  if ( a8 != (v12 == 2) && a2 != (struct CWindowData *)-1LL )
  {
    CIconicBitmapRegistry::RegisterBitmapInUse(this, a2, v12 == 2);
    v12 = *(_DWORD *)a9;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
      v14 = 6LL;
    else
      v14 = 4LL;
  }
  else
  {
    v14 = 5LL;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(this, &UdwmSelectIconicRepresentation_Info, v14);
  return v9;
}
