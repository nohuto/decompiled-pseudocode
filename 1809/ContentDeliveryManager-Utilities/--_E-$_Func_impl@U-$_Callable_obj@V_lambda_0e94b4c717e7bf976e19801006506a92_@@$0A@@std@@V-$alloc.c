/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_0e94b4c717e7bf976e19801006506a92_@@$0A@@std@@V?$allocator@V?$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@@2@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@2@U72@U72@U72@U72@U72@@std@@UEAAPEAXI@Z @ 0x180076E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180022FF0.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_0e94b4c717e7bf976e19801006506a92_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  volatile signed __int64 *v4; // rcx

  *a1 = off_1800E0228;
  v4 = (volatile signed __int64 *)a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v4);
  }
  *a1 = &std::_Func_base<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
