/*
 * XREFs of UsbhAllocateTimerObject @ 0x1C0028B60
 * Callers:
 *     UsbhBusPnpStart @ 0x1C00283B0 (UsbhBusPnpStart.c)
 * Callees:
 *     memset @ 0x1C002CA00 (memset.c)
 */

_QWORD *__fastcall UsbhAllocateTimerObject(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  result = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x50uLL, 0x42554855u);
  v7 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    if ( (UsbhLogMask & 0x2000) != 0 && a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1416195689;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = a2;
      }
    }
    *v7 = 1332899156LL;
    result = v7;
    v7[6] = a2;
    *((_DWORD *)v7 + 18) = a3;
    *((_DWORD *)v7 + 2) = 1;
  }
  return result;
}
