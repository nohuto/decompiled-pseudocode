/*
 * XREFs of AlpcGetHeaderSize @ 0x140004C90
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140004B10 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140004C30 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetHeaderSize(ULONG Flags)
{
  int v2; // edx
  int v3; // eax
  bool v4; // cf
  ULONG v5; // ecx
  ULONG v6; // eax
  ULONG v7; // ecx
  ULONG result; // eax

  v2 = (((int)Flags >> 31) & 0x18) + 40;
  if ( (Flags & 0x40000000) == 0 )
    v2 = (((int)Flags >> 31) & 0x18) + 8;
  v3 = v2 + 32;
  if ( (Flags & 0x20000000) == 0 )
    v3 = v2;
  v4 = (Flags & 0x10000000) != 0;
  v5 = v3 + 24;
  if ( !v4 )
    v5 = v3;
  v6 = v5 + 24;
  if ( (Flags & 0x8000000) == 0 )
    v6 = v5;
  v7 = v6 + 8;
  if ( (Flags & 0x4000000) == 0 )
    v7 = v6;
  result = v7 + 8;
  if ( (Flags & 0x2000000) == 0 )
    return v7;
  return result;
}
