/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C011B9B0
 * Callers:
 *     NdisClCloseCall @ 0x1C011B0C0 (NdisClCloseCall.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_LqDLqD @ 0x1C0053968 (WPP_SF_LqDLqD.c)
 *     ndisDereferenceAf @ 0x1C011E818 (ndisDereferenceAf.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // al
  int v7; // r14d
  __int64 v8; // r13
  KIRQL v9; // dl
  __int64 v10; // r15
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, __int64, __int64); // r12
  KSPIN_LOCK *v13; // rcx

  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_LqDLqD(0x27u, (__int64)NdisVcHandle, Status, (__int64)NdisVcHandle);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v7 = *((_DWORD *)NdisVcHandle + 1);
  v8 = *((_QWORD *)NdisVcHandle + 3);
  v9 = v6;
  *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF9F;
  if ( NdisPartyHandle )
    v10 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v10 = 0LL;
  v11 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 296);
  else
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 144);
  v13 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v13, v9);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF97;
    KeReleaseSpinLock(v13, v9);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(PVOID *)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((PVOID *)NdisVcHandle + 8));
    if ( (v7 & 8) != 0 )
      ndisDereferenceVcPtr(NdisVcHandle);
  }
  ndisDereferenceVcPtr(NdisVcHandle);
  v12((unsigned int)Status, v8, v10);
  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_q(0x28u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, (__int64)NdisVcHandle);
}
