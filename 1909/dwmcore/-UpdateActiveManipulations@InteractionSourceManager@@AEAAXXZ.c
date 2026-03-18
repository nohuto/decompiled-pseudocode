/*
 * XREFs of ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021E2BC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800181F4 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801D9BF4 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DC7F8 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??A?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18021CF54 (--A-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18021CFCC (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18021E280 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18021E900 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_18021E900.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18021EB78 (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_ea_18021EB78.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulations(InteractionSourceManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbx
  struct CManipulation *ActiveManipulation; // rax
  int v9; // ecx
  int v10; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 14) > 1uLL )
  {
    v2 = 0LL;
    v3 = 0LL;
    v13 = 0LL;
    if ( !*((_QWORD *)this + 14) )
      goto LABEL_8;
    while ( *(_DWORD *)(*(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                                     (_QWORD *)this + 10,
                                     v3)
                      + 412LL) != 2 )
    {
      if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 14) )
        goto LABEL_8;
    }
    v2 = *(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                      (_QWORD *)this + 10,
                      v3);
    v13 = v2;
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
LABEL_8:
      v4 = 0LL;
      if ( *((_QWORD *)this + 14) )
      {
        while ( (unsigned int)(*(_DWORD *)(*(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                                                        (_QWORD *)this + 10,
                                                        v4)
                                         + 412LL)
                             - 2) > 2 )
        {
          if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 14) )
            goto LABEL_14;
        }
        v2 = *(_QWORD *)std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::operator[](
                          (_QWORD *)this + 10,
                          v4);
        v13 = v2;
        if ( v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      }
LABEL_14:
      if ( !v2 )
        goto LABEL_16;
    }
    v11[1] = 0LL;
    v11[2] = *((_QWORD *)this + 13);
    v11[0] = *((_QWORD *)this + 10);
    v5 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)v11);
    v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
           v12,
           v5);
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 80, v11, v6);
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front((char *)this + 80, &v13);
LABEL_16:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((__int64 **)this);
  if ( !ActiveManipulation )
  {
    if ( *(_DWORD *)(v7 + 168) == 2 )
      goto LABEL_29;
LABEL_28:
    CInteractionTracker::TransitionToInertia(v7, 0);
    goto LABEL_29;
  }
  v9 = *((_DWORD *)ActiveManipulation + 103);
  if ( *((_DWORD *)ActiveManipulation + 105) == 6 )
  {
    CInteractionTracker::ProcessMousewheelManipulation((CScrollScaleKeyframeAnimation **)v7);
    goto LABEL_29;
  }
  if ( (unsigned int)(v9 - 2) <= 2 && *(_DWORD *)(v7 + 168) != 1 )
  {
    CInteractionTracker::TransitionToInContact((CInteractionTracker *)v7);
    goto LABEL_29;
  }
  if ( (unsigned int)(v9 - 2) > 2 )
  {
    v10 = *(_DWORD *)(v7 + 168);
    if ( v10 != 2 )
    {
      if ( !v10 )
        CInteractionTracker::TransitionToInContact((CInteractionTracker *)v7);
      goto LABEL_28;
    }
  }
LABEL_29:
  *((_BYTE *)this + 120) = 0;
}
