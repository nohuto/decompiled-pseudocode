/*
 * XREFs of ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18015FBC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007E858 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x180160420 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessCreate(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTEAPPRENDERTARGET_CREATE *a3)
{
  CMILCOMBase *Resource; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Du);
  if ( *((_QWORD *)this + 21) || !Resource )
  {
    v8 = -2003303421;
    v11 = 66;
    v9 = -2003303421;
    goto LABEL_9;
  }
  *((_QWORD *)this + 21) = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  *((_QWORD *)this + 35) = *(_QWORD *)((char *)a3 + 12);
  v7 = CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)a3 + 20));
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 70;
    goto LABEL_6;
  }
  v7 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 74;
LABEL_6:
    v9 = v7;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, v11);
  }
  return v8;
}
