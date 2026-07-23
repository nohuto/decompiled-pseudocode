/*
 * XREFs of sub_18006DA5C @ 0x18006DA5C
 * Callers:
 *     sub_18006D83C @ 0x18006D83C (sub_18006D83C.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 */

NTSTATUS __fastcall sub_18006DA5C(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    sub_18006DB18(BaseOfImage);
    return 0;
  }
  return result;
}
