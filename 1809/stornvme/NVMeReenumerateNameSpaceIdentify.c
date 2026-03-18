/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C0016790
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x1C0016994 (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax

  StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  ++*(_DWORD *)(a1 + 3796);
  result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 1u);
  return result;
}
