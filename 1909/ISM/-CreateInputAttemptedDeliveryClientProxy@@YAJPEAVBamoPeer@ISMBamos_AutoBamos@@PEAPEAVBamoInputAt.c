/*
 * XREFs of ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1800021B4
 * Callers:
 *     ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800020C0 (-Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receiv.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputAttemptedDeliveryClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputAttemptedDeliveryClientProxy **a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  _DWORD *v6; // rbx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 152) + 8LL) + 88LL))(*(_QWORD *)(v4 + 152) + 8LL);
  v6 = operator new(0x40uLL);
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6[6] = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  v6[10] = 0;
  *((_WORD *)v6 + 22) = 0;
  v6[12] = 0;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::`vftable';
  *(_QWORD *)v6 = &InputAttemptedDeliveryClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &InputAttemptedDeliveryClientProxy::`vftable'{for `IInputAttemptedDeliveryClientProxy'};
  *((_QWORD *)v6 + 7) = v5;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  *a2 = (struct BamoInputAttemptedDeliveryClientProxy *)v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattempteddeliveryclientproxy.cpp",
    (const char *)0x8007000ELL,
    v8);
  return 2147942414LL;
}
