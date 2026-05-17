/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x18004C5C0
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x1801019FC (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18003C4E4 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = SafeAllocBlob(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_QWORD *)(result + 8) = result + 16;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
  }
  return result;
}
