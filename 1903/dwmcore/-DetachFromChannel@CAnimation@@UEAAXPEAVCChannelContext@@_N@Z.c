/*
 * XREFs of ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C7B30
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800BAF3C (-FlushCallbackId@CMessageConversationHost@@QEAAJII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::DetachFromChannel(CAnimation *this, struct CChannelContext *a2, bool a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( (struct CChannelContext *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 7) + 24LL))((char *)this + 56) == a2 )
  {
    v6 = *((unsigned int *)this + 75);
    if ( (_DWORD)v6 )
    {
      v7 = *((unsigned int *)this + 74);
      if ( (_DWORD)v7 )
        CMessageConversationHost::FlushCallbackId(
          *(CMessageConversationHost **)(*((_QWORD *)this + 2) + 1224LL),
          v6,
          v7);
    }
    *((_DWORD *)this + 74) = 0;
  }
  CResource::DetachFromChannel(this, a2, a3);
}
