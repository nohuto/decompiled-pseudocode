/*
 * XREFs of RtlImageNtHeaderEx @ 0x18001CB40
 * Callers:
 *     sub_18001ABAC @ 0x18001ABAC (sub_18001ABAC.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_180020844 @ 0x180020844 (sub_180020844.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002A75C @ 0x18002A75C (sub_18002A75C.c)
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     LdrpResGetResourceDirectory @ 0x1800571D0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     sub_18006DA5C @ 0x18006DA5C (sub_18006DA5C.c)
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     sub_18008226C @ 0x18008226C (sub_18008226C.c)
 *     sub_180083108 @ 0x180083108 (sub_180083108.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089690 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800D16A0 @ 0x1800D16A0 (sub_1800D16A0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D5DF0 @ 0x1800D5DF0 (sub_1800D5DF0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800F20B8 @ 0x1800F20B8 (sub_1800F20B8.c)
 * Callees:
 *     sub_1800F8B44 @ 0x1800F8B44 (sub_1800F8B44.c)
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v6; // r10
  char v7; // cl
  ULONG64 v8; // r8

  result = 0;
  v6 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage != 23117 )
  {
LABEL_16:
    result = -1073741701;
    goto LABEL_18;
  }
  v8 = *((unsigned int *)BaseOfImage + 15);
  if ( v7 && (v8 >= Size || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= Size) )
  {
    result = -1073741701;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v8);
    if ( (char *)BaseOfImage + v8 >= BaseOfImage && v6->Signature == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = -1073741701;
  v6 = 0LL;
LABEL_18:
  if ( result >= 0 )
    *OutHeaders = v6;
  return result;
}
