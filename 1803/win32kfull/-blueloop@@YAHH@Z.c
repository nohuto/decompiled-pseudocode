/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C00D5EFC
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C00D59E0 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  int v1; // r9d
  int v2; // edx
  int v3; // r8d
  int v4; // eax
  int v5; // r12d
  int v6; // r13d
  int v7; // r10d
  unsigned int v8; // ebp
  unsigned int *v9; // rbx
  int v10; // r14d
  _BYTE *v11; // r15
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // r11d
  int v15; // edi
  char v16; // r12
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r10d
  unsigned int *v20; // r9
  _BYTE *v21; // r11
  char v23; // di
  int v24; // [rsp+30h] [rbp+8h]

  v24 = 2 * dword_1C0326F1C;
  if ( a1 )
  {
    v1 = dword_1C0326EBC;
    v2 = 0;
    v4 = dword_1C0326ED4;
    v6 = 0;
    dword_1C0327258 = dword_1C0326EBC;
    dword_1C032725C = 0;
    v3 = 31;
    dword_1C0327264 = dword_1C0326ED4;
    v5 = 32;
    dword_1C0327260 = 31;
    dword_1C0327268 = 32;
    dword_1C032726C = 0;
  }
  else
  {
    v1 = dword_1C0327258;
    v2 = dword_1C032725C;
    v3 = dword_1C0327260;
    v4 = dword_1C0327264;
    v5 = dword_1C0327268;
    v6 = dword_1C032726C;
  }
  v7 = dword_1C0326EC8;
  v8 = 0;
  v9 = (unsigned int *)qword_1C0326EE0;
  v10 = v2;
  v11 = (_BYTE *)qword_1C0326EF8;
  v12 = v3;
  v13 = v1;
  v14 = dword_1C0326EC8;
  v15 = v4;
  if ( v1 <= v3 )
  {
    while ( *v9 <= v14 )
    {
      v14 += v15;
      ++v13;
      v15 += v24;
      ++v9;
      ++v11;
      if ( v13 > v3 )
        goto LABEL_10;
    }
    if ( v13 > v1 )
    {
      v4 = v15;
      dword_1C0327258 = v13;
      dword_1C0327264 = v15;
      v1 = v13;
      qword_1C0326EE0 = (__int64)v9;
      v7 = v14;
      qword_1C0326EF8 = (__int64)v11;
      v10 = v13;
      dword_1C0326EC8 = v14;
    }
    v8 = 1;
LABEL_10:
    while ( v13 <= v3 )
    {
      if ( *v9 <= v14 )
      {
        v12 = v13 - 1;
        break;
      }
      v16 = dword_1C0326F24;
      ++v13;
      *v9++ = v14;
      *v11 = v16;
      v14 += v15;
      v5 = dword_1C0327268;
      ++v11;
      v15 += v24;
    }
  }
  v17 = v1 - 1;
  v18 = v4 - v24;
  v19 = v7 - v18;
  v20 = (unsigned int *)(qword_1C0326EE0 - 4);
  v21 = (_BYTE *)(qword_1C0326EF8 - 1);
  if ( !v8 )
  {
    if ( v17 < v2 )
      return v8;
    while ( *v20 <= v19 )
    {
      v18 -= v24;
      --v17;
      v19 -= v18;
      --v20;
      --v21;
      if ( v17 < v2 )
        goto LABEL_18;
    }
    dword_1C0327258 = v17;
    v12 = v17;
    qword_1C0326EE0 = (__int64)v20;
    v8 = 1;
    qword_1C0326EF8 = (__int64)v21;
    dword_1C0326EC8 = v19;
    dword_1C0327264 = v18;
  }
LABEL_18:
  if ( v17 >= v2 )
  {
    v23 = dword_1C0326F24;
    while ( *v20 > v19 )
    {
      *v20 = v19;
      v18 -= v24;
      *v21 = v23;
      v19 -= v18;
      --v21;
      --v17;
      --v20;
      if ( v17 < v2 )
        goto LABEL_19;
    }
    v10 = v17 + 1;
  }
LABEL_19:
  if ( v8 )
  {
    dword_1C032726C = v12;
    dword_1C0327268 = v10;
    if ( v12 < v6 )
      v3 = v12;
    dword_1C0327260 = v3;
    if ( v10 > v5 )
      v2 = v10;
    dword_1C032725C = v2;
  }
  return v8;
}
