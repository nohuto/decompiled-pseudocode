/*
 * XREFs of _lambda_d6825bbef0718a568adec6fcdf443266_::operator() @ 0x18003585C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d6825bbef0718a568adec6fcdf443266__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800359A0 (std--_Func_impl_no_alloc__lambda_d6825bbef0718a568adec6fcdf443266__void__MIT_INPUT__ea_1800359A0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x18000C020 (-SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B544 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d6825bbef0718a568adec6fcdf443266_::operator()(DWMInputRouter **a1, int *a2)
{
  int v4; // esi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 (__fastcall ***v6)(_QWORD); // rbx
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+40h] [rbp+8h] BYREF

  ActivationListenerWindowIdAdapter::SetActiveWindowId(*((_QWORD *)a2 + 2));
  v4 = *a2;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)BamoServerConnection + 19);
    v6 = v8;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
    if ( v6 )
    {
      v7 = v6[1][27](v6 + 1);
      if ( v7 )
        *(_DWORD *)(v7 + 184) = v4;
    }
    if ( v6 )
      (*v6)[1](v6);
  }
  DWMInputRouter::OnFocusedThreadChanged(*a1, (const struct _MIT_INPUT_FOCUS_MESSAGE *)a2);
}
