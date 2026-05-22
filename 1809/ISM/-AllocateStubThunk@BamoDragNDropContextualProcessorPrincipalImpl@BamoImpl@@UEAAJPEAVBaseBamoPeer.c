/*
 * XREFs of ?AllocateStubThunk@BamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180021A40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl::AllocateStubThunk(
        BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Microsoft::Bamo::BamoStub **))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((_QWORD *)a2 + 2),
         &v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA55A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180021AABLL);
  }
  *a3 = v9;
  return 0LL;
}
