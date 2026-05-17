/*
 * XREFs of CountUnicodeToUTF8 @ 0x180066FA0
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x180066C70 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r11d
  unsigned int *v6; // r10
  unsigned int v7; // r9d
  unsigned __int64 v8; // rax
  __int64 result; // rax
  unsigned int *v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax

  v3 = 0;
  v5 = a2 >> 1;
  v6 = (unsigned int *)((char *)a1 + 2 * ((unsigned __int64)a2 >> 1));
LABEL_2:
  v7 = 0;
  while ( a1 < v6 )
  {
    if ( v7 )
    {
      ++v5;
      if ( (unsigned int)*(unsigned __int16 *)a1 - 56320 <= 0x3FF )
      {
        v7 = 65533;
        a1 = (unsigned int *)((char *)a1 + 2);
      }
LABEL_7:
      if ( v7 - 55296 <= 0x7FF )
      {
        v3 = 263;
        v7 = 65533;
      }
      else if ( v7 <= 0x7F )
      {
        goto LABEL_9;
      }
      v20 = v5 + 1;
      if ( v7 <= 0x7FF )
        v20 = v5;
      v5 = v20 + 1;
LABEL_9:
      v8 = ((char *)v6 - (char *)a1) >> 1;
      if ( v8 <= 0xD )
      {
        while ( a1 < v6 )
        {
          v7 = *(unsigned __int16 *)a1;
          a1 = (unsigned int *)((char *)a1 + 2);
          if ( v7 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_14;
      }
      v10 = (unsigned int *)((char *)a1 + 2 * v8 - 14);
      if ( a1 >= v10 )
        goto LABEL_2;
LABEL_16:
      v11 = *(unsigned __int16 *)a1;
      a1 = (unsigned int *)((char *)a1 + 2);
      if ( v11 > 0x7F )
      {
        if ( v11 > 0x7FF )
        {
          if ( (v11 & 0xF800) == 0xD800 )
            goto LABEL_24;
          ++v5;
        }
        ++v5;
      }
      if ( ((unsigned __int8)a1 & 2) != 0 )
      {
        v11 = *(unsigned __int16 *)a1;
        a1 = (unsigned int *)((char *)a1 + 2);
        if ( v11 > 0x7F )
        {
          if ( v11 > 0x7FF )
          {
            if ( (v11 & 0xF800) == 0xD800 )
            {
LABEL_24:
              if ( v11 > 0x7FF )
              {
                if ( v11 - 55296 <= 0x7FF )
                {
                  if ( v11 > 0xDBFF || (unsigned int)*(unsigned __int16 *)a1 - 56320 > 0x3FF )
                  {
                    a1 = (unsigned int *)((char *)a1 - 2);
                    goto LABEL_2;
                  }
                  a1 = (unsigned int *)((char *)a1 + 2);
                }
                ++v5;
              }
              ++v5;
              goto LABEL_28;
            }
            ++v5;
          }
          ++v5;
          goto LABEL_18;
        }
      }
      while ( 1 )
      {
LABEL_18:
        if ( a1 >= v10 )
          goto LABEL_2;
        v12 = a1[1];
        v11 = *a1;
        v13 = *a1 | v12;
        if ( (v13 & 0xFF80FF80) != 0 )
        {
          if ( (v13 & 0xF800F800) != 0 )
            goto LABEL_23;
          v18 = v5 + 1;
          if ( (v11 & 0xFF800000) == 0 )
            v18 = v5;
          v19 = v18 + 1;
          if ( (*a1 & 0xFF80) == 0 )
            v19 = v18;
          v5 = v19 + 1;
          if ( (v12 & 0xFF800000) == 0 )
            v5 = v19;
          if ( (v12 & 0xFF80) != 0 )
            ++v5;
        }
        v14 = a1[3];
        a1 += 2;
        v11 = *a1;
        v15 = *a1 | v14;
        if ( (v15 & 0xFF80FF80) != 0 )
        {
          if ( (v15 & 0xF800F800) != 0 )
          {
LABEL_23:
            v11 = (unsigned __int16)v11;
            a1 = (unsigned int *)((char *)a1 + 2);
            if ( (unsigned __int16)v11 > 0x7Fu )
              goto LABEL_24;
LABEL_28:
            if ( a1 >= v10 )
              goto LABEL_2;
            goto LABEL_16;
          }
          v16 = v5 + 1;
          if ( (v11 & 0xFF800000) == 0 )
            v16 = v5;
          v17 = v16 + 1;
          if ( (*a1 & 0xFF80) == 0 )
            v17 = v16;
          v5 = v17 + 1;
          if ( (v14 & 0xFF800000) == 0 )
            v5 = v17;
          if ( (v14 & 0xFF80) != 0 )
            ++v5;
        }
        a1 += 2;
      }
    }
    v7 = *(unsigned __int16 *)a1;
    a1 = (unsigned int *)((char *)a1 + 2);
LABEL_6:
    if ( v7 - 55296 > 0x3FF )
      goto LABEL_7;
    --v5;
  }
  if ( v7 )
  {
    ++v5;
    goto LABEL_7;
  }
LABEL_14:
  result = v3;
  *a3 = v5;
  return result;
}
