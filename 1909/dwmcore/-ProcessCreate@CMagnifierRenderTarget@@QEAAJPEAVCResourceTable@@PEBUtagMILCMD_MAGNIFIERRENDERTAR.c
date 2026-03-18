/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x1801A8EC8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  signed int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _OWORD *v8; // rcx

  *((_QWORD *)this + 44) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 5));
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x5Bu, 0LL);
  }
  else
  {
    v8 = (_OWORD *)((char *)a3 + 16);
    *((_DWORD *)this + 22) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 23) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *(_OWORD *)((char *)this + 392) = *v8;
      *(_OWORD *)((char *)this + 408) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)this + 424) = *((_OWORD *)a3 + 3);
      *(_OWORD *)((char *)this + 440) = *((_OWORD *)a3 + 4);
      *(_OWORD *)((char *)this + 456) = *((_OWORD *)a3 + 5);
      *(_OWORD *)((char *)this + 472) = *((_OWORD *)a3 + 6);
      *(_OWORD *)((char *)this + 488) = *((_OWORD *)a3 + 7);
      *(_OWORD *)((char *)this + 504) = *((_OWORD *)a3 + 8);
      *(_OWORD *)((char *)this + 520) = *((_OWORD *)a3 + 9);
      *(_OWORD *)((char *)this + 536) = *((_OWORD *)a3 + 10);
      *(_OWORD *)((char *)this + 552) = *((_OWORD *)a3 + 11);
      *(_OWORD *)((char *)this + 568) = *((_OWORD *)a3 + 12);
      *(_OWORD *)((char *)this + 584) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x80070057, 0x62u, 0LL);
    }
  }
  return v7;
}
