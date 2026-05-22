/*
 * XREFs of ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180031CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$EnumerateStubs@PEAVBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoControllerNavigationManagerPrincipalImpl@1@@Z1@Z @ 0x180031D54 (--$EnumerateStubs@PEAVBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        char a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v6; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  *((_BYTE *)this + 48) = a2;
  v4 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoControllerNavigationManagerPrincipalImpl *>(
         this + 1,
         BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic,
         this + 1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x99DC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180031D12LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v6);
}
