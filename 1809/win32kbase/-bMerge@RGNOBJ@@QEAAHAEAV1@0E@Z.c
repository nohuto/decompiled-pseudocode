/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C001F140
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C00189D4 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0018B60 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C009FE24 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00FC2F0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C001E5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  RGNOBJ *v4; // rsi
  unsigned int *v5; // rdi
  unsigned __int8 v6; // bp
  int *v7; // r15
  _DWORD *v8; // r14
  unsigned int v9; // edx
  unsigned int *v10; // rbx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  int *v13; // r8
  signed int v14; // r13d
  _DWORD *v15; // r12
  signed int v16; // ecx
  int *v17; // r10
  signed int v18; // edx
  unsigned __int8 v19; // al
  int v20; // edx
  int v21; // r9d
  int v22; // ecx
  __int64 v23; // r11
  int v24; // eax
  _BYTE *v25; // rax
  unsigned int v26; // eax
  _DWORD *v27; // rcx
  signed int v28; // eax
  signed int v29; // eax
  signed int v30; // edx
  signed int v31; // eax
  _DWORD *v33; // [rsp+28h] [rbp-50h]

  v4 = this;
  v5 = 0LL;
  v6 = a4;
  v7 = (int *)(*(_QWORD *)a2 + 104LL);
  v8 = (_DWORD *)(*(_QWORD *)a3 + 104LL);
  v33 = v8;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000;
  while ( 2 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)v4 + 80LL);
    v10 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
    v11 = 4 * (*v7 + *v8) + 16;
    if ( v11 > *(_DWORD *)(*(_QWORD *)v4 + 24LL) - v9 )
    {
      v12 = 2LL * v9;
      if ( v12 > 0xFFFFFFFF
        || (unsigned int)v12 + v11 < (unsigned int)v12
        || !(unsigned int)RGNOBJ::bExpand(v4, (unsigned int)v12 + v11) )
      {
        return 0LL;
      }
      v10 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
      if ( v5 )
        v5 = &v10[-*(v10 - 1) - 4];
    }
    v13 = v8 + 3;
    v14 = v7[2];
    v15 = v10 + 3;
    v16 = v8[1];
    v17 = v7 + 3;
    v18 = v7[1];
    if ( v14 >= v8[2] )
      v14 = v8[2];
    v10[2] = v14;
    v19 = 1;
    if ( v18 <= v16 )
      v18 = v16;
    v10[1] = v18;
    v20 = *v8;
    v21 = *v7;
    *v10 = 0;
    while ( v21 )
    {
      v22 = *v17;
      v23 = v19;
      if ( !v20 )
      {
        v19 = byte_1C019C868[v19];
        ++v17;
        --v21;
        goto LABEL_27;
      }
      v24 = *v13;
      if ( v22 < *v13 )
      {
        v25 = byte_1C019C868;
LABEL_22:
        ++v17;
        --v21;
        goto LABEL_23;
      }
      ++v13;
      --v20;
      if ( v22 <= v24 )
      {
        v25 = &unk_1C019C848;
        goto LABEL_22;
      }
      v22 = v24;
      v25 = byte_1C019C858;
LABEL_23:
      v19 = v25[v23];
LABEL_27:
      if ( (v6 & v19) != 0 )
      {
        ++*v10;
        *v15++ = v22;
        v6 ^= 0xFu;
      }
    }
    if ( v20 )
    {
      v22 = *v13++;
      --v20;
      v19 = byte_1C019C858[v19];
      goto LABEL_27;
    }
    v4 = this;
    v8 = v33;
    v10[*v10 + 3] = *v10;
    if ( v5 && *v5 == *v10 && !memcmp(v5 + 3, v10 + 3, 4LL * *v5) )
    {
      v26 = v10[2];
      v10 = v5;
      v5[2] = v26;
    }
    if ( v5 != v10 )
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = &v10[*v10 + 4];
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v10 + 16;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    }
    if ( v10[2] == 0x7FFFFFFF )
      return 1LL;
    if ( *v10 )
    {
      v27 = *(_DWORD **)this;
      v28 = v10[3];
      if ( v28 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
      {
        v27[22] = v28;
        v27 = *(_DWORD **)this;
      }
      v29 = v10[1];
      if ( v29 < v27[23] )
      {
        v27[23] = v29;
        v27 = *(_DWORD **)this;
      }
      v30 = v10[*v10 + 2];
      if ( v30 > v27[24] )
      {
        v27[24] = v30;
        v27 = *(_DWORD **)this;
      }
      v31 = v10[2];
      if ( v31 > v27[25] )
        v27[25] = v31;
    }
    if ( v14 == v7[2] )
      v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
    if ( v14 == v33[2] )
    {
      v8 = (_DWORD *)((char *)v33 + (unsigned int)(4 * *v33 + 16));
      v33 = v8;
    }
    if ( (unsigned __int64)v7 < *(_QWORD *)(*(_QWORD *)a2 + 40LL)
      && (unsigned __int64)v8 < *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
    {
      v6 = a4;
      v5 = v10;
      continue;
    }
    return 0LL;
  }
}
