/*
 * XREFs of ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x180381870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180366160 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180381130 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 */

void __fastcall CVirtualDesktopContainerElement::FrameRectChanged(
        CVirtualDesktopContainerElement *this,
        const struct tagRECT *a2)
{
  struct _GUID *v2; // r14
  LONG top; // r9d
  LONG right; // r10d
  LONG bottom; // r11d
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  int v13; // eax
  struct _GUID v14; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF

  v2 = (struct _GUID *)((char *)this + 32);
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v14.Data1 = a2->left;
  *(_DWORD *)&v14.Data2 = top;
  *(_DWORD *)v14.Data4 = right;
  *(_DWORD *)&v14.Data4[4] = bottom;
  if ( !Platform::Guid::Equals((CVirtualDesktopContainerElement *)((char *)this + 32), &v14) )
  {
    v14.Data1 = v7;
    *(_DWORD *)&v14.Data2 = v8;
    *(_DWORD *)v14.Data4 = v9;
    *(_DWORD *)&v14.Data4[4] = v10;
    *v2 = v14;
    v11 = (__int64 *)*((_QWORD *)this + 72);
    v12 = &v11[*((_QWORD *)this + 73)];
    while ( v11 != v12 )
    {
      v17 = *v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      v16 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v17, &v16);
      if ( v13 >= 0 )
        (*(void (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v16 + 32LL))(v16, v2);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x156,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      ++v11;
    }
    CMultitaskingViewElementBase::_LayoutChildren((_QWORD *)this - 27, 0, 0LL);
  }
}
