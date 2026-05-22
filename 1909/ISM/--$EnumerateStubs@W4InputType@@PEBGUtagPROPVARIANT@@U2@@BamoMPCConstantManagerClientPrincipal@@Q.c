/*
 * XREFs of ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x180087B44
 * Callers:
 *     ?OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18008A338 (-OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$EnumerateStubs@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@ZW42@PEBGU3@U3@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@4@Z2344@Z_N52344@Z @ 0x180087A4C (--$EnumerateStubs@P6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCConstantManagerClientPrincipal::EnumerateStubs<enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
        __int64 a1,
        Microsoft::BamoImpl::BamoImplObject *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rbx
  const char *v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int128 v17; // [rsp+70h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v20; // [rsp+A8h] [rbp+10h] BYREF

  v20 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  if ( *(_DWORD *)(v9 + 24) != GetCurrentThreadId() )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      5764LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      v10);
    __debugbreak();
  }
  Microsoft::BamoImpl::InternalLock::InternalLock(&v20, *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 32));
  v15 = *(_OWORD *)a7;
  v16 = *(_QWORD *)(a7 + 16);
  v17 = *(_OWORD *)a6;
  v18 = *(_QWORD *)(a6 + 16);
  v13 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<long (*)(BamoMPCConstantManagerClientStub *,enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT),enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
          a1 + 16,
          (__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(int, int, int, int, __int64), _QWORD, __int64, int *, __int128 *))lambda_c9e0091c899eb8092cd1e2c5b05e9e28_::_lambda_invoker_cdecl_,
          v11,
          v12,
          a4,
          a5,
          &v17,
          &v15);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v20);
  return v13;
}
