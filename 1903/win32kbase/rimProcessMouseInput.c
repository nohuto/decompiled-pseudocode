/*
 * XREFs of rimProcessMouseInput @ 0x1C0154174
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C0154534 (rimStackAttachAndProcessInput.c)
 *     rimUpdateLatestMouseState @ 0x1C0154684 (rimUpdateLatestMouseState.c)
 */

NTSTATUS __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v2; // edi
  NTSTATUS result; // eax

  v2 = a2;
  if ( (*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864))
    && (result = *(_DWORD *)(a2 + 184), (result & 0x2000) != 0)
    && (result & 0x20000) != 0
    && (result & 0x400000) == 0 )
  {
    if ( (result & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = result | 0x100000;
      result = ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
    }
    *(_BYTE *)(a1 + 584) = 1;
  }
  else
  {
    rimUpdateLatestMouseState(a1, a2);
    return rimStackAttachAndProcessInput(a1, v2, v2 + 476, v2 + 256, 0);
  }
  return result;
}
