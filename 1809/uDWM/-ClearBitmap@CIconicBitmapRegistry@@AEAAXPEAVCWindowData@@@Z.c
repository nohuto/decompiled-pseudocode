/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003BFFC
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180005498 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001256C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007B338 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18007BAE4 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18007BDE8 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, CWindowIconic **a2)
{
  CWindowIconic *v3; // rdi
  __int64 v4; // rcx
  struct CWindowData *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (struct CWindowData *)a2;
  if ( a2 == (CWindowIconic **)-1LL )
  {
    v3 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
LABEL_7:
    if ( v3 )
      CWindowIconic::SetBitmap(v3, 0LL, 0, 1);
    return;
  }
  if ( (unsigned int)DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, &v5) || a2[48] )
  {
    CWindowData::SetIconicBitmap((CWindowData *)a2, 0LL);
    v3 = a2[54];
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v4, &UdwmManageIconicThumbnail_Info, 2LL);
    goto LABEL_7;
  }
}
