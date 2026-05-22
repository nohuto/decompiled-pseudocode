/*
 * XREFs of ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z @ 0x180115204
 * Callers:
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x180113E80 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800241E8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCManagerClientPrincipal *__fastcall MPCManagerClientPrincipal::MPCManagerClientPrincipal(
        MPCManagerClientPrincipal *this,
        struct MPCManagerClientConnection *a2,
        struct MPCManagerClient *a3)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  *(_QWORD *)this = &BamoMPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManagerClientPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCManagerClientPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
  {
    v5 = *((_QWORD *)a3 + 6);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)a3 + 6, v5 + 1, v5);
      if ( v6 == v5 )
        return this;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
  return this;
}
