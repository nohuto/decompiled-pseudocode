/*
 * XREFs of ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVIRenderTargetDesktop@@@Z @ 0x1800E6AD0
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x1800E69F8 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::AddDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        unsigned int *a2,
        struct IRenderTargetDesktop *a3)
{
  signed int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  signed int v9; // eax
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  v4 = ++CUINTDesktopAssociation::g_uintGlobalId;
  if ( a3 )
  {
    v6 = *((unsigned int *)this + 6);
    *((_QWORD *)&v12 + 1) = a3;
    v7 = 0;
    LODWORD(v12) = v4;
    if ( (_DWORD)v6 )
    {
      while ( *(_DWORD *)(*(_QWORD *)this + 16LL * v7) != v4 )
      {
        if ( ++v7 >= (unsigned int)v6 )
          goto LABEL_3;
      }
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x37u, 0LL);
    }
    else
    {
LABEL_3:
      v8 = v6 + 1;
      if ( (int)v6 + 1 < (unsigned int)v6 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      else
      {
        if ( v8 <= *((_DWORD *)this + 5) )
        {
          *(_OWORD *)(*(_QWORD *)this + 16 * v6) = v12;
          *((_DWORD *)this + 6) = v8;
          goto LABEL_9;
        }
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 16, 1, &v12);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC3u, 0LL);
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x3Bu, 0LL);
    }
  }
LABEL_9:
  *a2 = v4;
  return (unsigned int)v3;
}
