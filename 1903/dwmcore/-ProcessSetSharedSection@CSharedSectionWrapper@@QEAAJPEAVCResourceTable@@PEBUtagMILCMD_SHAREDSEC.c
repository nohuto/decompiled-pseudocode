/*
 * XREFs of ?ProcessSetSharedSection@CSharedSectionWrapper@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION@@@Z @ 0x1801FA610
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionWrapper::ProcessSetSharedSection(
        CSharedSectionWrapper *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONWRAPPER_SETSHAREDSECTION *a3)
{
  unsigned int v5; // edi
  CMILCOMBase *Resource; // rax
  __int64 v7; // rcx
  CGdiSpriteBitmap *v8; // rcx
  CGdiSpriteBitmap *v9; // rsi

  v5 = 0;
  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA7u);
  if ( Resource )
  {
    v9 = (CGdiSpriteBitmap *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = Resource;
    CMILCOMBase::InternalAddRef(Resource);
    if ( v9 )
      CGdiSpriteBitmap::Release(v9);
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 17) = *((_DWORD *)a3 + 4);
    (*(void (__fastcall **)(CSharedSectionWrapper *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x88980403, 0x1Du, 0LL);
    v8 = (CGdiSpriteBitmap *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v8 )
      CGdiSpriteBitmap::Release(v8);
  }
  return v5;
}
