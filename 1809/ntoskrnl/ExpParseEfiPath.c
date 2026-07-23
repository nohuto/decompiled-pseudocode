/*
 * XREFs of ExpParseEfiPath @ 0x1408D2450
 * Callers:
 *     ExpTranslateEfiPath @ 0x1408D3ACC (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  char *v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // esi
  char v8; // r11
  char v9; // al
  char *v10; // r13
  unsigned int v11; // r12d
  char *v12; // r10
  char v13; // cl
  unsigned int v14; // ecx
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  char v21; // al
  unsigned int v22; // ebp
  _WORD *PoolWithTag; // rbx
  unsigned int v24; // r15d
  unsigned int v25; // edi
  PVOID v27; // rax
  char *v30; // [rsp+78h] [rbp+20h]

  v30 = a4;
  v4 = 0LL;
  v5 = 0;
  v6 = -1073741811;
  v8 = 1;
  while ( 1 )
  {
    v9 = *Src & 0x7F;
    if ( v9 == 127 )
      return v6;
    if ( v9 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v10 = Src;
  v6 = 0;
  v11 = *((unsigned __int16 *)Src + 1);
  v12 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v13 = *v12;
  if ( (*v12 & 0x7F) == 4 && v12[1] == 4 )
  {
    v4 = v12;
    while ( 1 )
    {
      v14 = v5;
      v15 = *((unsigned __int16 *)v12 + 1);
      v16 = v15 + v5 - 4;
      v17 = -1;
      if ( v16 >= v5 )
        v17 = v15 + v5 - 4;
      v5 = v17;
      v6 = v16 < v14 ? 0xC0000095 : 0;
      if ( v16 < v14 )
        break;
      v18 = v15 + v11;
      v19 = -1;
      v20 = v11;
      if ( v15 + v11 >= v11 )
        v19 = v15 + v11;
      v11 = v19;
      v6 = v18 < v20 ? 0xC0000095 : 0;
      if ( v18 < v20 )
        break;
      v12 += (unsigned __int8)v12[2] | (unsigned __int64)((unsigned __int8)v12[3] << 8);
      v13 = *v12;
      if ( (*v12 & 0x7F) != 4 || v12[1] != 4 )
        goto LABEL_19;
    }
    v13 = *v12;
LABEL_19:
    a4 = v30;
  }
  if ( (v13 & 0x7F) != 0x7F )
    v6 = -1073741811;
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  v21 = v10[41];
  if ( v21 == 2 )
  {
LABEL_26:
    *a4 = v8;
    if ( v5 )
    {
      v22 = v5 + 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x72766E45u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v24 = 0;
      while ( (*v4 & 0x7F) != 0x7F )
      {
        v25 = *((unsigned __int16 *)v4 + 1) - 4;
        if ( v25 >= v22 )
          goto LABEL_32;
        memmove((char *)PoolWithTag + v24, v4 + 4, v25);
        v22 -= v25;
        v24 += v25;
        v4 += *((unsigned __int16 *)v4 + 1);
      }
      PoolWithTag[(unsigned __int64)v24 >> 1] = 0;
    }
    else
    {
      PoolWithTag = 0LL;
    }
    v27 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
    *a2 = v27;
    if ( !v27 )
    {
      if ( PoolWithTag )
LABEL_32:
        ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225626LL;
    }
    memmove(v27, v10, v11);
    *a3 = PoolWithTag;
    return v6;
  }
  if ( v21 == 1 )
  {
    v8 = 0;
    goto LABEL_26;
  }
  return 3221225485LL;
}
