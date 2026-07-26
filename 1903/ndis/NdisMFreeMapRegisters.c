/*
 * XREFs of NdisMFreeMapRegisters @ 0x1C0139BE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 */

void __stdcall NdisMFreeMapRegisters(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // r15
  unsigned int v5; // r14d
  KIRQL v6; // bp

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      45,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 8) != 0 && *(_QWORD *)(v1 + 136) )
  {
    v3 = (unsigned int)(*(_DWORD *)(v1 + 52) - 2) >> 12;
    v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL) + 56LL);
    v5 = 0;
    v6 = KfRaiseIrql(2u);
    while ( v5 < *(unsigned __int16 *)(v1 + 154) )
      v4(*(_QWORD *)(v1 + 24), *(_QWORD *)(*(_QWORD *)(v1 + 136) + 16LL * v5++), v3 + 2);
    if ( v6 != 2 )
      KeLowerIrql(v6);
    ExFreePoolWithTag(*(PVOID *)(v1 + 136), 0);
    *(_QWORD *)(v1 + 136) = 0LL;
    ndisDereferenceDmaAdapter((PVOID)v1);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      46,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle);
}
