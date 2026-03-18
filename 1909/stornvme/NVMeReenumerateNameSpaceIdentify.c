/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C0017364
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C00150A0 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+60h] [rbp+30h]

  if ( *(_DWORD *)(a1 + 1328) )
    v2 = *(_QWORD *)(a1 + 1424);
  else
    v2 = *(_QWORD *)(a1 + 1528);
  v4 = *(void **)(v2 + 4232);
  if ( !v4 )
    return StorPortExtendedFunction(0LL, a1, 2048LL);
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  return StorPortExtendedFunction(1LL, a1, v4);
}
