/*
 * XREFs of TR_InitializeTransferRing @ 0x1C00292D8
 * Callers:
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_InitializeTransferRing @ 0x1C00190BC (Endpoint_InitializeTransferRing.c)
 *     TR_Enable_Internal @ 0x1C0028BA8 (TR_Enable_Internal.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     TR_InitializeTransferSegment @ 0x1C002934C (TR_InitializeTransferSegment.c)
 */

__int64 __fastcall TR_InitializeTransferRing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 280) )
    TR_InitializeTransferSegment(a1, *(_QWORD *)(a1 + 176));
  memset(*(void **)(*(_QWORD *)(a1 + 176) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 176) + 44LL));
  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = v3;
  result = (unsigned int)((*(_DWORD *)(v2 + 44) >> 4) - 1);
  *(_DWORD *)(a1 + 200) = 1;
  *(_DWORD *)(a1 + 196) = result;
  return result;
}
