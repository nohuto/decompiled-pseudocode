/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18004CFA0
 * Callers:
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18010F3E0 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010F670 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18010F7A8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 332) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 332) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
