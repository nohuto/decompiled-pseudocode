/*
 * XREFs of NVMeReenumerateNameSpaceStart @ 0x1C0016994
 * Callers:
 *     NVMeGetLogPageCompletion @ 0x1C0001560 (NVMeGetLogPageCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C0007990 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C0016790 (NVMeReenumerateNameSpaceIdentify.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 i; // rdi
  void *v7; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 1528);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 2u);
  if ( *(_DWORD *)(v4 + 516) )
    return NVMeReenumerateNameSpaceIdentify(a1);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 184); i = (unsigned int)(i + 1) )
  {
    v7 = *(void **)(a1 + 8 * i + 1640);
    if ( v7 )
      NVMeZeroMemory(v7, 0x60u);
  }
  *(_DWORD *)(a1 + 172) = 0;
  result = StorPortNotification(7LL, a1, 0LL, a4);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 1u);
  return result;
}
