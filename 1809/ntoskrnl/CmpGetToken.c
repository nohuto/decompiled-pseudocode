/*
 * XREFs of CmpGetToken @ 0x1409CFE3C
 * Callers:
 *     CmpParseInfBuffer @ 0x1409CFB20 (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x1401960E0 (isspace.c)
 *     strchr @ 0x140197000 (strchr.c)
 *     strncpy_s @ 0x14019BAA0 (strncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *v5; // rdi
  char v6; // al
  const char *v7; // r14
  const char *v8; // rbx
  const char *v9; // r13
  int v10; // r15d
  __int64 v11; // r15
  char *PoolWithTag; // rax
  char *v13; // r12
  char v14; // al
  const char *v15; // rbx
  const char *v16; // rbx
  int v17; // eax
  const char **v18; // [rsp+60h] [rbp+8h]

  v18 = a1;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_BYTE *)(a3 + 16) = 0;
  while ( 1 )
  {
    v5 = *a1;
    if ( (unsigned __int64)*a1 >= a2 )
      break;
    do
    {
      if ( *v5 == 10 )
        break;
      if ( !isspace(*(unsigned __int8 *)v5) )
        break;
      ++v5;
    }
    while ( (unsigned __int64)v5 < a2 );
    a1 = v18;
    if ( (unsigned __int64)v5 >= a2 )
      break;
    if ( *v5 == 59 || *v5 == 35 )
    {
      do
      {
        if ( *v5 == 10 )
          break;
        ++v5;
      }
      while ( (unsigned __int64)v5 < a2 );
    }
    if ( (unsigned __int64)v5 >= a2 )
      break;
    v6 = *v5;
    if ( *v5 == 26 )
      break;
    switch ( v6 )
    {
      case 10:
        *(_DWORD *)a3 = 1;
        break;
      case 34:
        v16 = ++v5;
        while ( (unsigned __int64)v5 < a2 && !strchr(&StringTerminators[6], *v5) )
          ++v5;
        if ( (unsigned __int64)v5 < a2 && *v5 == 34 )
        {
          *v5 = 0;
          v17 = 4;
          ++v5;
          *(_QWORD *)(a3 + 8) = v16;
        }
        else
        {
          v17 = 7;
        }
        *(_DWORD *)a3 = v17;
        goto LABEL_28;
      case 44:
        *(_DWORD *)a3 = 6;
        break;
      case 61:
        *(_DWORD *)a3 = 5;
        break;
      case 91:
        *(_DWORD *)a3 = 2;
        break;
      case 92:
        v15 = ++v5;
        if ( (unsigned __int64)v5 < a2 )
        {
          do
          {
            if ( *v15 == 10 )
              break;
            if ( !isspace(*(unsigned __int8 *)v15) )
              break;
            ++v15;
          }
          while ( (unsigned __int64)v15 < a2 );
        }
        if ( *v15 == 59 || *v15 == 35 )
        {
          v15 = ++v5;
          if ( (unsigned __int64)v5 < a2 )
          {
            do
            {
              if ( *v15 == 10 )
                break;
              ++v15;
            }
            while ( (unsigned __int64)v15 < a2 );
          }
        }
        if ( (unsigned __int64)v15 < a2 )
        {
          if ( *v15 == 10 )
          {
            v5 = v15 + 1;
            v14 = 0;
            goto LABEL_29;
          }
LABEL_18:
          v7 = v5;
          v8 = v5;
          if ( (unsigned __int64)v5 < a2 )
          {
            v9 = v5;
            do
            {
              v8 = v9;
              v10 = (int)v9;
              if ( strchr(StringTerminators, *v5) )
                break;
              v5 = v9 + 1;
              v9 = v5;
              v8 = v5;
              v10 = (int)v5;
            }
            while ( (unsigned __int64)v5 < a2 );
            if ( v8 != v7 )
            {
              v11 = (unsigned int)(v10 - (_DWORD)v7);
              if ( (int)v11 + 1 >= (unsigned int)v11
                && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + 1), 0x69704D43u),
                    (v13 = PoolWithTag) != 0LL) )
              {
                strncpy_s(PoolWithTag, (unsigned int)(v11 + 1), v7, (unsigned int)v11);
                v13[v11] = 0;
                *(_DWORD *)a3 = 4;
                *(_QWORD *)(a3 + 8) = v13;
                *(_BYTE *)(a3 + 16) = 1;
              }
              else
              {
                *(_DWORD *)a3 = 8;
              }
              goto LABEL_28;
            }
          }
          v5 = v8 + 1;
        }
        *(_DWORD *)a3 = 7;
        goto LABEL_28;
      case 93:
        *(_DWORD *)a3 = 3;
        break;
      default:
        goto LABEL_18;
    }
    ++v5;
LABEL_28:
    v14 = 1;
LABEL_29:
    a1 = v18;
    *v18 = v5;
    if ( v14 )
      return;
  }
  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *a1 = v5;
}
