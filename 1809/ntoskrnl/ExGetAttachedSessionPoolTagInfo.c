/*
 * XREFs of ExGetAttachedSessionPoolTagInfo @ 0x14069F94C
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x14069F774 (ExGetSessionPoolTagInformation.c)
 * Callees:
 *     ExGetSessionPoolTagInfo @ 0x14011A2A4 (ExGetSessionPoolTagInfo.c)
 */

__int64 __fastcall ExGetAttachedSessionPoolTagInfo(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // eax
  int v8; // esi
  unsigned int v9; // edx
  unsigned int v11; // ebx
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // eax
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v4 = a2 - 16;
  v8 = -(a2 < 0x38);
  v9 = 0;
  v11 = -1073741820;
  v12 = v8 & 0xC0000004;
  if ( a2 >= 0x38 )
    v9 = v4;
  v13 = a1 + 16;
  v14 = 0LL;
  if ( a2 >= 0x38 )
    v14 = v13;
  result = ExGetSessionPoolTagInfo(v14, v9, &v18, &v17);
  if ( (int)result >= 0 )
  {
    v11 = v12;
    if ( a2 >= 0x38 )
    {
      v16 = v18;
      *(_DWORD *)(a1 + 12) = v18;
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = (unsigned int)(40 * (v16 - 1) + 56);
    }
    goto LABEL_8;
  }
  if ( (_DWORD)result == -1073741820 )
  {
LABEL_8:
    result = v11;
    *a3 = 40 * (v17 - 1) + 56;
  }
  return result;
}
