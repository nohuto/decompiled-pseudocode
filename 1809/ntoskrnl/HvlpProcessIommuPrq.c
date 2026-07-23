/*
 * XREFs of HvlpProcessIommuPrq @ 0x140278430
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpProcessIommuPrq(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = *a1;
  result = HvcallpExtendedFastHypercall(65731LL, (__int64)v3, 8LL);
  a1[1] = 1;
  return result;
}
