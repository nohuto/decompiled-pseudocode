/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C00137FC
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001008 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi

  GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_QWORD *)(v4 + 64);
  else
    v5 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v5 + 56) >= 0x1000u )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 21;
    return 3238002694LL;
  }
}
