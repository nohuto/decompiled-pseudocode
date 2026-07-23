/*
 * XREFs of AslpFileVerQueryBlock @ 0x140720DD8
 * Callers:
 *     AslpFileQueryVersionString @ 0x140720CA4 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x140178F18 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x14017900C (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned __int16 v9; // ax
  _WORD *v10; // rcx
  char *v11; // rsi
  unsigned __int16 *v12; // rbx
  __int16 v13; // r14
  const wchar_t *v14; // r12
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _WORD *v19; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  i = a1;
  P = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v8 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8 = AslStringDuplicate((wchar_t **)&P, a2);
    if ( v8 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      v9 = *i;
      if ( *i > 0x7FFFu || v9 < 8u )
      {
        v8 = -1073741811;
        AslLogCallPrintf(1LL);
      }
      else
      {
        v10 = P;
        v11 = (char *)i + v9;
        v12 = (unsigned __int16 *)v11;
        v13 = *((_WORD *)v11 - 1);
        *((_WORD *)v11 - 1) = 0;
LABEL_7:
        v14 = AslpFileStringTokenize(v10, v7, &v19);
        if ( v14 )
        {
          v15 = (_DWORD)v11 - (_DWORD)i;
          if ( (unsigned int)((_DWORD)v11 - (_DWORD)i) >= 8
            && *i <= v15
            && AslpFileVerBlockGetValueOffset(&v21, (__int64)i, v15) >= 0 )
          {
            v16 = *i;
            v17 = v21 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
            v21 = v17;
            if ( v17 <= v16 )
            {
              v12 = (unsigned __int16 *)((char *)i + v16);
              for ( i = (unsigned __int16 *)((char *)i + v17);
                    i < v12 && *i > 8u && *i <= (unsigned __int64)((char *)v12 - (char *)i);
                    i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                if ( !wcsicmp(v14, i + 3) )
                {
                  v10 = 0LL;
                  goto LABEL_7;
                }
              }
            }
          }
          v8 = -1073741275;
        }
        else
        {
          *a3 = i;
          *a4 = (char *)v12 - (char *)i;
          v8 = 0;
        }
        *((_WORD *)v11 - 1) = v13;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0x74705041u);
  }
  return (unsigned int)v8;
}
