/*
 * XREFs of AlpcGetHeaderSize @ 0x1400ED6A0
 * Callers:
 *     AlpcGetMessageAttribute @ 0x1400ED520 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400ED640 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x1406C3DE8 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetHeaderSize(int a1)
{
  int v2; // edx
  int v3; // eax
  bool v4; // cf
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 result; // rax

  v2 = ((a1 >> 31) & 0x18) + 40;
  if ( (a1 & 0x40000000) == 0 )
    v2 = ((a1 >> 31) & 0x18) + 8;
  v3 = v2 + 32;
  if ( (a1 & 0x20000000) == 0 )
    v3 = v2;
  v4 = (a1 & 0x10000000) != 0;
  v5 = v3 + 24;
  if ( !v4 )
    v5 = v3;
  v6 = v5 + 24;
  if ( (a1 & 0x8000000) == 0 )
    v6 = v5;
  v7 = v6 + 8;
  if ( (a1 & 0x4000000) == 0 )
    v7 = v6;
  result = v7 + 8;
  if ( (a1 & 0x2000000) == 0 )
    return v7;
  return result;
}
