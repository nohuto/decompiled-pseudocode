/*
 * XREFs of ?SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180099800
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoDataSourcePrincipalImpl@1@@Z1@Z @ 0x18001D318 (--$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsof.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoDataSourcePrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _LUID *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v6; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  this[6] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*a2;
  v4 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoDataSourcePrincipalImpl *>(
         (__int64)(this + 1),
         (__int64 (__fastcall *)(__int64, __int64))BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCacheStatic,
         (__int64)(this + 1));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x222F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180099875LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v6);
}
