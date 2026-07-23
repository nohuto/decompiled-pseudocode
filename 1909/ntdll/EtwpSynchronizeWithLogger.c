/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1800874E0
 * Callers:
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18010D4B0 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010D73C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18010D9C8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009D050 (ZwSetEvent.c)
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
