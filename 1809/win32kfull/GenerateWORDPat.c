/*
 * XREFs of GenerateWORDPat @ 0x1C0111C9C
 * Callers:
 *     Generate_HTSC_WORD @ 0x1C0111A14 (Generate_HTSC_WORD.c)
 *     ComputeHTCell @ 0x1C0113CDC (ComputeHTCell.c)
 * Callees:
 *     ExpandHTPatX @ 0x1C0111EC0 (ExpandHTPatX.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GenerateWORDPat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  int v15; // r11d
  unsigned __int8 **v16; // r13
  unsigned __int8 *v17; // r10
  unsigned __int8 *v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned __int8 v22; // al
  char *v23; // rdi
  unsigned int v24; // edx
  char v25; // cl
  int v26; // r8d
  unsigned int v27; // r10d
  __int64 v28; // rax
  int v30; // [rsp+20h] [rbp-68h]
  _QWORD v32[3]; // [rsp+38h] [rbp-50h] BYREF

  v7 = a5;
  v8 = 0;
  if ( !a5 )
    return 0LL;
  if ( a5 > a6 )
    return 0LL;
  v9 = a7;
  if ( !a7 )
    return 0LL;
  v32[2] = a1;
  v32[0] = a3;
  v10 = a7 * (unsigned __int64)a5;
  v32[1] = a2;
  v11 = a6 - a5;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v12 = a7 * a5;
  v13 = 8LL * (unsigned int)v10;
  if ( v13 > 0xFFFFFFFF )
    return 0LL;
  v14 = (unsigned __int8 *)EngAllocMem(1u, v13, 0x32355448u);
  if ( !v14 )
    return 0LL;
  v15 = 3 * v11;
  v30 = 3 * v11;
  v16 = (unsigned __int8 **)v32;
  while ( 1 )
  {
    v17 = *v16;
    v18 = v14;
    v19 = v8;
    v20 = v9;
    do
    {
      v21 = v7;
      --v20;
      do
      {
        v22 = *v17++;
        *((_DWORD *)v18 + 1) = v19;
        v19 += 3;
        *v18 = v22;
        v18 += 8;
        --v21;
      }
      while ( v21 );
      v7 = a5;
      v19 += v15;
    }
    while ( v20 );
    v23 = (char *)v14;
    qsort(v14, v12, 8uLL, SCDataCompare);
    v9 = a7;
    LOWORD(v24) = 0;
    v25 = 0;
    v26 = a7 * a5;
    v27 = v14[8 * v12 - 8];
    if ( v12 )
    {
      do
      {
        --v26;
        if ( *v23 != v25 )
        {
          v25 = *v23;
          v24 = ((v27 >> 1) + 4095 * (unsigned __int8)*v23) / v27;
        }
        v28 = *((unsigned int *)v23 + 1);
        v23 += 8;
        a4[v28] = v24;
      }
      while ( v26 );
      v7 = a5;
    }
    ++v8;
    ++v16;
    if ( v8 >= 3 )
      break;
    v15 = v30;
  }
  ExpandHTPatX(a4);
  EngFreeMem(v14);
  return 1LL;
}
