/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008163C
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180081744 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180012750 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012CD8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FA00 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp @ 0x18007E53C (McTemplateU0qp.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x1800819D0 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180081F18 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800935C8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CWindowIconic ****this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  CWindowIconic *v7; // rcx
  CWindowData *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = *((_QWORD *)a2 + 49);
  *((_BYTE *)a2 + 606) &= ~8u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, v8, 0);
  if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, *this[2]);
  if ( !v3 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find(this + 2, &v8) )
    DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)(this + 2), &v8);
  CWindowData::SetIconicBitmap(v8, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v6, (int)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)v8 + 5));
  v7 = (CWindowIconic *)*((_QWORD *)v8 + 55);
  if ( v7 )
  {
    CWindowIconic::SetBitmap(v7, *((struct CBitmapSource **)v8 + 49), (*((_BYTE *)v8 + 606) & 2) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v8 + 55));
  }
}
