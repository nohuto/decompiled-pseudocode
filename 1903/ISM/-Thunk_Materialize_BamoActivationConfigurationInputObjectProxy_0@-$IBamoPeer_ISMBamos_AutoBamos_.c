/*
 * XREFs of ?Thunk_Materialize_BamoActivationConfigurationInputObjectProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180007F90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoActivationConfigurationInputObjectProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+40h] [rbp+8h]

  v3 = **a2;
  v11 = operator new(0x38uLL);
  v11[3] = 0LL;
  v11[5] = 0LL;
  *v11 = &BamoActivationConfigurationInputObjectProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v11[1] = &BamoActivationConfigurationInputObjectProxy::`vftable'{for `IActivationConfigurationInputObjectProxy'};
  *((_DWORD *)v11 + 6) = 0;
  v11[4] = 0LL;
  v11[2] = &BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::`vftable';
  *((_DWORD *)v11 + 10) = 0;
  *((_WORD *)v11 + 22) = 0;
  v11[6] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 48LL))(v11);
  v5 = *(void (__fastcall ****)(_QWORD))(v4 + 16);
  *(_QWORD *)(v4 + 16) = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v5 )
    (**v5)(v5);
  *(_DWORD *)(v4 + 24) = v3;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 40LL))(
         v6,
         *(unsigned int *)(a1 + 36),
         v3,
         v4);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x41DD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
    __debugbreak();
  }
  return 0LL;
}
