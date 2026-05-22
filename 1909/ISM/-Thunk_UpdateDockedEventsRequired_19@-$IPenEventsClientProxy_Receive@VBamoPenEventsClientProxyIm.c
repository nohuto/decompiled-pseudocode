/*
 * XREFs of ?Thunk_UpdateDockedEventsRequired_19@?$IPenEventsClientProxy_Receive@VBamoPenEventsClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180033350
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800272E0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18005A7C0 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IPenEventsClientProxy_Receive<BamoImpl::BamoPenEventsClientProxyImpl>::Thunk_UpdateDockedEventsRequired_19(
        __int64 a1,
        _BYTE **a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 35) = **a2;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v6,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL));
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11389LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v6);
  }
  return 0LL;
}
