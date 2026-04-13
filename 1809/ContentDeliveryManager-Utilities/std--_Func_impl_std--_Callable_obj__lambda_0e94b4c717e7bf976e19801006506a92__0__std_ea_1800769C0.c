/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_0e94b4c717e7bf976e19801006506a92__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy @ 0x1800769C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800112D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl_std::_Callable_obj__lambda_0e94b4c717e7bf976e19801006506a92__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx

  v2 = a2;
  if ( !a2 )
  {
    v2 = operator new(0x18uLL);
    if ( !v2 )
      std::_Xbad_alloc();
  }
  *v2 = off_1800E0228;
  v4 = *(_QWORD *)(a1 + 8);
  v2[1] = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef(v4);
  return v2;
}
