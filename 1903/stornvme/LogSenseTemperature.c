/*
 * XREFs of LogSenseTemperature @ 0x1C0010894
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0012F4C (ScsiLogSenseRequest.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     TemperatureFromKelvinToCelsius @ 0x1C001395C (TemperatureFromKelvinToCelsius.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // esi
  char v9; // al
  char v10; // al

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( v6 && (v8 = *(_DWORD *)(a2 + v7), v8 >= 0xA) )
  {
    NVMeZeroMemory(v6, v8);
    *v6 = 201326605;
    *((_WORD *)v6 + 2) = 0;
    v9 = *((_BYTE *)v6 + 6) & 0x40;
    *((_BYTE *)v6 + 7) = 2;
    *((_BYTE *)v6 + 9) = -1;
    *((_BYTE *)v6 + 6) = v9 | 3;
    if ( v8 >= 0x10 )
    {
      *((_WORD *)v6 + 5) = 256;
      v10 = v6[3] & 0x40;
      *((_BYTE *)v6 + 13) = 2;
      *((_BYTE *)v6 + 12) = v10 | 3;
      *((_BYTE *)v6 + 15) = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 188));
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(v4 + 3) = 4;
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
