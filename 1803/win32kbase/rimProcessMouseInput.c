/*
 * XREFs of rimProcessMouseInput @ 0x1C00FF6C4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  NTSTATUS result; // eax

  v2 = a2 + 256;
  if ( *(int *)(a2 + 256) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 264);
    if ( v5 - 24 <= 0xD8 )
    {
      v6 = (unsigned int)(v5 / 0x18) - 1;
      *(_OWORD *)(a2 + 716) = *(_OWORD *)(a2 + 24 * v6 + 476);
      *(_QWORD *)(a2 + 732) = *(_QWORD *)(a2 + 24 * v6 + 492);
    }
  }
  if ( !*(_QWORD *)(a1 + 624) && !*(_DWORD *)(a1 + 848) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 476, v2, 0);
  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x1000) == 0 || (result & 0x20000) == 0 || (result & 0x400000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 476, v2, 0);
  if ( (result & 0x100000) == 0 )
  {
    *(_DWORD *)(a2 + 184) = result | 0x100000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
  }
  *(_BYTE *)(a1 + 568) = 1;
  return result;
}
