/*
 * XREFs of LogSenseTemperature @ 0x1C0011B30
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
 *     TemperatureFromKelvinToCelsius @ 0x1C0014688 (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // esi
  char v8; // al
  char v9; // al

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
  if ( v5 && (v7 = *(_DWORD *)(a2 + v6), v7 >= 0xA) )
  {
    NVMeZeroMemory(v5, v7);
    *v5 = 201326605;
    *((_WORD *)v5 + 2) = 0;
    v8 = *((_BYTE *)v5 + 6) & 0x40;
    *((_BYTE *)v5 + 7) = 2;
    *((_BYTE *)v5 + 9) = -1;
    *((_BYTE *)v5 + 6) = v8 | 3;
    if ( v7 >= 0x10 )
    {
      *((_WORD *)v5 + 5) = 256;
      v9 = v5[3] & 0x40;
      *((_BYTE *)v5 + 13) = 2;
      *((_BYTE *)v5 + 12) = v9 | 3;
      *((_BYTE *)v5 + 15) = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 180));
    }
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
