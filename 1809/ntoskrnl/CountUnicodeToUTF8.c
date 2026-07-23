/*
 * XREFs of CountUnicodeToUTF8 @ 0x14013233C
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToUTF8N @ 0x1406C08F0 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned int *v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // r11
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  unsigned int *v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // eax
  __int64 result; // rax
  unsigned int *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a1;
  v7 = a2 >> 1;
  v8 = (unsigned __int64)a1 + 2 * v4;
LABEL_2:
  while ( 2 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned __int64)v6 >= v8 )
      {
        if ( v9 )
        {
          ++v7;
          goto LABEL_7;
        }
        goto LABEL_23;
      }
      if ( v9 )
        break;
      v9 = *(unsigned __int16 *)v6;
      v6 = (unsigned int *)((char *)v6 + 2);
LABEL_6:
      if ( v9 - 55296 > 0x3FF )
        goto LABEL_7;
      --v7;
    }
    ++v7;
    v18 = (unsigned int *)((char *)v6 + 2);
    if ( (unsigned int)*(unsigned __int16 *)v6 - 56320 <= 0x3FF )
      v9 = 65533;
    else
      v18 = v6;
    v6 = v18;
LABEL_7:
    if ( v9 - 55296 <= 0x7FF )
    {
      v3 = 263;
      v9 = 65533;
    }
    if ( v9 > 0x7F )
    {
      v19 = v7 + 1;
      if ( v9 <= 0x7FF )
        v19 = v7;
      v7 = v19 + 1;
    }
    v10 = (__int64)(v8 - (_QWORD)v6) >> 1;
    if ( v10 > 0xD )
    {
      v11 = (unsigned int *)((char *)v6 + 2 * v10 - 14);
      if ( v6 >= v11 )
        continue;
      while ( 1 )
      {
        v12 = *(unsigned __int16 *)v6;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( v12 > 0x7F )
        {
          if ( v12 > 0x7FF )
          {
            if ( (v12 & 0xF800) == 0xD800 )
              goto LABEL_59;
            ++v7;
          }
          ++v7;
        }
        if ( ((unsigned __int8)v6 & 2) != 0 )
        {
          v12 = *(unsigned __int16 *)v6;
          v6 = (unsigned int *)((char *)v6 + 2);
          if ( v12 > 0x7F )
          {
            if ( v12 > 0x7FF )
            {
              if ( (v12 & 0xF800) == 0xD800 )
                goto LABEL_59;
              ++v7;
            }
            ++v7;
            goto LABEL_15;
          }
        }
        while ( 1 )
        {
LABEL_15:
          if ( v6 >= v11 )
            goto LABEL_2;
          v13 = v6[1];
          v12 = *v6;
          v14 = *v6 | v13;
          if ( (v14 & 0xFF80FF80) != 0 )
          {
            if ( (v14 & 0xF800F800) != 0 )
              goto LABEL_58;
            v20 = v7 + 1;
            if ( (v12 & 0xFF800000) == 0 )
              v20 = v7;
            v21 = v20 + 1;
            if ( (*v6 & 0xFF80) == 0 )
              v21 = v20;
            v7 = v21 + 1;
            if ( (v13 & 0xFF800000) == 0 )
              v7 = v21;
            if ( (v13 & 0xFF80) != 0 )
              ++v7;
          }
          v15 = v6[3];
          v6 += 2;
          v12 = *v6;
          v16 = *v6 | v15;
          if ( (v16 & 0xFF80FF80) != 0 )
            break;
LABEL_18:
          v6 += 2;
        }
        if ( (v16 & 0xF800F800) == 0 )
          break;
LABEL_58:
        v12 = (unsigned __int16)v12;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( (unsigned __int16)v12 <= 0x7Fu )
          goto LABEL_66;
LABEL_59:
        if ( v12 <= 0x7FF )
          goto LABEL_65;
        if ( v12 - 55296 > 0x7FF )
          goto LABEL_64;
        if ( v12 > 0xDBFF || (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
        {
          v6 = (unsigned int *)((char *)v6 - 2);
          goto LABEL_2;
        }
        v6 = (unsigned int *)((char *)v6 + 2);
LABEL_64:
        ++v7;
LABEL_65:
        ++v7;
LABEL_66:
        if ( v6 >= v11 )
          goto LABEL_2;
      }
      v22 = v7 + 1;
      if ( (v12 & 0xFF800000) == 0 )
        v22 = v7;
      v23 = v22 + 1;
      if ( (*v6 & 0xFF80) == 0 )
        v23 = v22;
      v7 = v23 + 1;
      if ( (v15 & 0xFF800000) == 0 )
        v7 = v23;
      if ( (v15 & 0xFF80) != 0 )
        ++v7;
      goto LABEL_18;
    }
    break;
  }
  while ( (unsigned __int64)v6 < v8 )
  {
    v9 = *(unsigned __int16 *)v6;
    v6 = (unsigned int *)((char *)v6 + 2);
    if ( v9 > 0x7F )
      goto LABEL_6;
  }
LABEL_23:
  result = v3;
  *a3 = v7;
  return result;
}
