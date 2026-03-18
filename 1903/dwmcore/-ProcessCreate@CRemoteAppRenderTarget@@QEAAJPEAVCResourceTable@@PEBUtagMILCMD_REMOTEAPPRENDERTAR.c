/*
 * XREFs of ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801A5E70
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x1800A3A1C (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801A6720 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessCreate(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_CREATE *a3)
{
  CMILCOMBase *Resource; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x30u);
  if ( *((_QWORD *)this + 21) || !Resource )
  {
    v8 = -2003303421;
    v9 = -2003303421;
    v11 = 67;
    goto LABEL_9;
  }
  *((_QWORD *)this + 21) = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  *((_QWORD *)this + 35) = *((_QWORD *)a3 + 2);
  v7 = CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)a3 + 24));
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 71;
    goto LABEL_6;
  }
  v7 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 75;
LABEL_6:
    v9 = v7;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, v11, 0LL);
  }
  return v8;
}
