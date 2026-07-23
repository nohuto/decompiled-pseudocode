/*
 * XREFs of KiValidateComponentName @ 0x140293150
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x140292C50 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     RtlStringCbLengthA @ 0x140286484 (RtlStringCbLengthA.c)
 */

char __fastcall KiValidateComponentName(__int64 psz, _DWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  if ( !MiIsAddressValid(psz) )
    return 0;
  v4 = psz & 0xFFFFFFFFFFFFF000uLL;
  v5 = 257;
  if ( psz - (psz & 0xFFFFFFFFFFFFF000uLL) > 0xEFF )
  {
    v6 = -1LL;
    if ( v4 + 4096 >= v4 )
      v6 = v4 + 4096;
    v7 = 0LL;
    if ( v4 + 4096 >= v4 )
      v7 = v6;
    if ( !v7 || !MiIsAddressValid(v7) )
      v5 = v4 - psz + 4096;
  }
  if ( RtlStringCbLengthA((STRSAFE_PCNZCH)psz, v5, &pcbLength) < 0 )
    return 0;
  *a2 = pcbLength;
  return 1;
}
