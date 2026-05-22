/*
 * XREFs of ?SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18012A6E0
 * Callers:
 *     ?SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18012A680 (-SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateHapticsRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012A930 (-UpdateHapticsRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micros.c)
 */

void __fastcall BamoImpl::BamoPenDevicePrincipalImpl::SetHaptics(
        BamoImpl::BamoPenDevicePrincipalImpl *this,
        struct BamoSimpleHapticsControllerPrincipal *a2)
{
  __int64 v2; // rbx
  __int64 i; // rbx
  int updated; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoSimpleHapticsControllerPrincipal *))a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v6 = 0;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoPenDevicePrincipalImpl::UpdateHapticsRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_11:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9535LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
}
