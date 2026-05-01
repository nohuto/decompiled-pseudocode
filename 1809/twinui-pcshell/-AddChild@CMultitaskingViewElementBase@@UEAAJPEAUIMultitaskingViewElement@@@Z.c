/*
 * XREFs of ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180303710
 * Callers:
 *     ?AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180308000 (-AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803058C4 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::AddChild(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  __int64 v2; // rax
  bool v4; // bp
  __int64 **v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rax
  HRESULT v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v18; // [rsp+50h] [rbp+8h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  v4 = 1;
  v18 = 1;
  v6 = (__int64 **)(*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, IRawElementProviderSimple **))(v2 + 384))(
                     this,
                     &pProvider);
  v7 = *v6;
  v8 = **v6;
  v9 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 400LL))(a2);
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IMultitaskingViewElement *, char *))(v8 + 24))(
          v7,
          v9,
          a2,
          &v18);
  if ( v10 >= 0 )
    v4 = v18 != 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      61LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  if ( !v4 )
    return 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, CMultitaskingViewElementBase *))(*(_QWORD *)a2 + 32LL))(
          a2,
          this);
  if ( v11 < 0 )
  {
    v12 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 576LL))(
          this,
          a2);
  if ( v11 < 0 )
  {
    v12 = 64LL;
    goto LABEL_7;
  }
  if ( UiaClientsAreListening()
    && (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this)
    && (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 328LL))(this) )
  {
    v14 = *(_QWORD *)a2;
    pProvider = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(v14 + 168))(a2) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
      v15 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a2 + 376LL))(
              a2,
              &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
              &pProvider);
      if ( v15 < 0 )
      {
        v16 = 68LL;
LABEL_18:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v16,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_19;
      }
      v15 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
      if ( v15 < 0 )
      {
        v16 = 70LL;
        goto LABEL_18;
      }
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
  }
  CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  return 0LL;
}
