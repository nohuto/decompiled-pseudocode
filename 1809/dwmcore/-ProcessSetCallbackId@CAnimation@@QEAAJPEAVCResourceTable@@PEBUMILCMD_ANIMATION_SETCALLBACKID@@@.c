/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18018A814
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x180075FDC (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800CEA84 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETCALLBACKID *a3)
{
  __int64 v4; // rdx
  __int64 v7; // r8
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  __int64 v10; // rcx
  CMILRefCountBase *v11; // rdi
  unsigned int v12; // esi
  CMILRefCountBase *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *((unsigned int *)this + 75);
  if ( (_DWORD)v4 )
  {
    v7 = *((unsigned int *)this + 74);
    if ( (_DWORD)v7 )
      CMessageConversationHost::FlushCallbackId(*(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1208LL), v4, v7);
  }
  v8 = (CComposition *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v14);
  v11 = v14;
  v12 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, AttachedChannel, 0x224u);
  else
    *((_DWORD *)this + 75) = *((_DWORD *)v14 + 18);
  if ( v11 )
    CMILRefCountBase::Release(v11);
  return v12;
}
