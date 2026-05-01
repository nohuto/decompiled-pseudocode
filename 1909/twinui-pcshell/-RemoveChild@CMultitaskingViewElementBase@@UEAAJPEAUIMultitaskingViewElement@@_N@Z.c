/*
 * XREFs of ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x180384DE0
 * Callers:
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803891A0 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x18038C6A0 (-RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18028D4D8 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18037B9D8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180383640 (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     ?_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1803858D8 (-_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180385A20 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180385B18 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180385F14 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::RemoveChild(struct IUnknown **this, struct IUnknown *a2, char a3)
{
  struct IMultitaskingViewElement *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // ebx
  struct IMultitaskingViewElement *v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  HRESULT v13; // eax
  __int64 v14; // rdx
  IRawElementProviderSimple *v15; // rbx
  UINT Dim; // eax
  struct IUnknown *v18; // [rsp+30h] [rbp-10h] BYREF
  void *ppvData; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+88h] [rbp+48h] BYREF
  SAFEARRAY *psa; // [rsp+98h] [rbp+58h] BYREF

  v18 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v8 = 0;
  if ( ElementHelpers::IsSameElement(a2, this[21], v6) )
  {
    CMultitaskingViewElementBase::_GetFocusForRemovedChild(this, &v21, a2);
    ((void (__fastcall *)(struct IUnknown **, unsigned __int64))(*this)[36].lpVtbl)(this, v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
         this + 2,
         v7,
         &v18,
         &v21);
  if ( v9 < 0
    || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
               this + 2,
               v21),
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v9);
    v8 = v9;
    goto LABEL_31;
  }
  if ( ElementHelpers::IsSameElement(a2, this[16], v10) )
    CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)this);
  if ( UiaClientsAreListening()
    && ((unsigned __int8 (__fastcall *)(struct IUnknown **))(*this)[21].lpVtbl)(this)
    && ((unsigned __int8 (__fastcall *)(struct IUnknown *))a2->lpVtbl[7].QueryInterface)(a2)
    && ((__int64 (__fastcall *)(struct IUnknown **))(*this)[41].lpVtbl)(this) )
  {
    pProvider = 0LL;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
    v11 = ((__int64 (__fastcall *)(struct IUnknown **, GUID *, IRawElementProviderSimple **))(*this)[47].lpVtbl)(
            this,
            &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
            &pProvider);
    if ( v11 < 0 )
    {
      v12 = 111LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pProvider);
      goto LABEL_25;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, unsigned __int64 *))a2->lpVtbl[15].Release)(
            a2,
            &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
            &v21);
    if ( v11 < 0 )
    {
      v12 = 112LL;
      goto LABEL_13;
    }
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, SAFEARRAY **))(*(_QWORD *)v21 + 32LL))(v21, &psa);
    if ( v11 < 0 )
    {
      v12 = 113LL;
      goto LABEL_13;
    }
    v13 = SafeArrayAccessData(psa, &ppvData);
    if ( v13 >= 0 )
    {
      v15 = pProvider;
      Dim = SafeArrayGetDim(psa);
      v13 = UiaRaiseStructureChangedEvent(v15, StructureChangeType_ChildRemoved, (int *)ppvData, Dim);
      if ( v13 >= 0 )
      {
LABEL_23:
        SafeArrayDestroy(psa);
        goto LABEL_24;
      }
      v14 = 122LL;
    }
    else
    {
      v14 = 116LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_23;
  }
LABEL_25:
  ((void (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[1].AddRef)(a2, 0LL);
  if ( a3 )
    CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  if ( *((_DWORD *)this + 24) == 1 )
    CMultitaskingViewElementBase::_PointerMove(
      (CMultitaskingViewElementBase *)this,
      (const struct MultitaskingViewPointerInputArgs *)(this + 18));
  ((void (__fastcall *)(struct IUnknown **))(*this)[52].lpVtbl)(this);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v8;
}
