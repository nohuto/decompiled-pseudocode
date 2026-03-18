/*
 * XREFs of CmpVEAddHiveToSIDMappingTable @ 0x140747928
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     CmpAddStringToMapping @ 0x1407479C4 (CmpAddStringToMapping.c)
 */

__int64 __fastcall CmpVEAddHiveToSIDMappingTable(__int64 a1, __int64 a2)
{
  _WORD *v4; // rcx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 Length; // dx
  __int64 result; // rax
  UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v8.Length = 0LL;
  v8.Buffer = 0LL;
  RtlInitUnicodeString(&v8, 0LL);
  v4 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)
               + 2 * (((unsigned __int64)**(unsigned __int16 **)(a2 + 16) - 2) >> 1));
  if ( *v4 != 92 )
  {
    MaximumLength = v8.MaximumLength;
    Length = v8.Length;
    do
    {
      --v4;
      Length += 2;
      MaximumLength += 2;
    }
    while ( *v4 != 92 );
    v8.MaximumLength = MaximumLength;
    v8.Length = Length;
  }
  v8.Buffer = v4 + 1;
  result = CmpAddStringToMapping(&v8, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 4152) |= 2u;
    return 0LL;
  }
  return result;
}
