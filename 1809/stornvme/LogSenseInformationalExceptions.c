/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C0011954
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0013CE4 (ScsiLogSenseRequest.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  char v8; // al

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v6 = 16LL;
  }
  if ( v5 && (v7 = *(_DWORD *)(a2 + v6), v7 >= 0xC) )
  {
    NVMeZeroMemory(v5, v7);
    *v5 = 134217775;
    *((_WORD *)v5 + 2) = 0;
    v8 = *((_BYTE *)v5 + 6) & 0x40;
    *(_DWORD *)((char *)v5 + 7) = -16777212;
    *((_BYTE *)v5 + 6) = v8 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(a2, 6, a3, 36);
    return 3238002694LL;
  }
}
