/*
 * XREFs of AslpFileVerQueryBlock @ 0x14092B114
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14092A8E8 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x14092AEE4 (AslpFileQueryVersionString.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     AslpFileStringTokenize @ 0x1403456F8 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1403457EC (AslpFileVerBlockGetValueOffset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x14070D108 (AslStringDuplicate.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  _WORD *v10; // rcx
  char *v11; // rsi
  unsigned __int16 *v12; // rbx
  __int16 v13; // r14
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  const wchar_t *v17; // r12
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
    v7 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v7 = AslStringDuplicate((wchar_t **)&P, a2);
    if ( v7 >= 0 )
    {
      v9 = *i;
      if ( *i > 0x7FFFu || v9 < 8u )
      {
        v7 = -1073741811;
        AslLogCallPrintf(1LL);
      }
      else
      {
        v10 = P;
        v11 = (char *)i + v9;
        v12 = (unsigned __int16 *)v11;
        v13 = *((_WORD *)v11 - 1);
        *((_WORD *)v11 - 1) = 0;
LABEL_21:
        v17 = AslpFileStringTokenize(v10, v8, &v19);
        if ( v17 )
        {
          v14 = (_DWORD)v11 - (_DWORD)i;
          if ( (unsigned int)((_DWORD)v11 - (_DWORD)i) >= 8
            && *i <= v14
            && AslpFileVerBlockGetValueOffset(&v21, (__int64)i, v14) >= 0 )
          {
            v15 = *i;
            v16 = v21 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
            v21 = v16;
            if ( v16 <= v15 )
            {
              v12 = (unsigned __int16 *)((char *)i + v15);
              for ( i = (unsigned __int16 *)((char *)i + v16);
                    i < v12 && *i > 8u && *i <= (unsigned __int64)((char *)v12 - (char *)i);
                    i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                if ( !wcsicmp(v17, i + 3) )
                {
                  v10 = 0LL;
                  goto LABEL_21;
                }
              }
            }
          }
          v7 = -1073741275;
        }
        else
        {
          *a3 = i;
          *a4 = (char *)v12 - (char *)i;
          v7 = 0;
        }
        *((_WORD *)v11 - 1) = v13;
      }
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    if ( P )
      ExFreePoolWithTag(P, 0x74705041u);
  }
  return (unsigned int)v7;
}
