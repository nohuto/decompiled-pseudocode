/*
 * XREFs of ?BroadcastAddDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180098850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoDataSourcePrincipalImpl@1@@Z1@Z @ 0x18001D318 (--$EnumerateStubs@PEAVBamoDataSourcePrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsof.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataProviderPrincipal::BroadcastAddDataSource(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoDataSourcePrincipal *a2)
{
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v7; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    v4 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoDataSourcePrincipalImpl *>(
           (__int64)(this + 1),
           (__int64 (__fastcall *)(__int64, __int64))BamoImpl::BamoDataProviderPrincipalImpl::CallAddDataSourceOnStub,
           (__int64)a2);
  }
  else
  {
    v4 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v7);
  return v4;
}
