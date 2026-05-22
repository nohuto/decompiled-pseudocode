/*
 * XREFs of ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x18001BC90
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18001CF90 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoDataSourcePrincipalImpl@1@@Z1@Z @ 0x18001D318 (--$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemPrincipal::SetInputSiteManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputSiteManagerPrincipal *a2)
{
  char *v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  v4 = *((_QWORD *)v3 + 10);
  *((_QWORD *)v3 + 10) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoInputSiteManagerPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoDataSourcePrincipalImpl *>(
         v3,
         BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCacheStatic,
         v3);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB99D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18001BD37LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v7);
}
