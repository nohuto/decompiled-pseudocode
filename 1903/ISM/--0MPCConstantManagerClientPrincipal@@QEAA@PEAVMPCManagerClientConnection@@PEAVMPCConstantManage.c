/*
 * XREFs of ??0MPCConstantManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCConstantManagerClient@@@Z @ 0x180123EF0
 * Callers:
 *     ?EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ @ 0x18011C45C (-EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::MPCConstantManagerClientPrincipal(
        MPCConstantManagerClientPrincipal *this,
        struct MPCManagerClientConnection *a2,
        struct MPCConstantManagerClient *a3)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  *(_QWORD *)this = &BamoMPCConstantManagerClientCallbacksPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientCallbacksPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (MPCConstantManagerClientPrincipal *)((char *)this + 16),
    a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCConstantManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientCallbacksPrincipal'};
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
  {
    v5 = *((_QWORD *)a3 + 3);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)a3 + 3, v5 + 1, v5);
      if ( v6 == v5 )
        return this;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
  return this;
}
