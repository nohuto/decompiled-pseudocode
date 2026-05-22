/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800C6268
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C6EA8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, char **a2)
{
  char **v2; // r14
  char v4; // si
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  char *v10; // r8
  char *v11; // r10
  char *v12; // rbx
  char *v13; // r9
  __int64 v14; // r14
  __int64 v15; // r12
  char *v16; // rbp
  char *v17; // r11
  bool i; // zf
  signed __int64 v19; // r10
  __int64 **v20; // rdx
  __int64 *k; // r8
  char *v22; // r10
  _DWORD *v23; // r11
  char *v24; // r9
  char *v25; // rdx
  signed __int64 v26; // r9
  __int64 j; // rdx
  const struct std::nothrow_t *v28; // rdx
  char *v29; // rax
  void *v31; // [rsp+28h] [rbp-50h] BYREF
  char *v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  std::vector<enum _Button>::vector<enum _Button>(&v31, a2);
  v5 = (char *)v31;
  v6 = (v32 - (_BYTE *)v31) >> 2;
  LOBYTE(v7) = v34;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v31, v32, v6, v7, -2LL);
  v8 = *(_QWORD **)(a1 + 32);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_45;
  while ( 1 )
  {
    v10 = (char *)v9[6];
    if ( *((_BYTE *)v9 + 40) )
    {
      v11 = *v2;
      v12 = (char *)v9[7];
      v13 = (char *)v9[6];
      v14 = (v2[1] - *v2) >> 2;
      v15 = (v12 - v10) >> 2;
      if ( v15 < v14 )
      {
LABEL_11:
        v13 = (char *)v9[7];
      }
      else
      {
        v16 = (char *)(v10 - v11);
LABEL_5:
        v17 = v11;
        for ( i = v11 == a2[1]; !i; i = v17 == a2[1] )
        {
          if ( *(_DWORD *)&v16[(_QWORD)v17] != *(_DWORD *)v17 )
          {
            if ( v13 == &v12[-4 * v14] )
              goto LABEL_11;
            v13 += 4;
            v16 += 4;
            goto LABEL_5;
          }
          v17 += 4;
        }
      }
      if ( v13 != v12 )
      {
        if ( v15 != v14 )
          goto LABEL_44;
        if ( v10 != v12 )
        {
          v19 = v11 - v10;
          while ( *(_DWORD *)v10 == *(_DWORD *)&v10[v19] )
          {
            v10 += 4;
            if ( v10 == v12 )
              goto LABEL_18;
          }
          goto LABEL_44;
        }
      }
LABEL_18:
      v2 = a2;
      goto LABEL_19;
    }
    v22 = (char *)v9[7];
    v23 = (_DWORD *)v9[6];
    v24 = v5;
    if ( v10 == v22 )
    {
LABEL_30:
      if ( v24 != v32 )
        goto LABEL_19;
    }
    else
    {
      while ( v24 != v32 )
      {
        if ( *(_DWORD *)v24 < *v23 )
          goto LABEL_19;
        v25 = v24 + 4;
        if ( *v23 < *(_DWORD *)v24 )
          v25 = v24;
        v24 = v25;
        if ( ++v23 == (_DWORD *)v22 )
          goto LABEL_30;
      }
    }
    if ( (v22 - v10) >> 2 != v6 )
      goto LABEL_44;
    if ( v10 != v22 )
      break;
LABEL_19:
    if ( !*((_BYTE *)v9 + 25) )
    {
      v20 = (__int64 **)v9[2];
      if ( *((_BYTE *)v20 + 25) )
      {
        for ( j = v9[1]; !*(_BYTE *)(j + 25) && v9 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          v9 = (_QWORD *)j;
        v9 = (_QWORD *)j;
      }
      else
      {
        v9 = (_QWORD *)v9[2];
        for ( k = *v20; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v9 = k;
      }
    }
    if ( v9 == v8 )
      goto LABEL_45;
  }
  v26 = v5 - v10;
  while ( *(_DWORD *)v10 == *(_DWORD *)&v10[v26] )
  {
    v10 += 4;
    if ( v10 == v22 )
      goto LABEL_19;
  }
LABEL_44:
  v4 = 1;
LABEL_45:
  if ( v5 )
  {
    v28 = (const struct std::nothrow_t *)((v33 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    v29 = v5;
    if ( (unsigned __int64)v28 >= 0x1000 )
    {
      v28 = (const struct std::nothrow_t *)((char *)v28 + 39);
      v5 = (char *)*((_QWORD *)v5 - 1);
      if ( (unsigned __int64)(v29 - v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v28);
        __debugbreak();
      }
    }
    operator delete(v5, v28);
  }
  return v4;
}
