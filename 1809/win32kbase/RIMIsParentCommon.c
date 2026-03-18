/*
 * XREFs of RIMIsParentCommon @ 0x1C011B30C
 * Callers:
 *     RIMFindConfigDeviceForInput @ 0x1C011AD10 (RIMFindConfigDeviceForInput.c)
 *     RIMFindInputDeviceForConfig @ 0x1C011ADBC (RIMFindInputDeviceForConfig.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C011AEB0 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C011AFDC (RIMFindSiblingMouseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsParentCommon(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  unsigned int v5; // edi
  unsigned int v6; // eax

  v5 = 0;
  if ( *(_WORD *)(a3 + 110) == a4 && *(_WORD *)(a3 + 112) == a5 )
  {
    v6 = *(_DWORD *)(a1 + 328);
    if ( v6 == *(_DWORD *)(a2 + 328)
      && (!v6 || RtlCompareMemory(*(const void **)(a1 + 320), *(const void **)(a2 + 320), v6) == v6) )
    {
      return 1;
    }
  }
  return v5;
}
