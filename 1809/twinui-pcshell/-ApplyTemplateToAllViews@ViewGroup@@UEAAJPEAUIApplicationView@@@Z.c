/*
 * XREFs of ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x180206620
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x180205908 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___.c)
 */

__int64 __fastcall ViewGroup::ApplyTemplateToAllViews(ViewGroup *this, struct IApplicationView *a2)
{
  struct IApplicationView *v2; // r11
  char *v4; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v11; // rdx
  const char *v12; // r9
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  int v14[2]; // [rsp+20h] [rbp-28h]
  char *v15; // [rsp+28h] [rbp-20h] BYREF
  char *v16; // [rsp+30h] [rbp-18h]
  struct IApplicationView *v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h]

  *(_QWORD *)v14 = -2LL;
  v2 = a2;
  if ( *((_QWORD *)this + 23) > 1uLL )
  {
    v4 = (char *)this - 8;
    if ( this != (ViewGroup *)8 )
    {
      v5 = *((_QWORD *)v4 + 9);
      while ( v5 >= 0 )
      {
        if ( (_DWORD)v5 != 0x7FFFFFFF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 9, v5 + 1, v5);
          if ( v6 != v5 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
        (Microsoft::WRL::Details *)(2 * v5 + 16),
        (volatile int *)a2);
    }
LABEL_9:
    v15 = v4;
    v16 = v4;
    v17 = v2;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 27);
    v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
           v8,
           v7,
           (__int64)this + 216,
           &v15);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release((__int64)v16);
    if ( v9 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          573LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
_ViewGroup__ApplyTemplateToAllViews____1___catch$7:
        *((_DWORD *)v11 + 20) = wil::details::in1diag3::Return_CaughtException(
                                  (wil::details::in1diag3 *)v11[9],
                                  (void *)0x241,
                                  (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                                  v12);
        return v19;
      }
      catch ( ... )
      {
        v11 = &v13;
        goto _ViewGroup__ApplyTemplateToAllViews____1___catch$7;
      }
    }
  }
  return 0LL;
}
