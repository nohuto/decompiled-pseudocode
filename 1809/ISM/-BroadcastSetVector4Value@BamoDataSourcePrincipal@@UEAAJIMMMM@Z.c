/*
 * XREFs of ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x1800993D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@ZIMMMM@Z @ 0x18009C0A4 (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector4Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  int v8; // r9d
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+80h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v12, this[3]);
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 3) + 40LL) )
  {
    v9 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
           (int)this + 8,
           (unsigned int)BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector4ValueOnStub,
           a2,
           v8,
           LODWORD(a4),
           LODWORD(a5),
           LODWORD(a6));
  }
  else
  {
    v9 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21D1,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  return v9;
}
