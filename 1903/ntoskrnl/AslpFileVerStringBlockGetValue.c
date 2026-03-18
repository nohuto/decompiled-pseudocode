/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x14092B8B4
 * Callers:
 *     AslpFileQueryVersionString @ 0x14092B470 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x140345D8C (AslpFileVerBlockGetValueOffset.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  size_t v7; // rbx
  NTSTATUS result; // eax
  __int64 v10; // r11
  size_t v11; // rdi
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v10 = a3 + v12 - 2;
      }
      else
      {
        v11 = a4 - v12;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)(v12 + a3), v11, &pcbLength) >= 0 )
        {
          v7 = pcbLength;
        }
        else
        {
          v7 = v11 - 2;
          *(_WORD *)(v10 + 2 * ((v11 - 2) >> 1)) = 0;
        }
      }
      result = 0;
      *a2 = v7 >> 1;
      *a1 = v10;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
