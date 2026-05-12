/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C0023448
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0017BB8 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaUnitSetQueueDepth @ 0x1C0014960 (RaUnitSetQueueDepth.c)
 *     RaidAdapterInsertUnit @ 0x1C0019464 (RaidAdapterInsertUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     StorpInitializeUnitTelemetry @ 0x1C002366C (StorpInitializeUnitTelemetry.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0zqjuuusssz @ 0x1C00263C0 (McTemplateK0zqjuuusssz.c)
 *     RaidUnitAssignIdentity @ 0x1C00499A8 (RaidUnitAssignIdentity.c)
 */

char __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  char v6; // al
  int v7; // eax
  __int64 v8; // r9
  unsigned __int64 *p_Logger; // r8

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(a2 + 1);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 92) = 4;
  *(_WORD *)(v2 + 90) = *(_WORD *)(v5 + 56);
  RaidUnitAssignIdentity(v2, a2 + 32);
  v6 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 693) = 1;
  *(_BYTE *)(v2 + 448) = v6 | 4;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 5040LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 5032LL), *(unsigned __int8 *)(a2 + 1)) )
  {
    *(_DWORD *)(v2 + 1824) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  if ( (**(_BYTE **)(v2 + 104) & 0x1F) == 1 )
    RaUnitSetQueueDepth(v2, 1u, 1u);
  StorpInitializeUnitTelemetry(v2);
  *(_DWORD *)(*(_QWORD *)(v2 + 8) + 48LL) &= ~0x80u;
  *(_DWORD *)(v2 + 3272) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4420LL);
  LOBYTE(v7) = RaidIsUnitControlSupported(v2, 12);
  if ( (_BYTE)v7 )
  {
    v7 = RaCallMiniportUnitControl(*(_QWORD *)(v2 + 24) + 312LL);
    if ( v7 >= 0 )
      LOBYTE(v7) = -1;
  }
  if ( (byte_1C00617E5 & 8) != 0 )
  {
    v8 = *(_QWORD *)(v2 + 24);
    p_Logger = &stru_1C0055A88.Logger;
    if ( *(_QWORD *)(v8 + 5272) )
      p_Logger = *(unsigned __int64 **)(v8 + 5272);
    LOBYTE(v7) = McTemplateK0zqjuuusssz(
                   (int)v2 + 169,
                   (int)v2 + 160,
                   (_DWORD)p_Logger,
                   *(_QWORD *)(v8 + 4864),
                   *(_DWORD *)(v8 + 56),
                   v8 + 5256,
                   *(_BYTE *)(v2 + 96),
                   *(_BYTE *)(v2 + 97),
                   *(_BYTE *)(v2 + 98),
                   v2 + 160,
                   v2 + 169,
                   v2 + 186,
                   (__int64)p_Logger);
  }
  return v7;
}
