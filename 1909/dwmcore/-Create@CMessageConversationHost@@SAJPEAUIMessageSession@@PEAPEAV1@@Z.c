/*
 * XREFs of ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1EA4
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x1800E1F60 (-InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x1800E2088 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180187CB8 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

__int64 __fastcall CMessageConversationHost::Create(struct IMessageSession *a1, struct CMessageConversationHost **a2)
{
  CMessageConversationHost *v4; // rax
  __int64 v5; // r8
  CMessageConversationHost *v6; // rax
  __int64 v7; // rcx
  CMessageConversationHost *v8; // rdi
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int ConversationHost; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = (CMessageConversationHost *)DefaultHeap::AllocClear(0x38uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  v6 = CMessageConversationHost::CMessageConversationHost(v4, a1);
  v8 = v6;
  if ( !v6 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x1Bu, 0LL);
    return v11;
  }
  v19 = 0;
  v9 = CMessageConversationHost::InitializeServer(v6, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x60u, 0LL);
    goto LABEL_13;
  }
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64))v8 + 4))(
          *((_QWORD *)v8 + 4),
          &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
          (__int64)v8 + 40);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x69u, 0LL);
    goto LABEL_13;
  }
  ConversationHost = CoreUICallCreateConversationHost(*((_QWORD *)v8 + 3), *((_QWORD *)v8 + 4), (char *)v8 + 48, 0LL);
  v11 = ConversationHost;
  if ( ConversationHost < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ConversationHost, 0x75u, 0LL);
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v11, 0x1Cu, 0LL);
    CMessageConversationHost::Disconnect(v8);
    CGdiSpriteBitmap::Release(v8);
    return v11;
  }
  v11 = 0;
  *a2 = v8;
  return v11;
}
