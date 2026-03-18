/*
 * XREFs of rimProcessKeyboardInput @ 0x1C00FF620
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C00F5274 (RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessKeyboardInput(__int64 a1, __int64 a2)
{
  int v3; // ebx
  NTSTATUS result; // eax

  v3 = a2;
  if ( (*(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848))
    && (result = *(_DWORD *)(a2 + 184), (result & 0x1000) != 0)
    && (result & 0x20000) != 0
    && (result & 0x400000) == 0 )
  {
    if ( (result & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x100000;
      result = ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
    }
    *(_BYTE *)(a1 + 568) = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(4096LL, a2);
    return rimStackAttachAndProcessInput(a1, v3, v3 + 500, v3 + 256, 0);
  }
  return result;
}
