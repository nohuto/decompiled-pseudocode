/*
 * XREFs of ?SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180065780
 * Callers:
 *     ?SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180065720 (-SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180065C80 (-UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetPenDeviceManager(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoPenDeviceManagerPrincipal *a2)
{
  __int64 v2; // rbx
  __int64 i; // rbx
  int updated; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoPenDeviceManagerPrincipal *))a2)(a2);
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
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCacheStatic(
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
    (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
    (const char *)(unsigned int)updated);
LABEL_11:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      6395LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
}
