/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x140720C00
 * Callers:
 *     AslpFileQueryVersionString @ 0x140720CA4 (AslpFileQueryVersionString.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     AslpFileVerBlockGetValueOffset @ 0x14017900C (AslpFileVerBlockGetValueOffset.c)
 */

NTSTATUS __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, size_t *a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  size_t v9; // rbx
  __int64 v10; // r11
  size_t v11; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  size_t pcbLength; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v12 = 0LL;
  pcbLength = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( result >= 0 )
  {
    if ( v12 > a4 )
    {
      return -1073741811;
    }
    else
    {
      if ( v12 == a4 )
      {
        v11 = 0LL;
        v10 = a3 + v12 - 2;
      }
      else
      {
        v9 = a4 - v12;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)(v12 + a3), v9, &pcbLength) < 0 )
        {
          v11 = v9 - 2;
          *(_WORD *)(v10 + 2 * ((v9 - 2) >> 1)) = 0;
        }
        else
        {
          v11 = pcbLength;
        }
      }
      result = 0;
      *a2 = v11 >> 1;
      *a1 = v10;
    }
  }
  return result;
}
