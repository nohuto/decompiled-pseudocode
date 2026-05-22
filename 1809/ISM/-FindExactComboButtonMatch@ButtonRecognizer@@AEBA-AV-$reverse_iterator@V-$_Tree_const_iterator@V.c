/*
 * XREFs of ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800C60C8
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C6EA8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ButtonRecognizer::FindExactComboButtonMatch(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rax
  bool i; // zf
  __int64 *v13; // rax
  __int64 **v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rdx
  __int64 v17; // r8
  const struct std::nothrow_t *v18; // rdx
  char *v19; // rax
  __int64 v20; // r8
  char *v21; // rcx
  signed __int64 v22; // rdx
  void *v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h]
  __int64 v26; // [rsp+38h] [rbp-8h]
  __int64 *v27; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v28; // [rsp+78h] [rbp+38h] BYREF

  std::vector<enum _Button>::vector<enum _Button>(&v24, a3);
  v6 = (char *)v24;
  v7 = (v25 - (__int64)v24) >> 2;
  LOBYTE(v8) = (_BYTE)v27;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v24, v25, v7, v8, -2LL);
  v10 = *(__int64 **)(a1 + 32);
  v11 = *v10;
  *a2 = *v10;
  v28 = v10;
  for ( i = v10 == (__int64 *)v11; !i; i = v28 == **(__int64 ***)(a1 + 32) )
  {
    v27 = v10;
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v27);
    v13 = v27;
    v27 = v10;
    v14 = &v27;
    if ( !*((_BYTE *)v13 + 40) )
      goto LABEL_14;
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v27);
    v15 = v27[7];
    v16 = (_DWORD *)v27[6];
    v9 = (v15 - (__int64)v16) >> 2;
    if ( v9 != (__int64)(a3[1] - *a3) >> 2 )
      goto LABEL_20;
    if ( v16 == (_DWORD *)v15 )
    {
LABEL_9:
      *a2 = v10;
      break;
    }
    v17 = *a3 - (_QWORD)v16;
    while ( *v16 == *(_DWORD *)((char *)v16 + v17) )
    {
      if ( ++v16 == (_DWORD *)v15 )
        goto LABEL_9;
    }
LABEL_20:
    std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v28);
    v10 = v28;
  }
  if ( !v6 )
    return a2;
  v18 = (const struct std::nothrow_t *)((v26 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  v19 = v6;
  if ( (unsigned __int64)v18 >= 0x1000 )
  {
    v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
    v6 = (char *)*((_QWORD *)v6 - 1);
    if ( (unsigned __int64)(v19 - v6 - 8) > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v9, v18);
LABEL_14:
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(v14);
      v20 = v27[7];
      v21 = (char *)v27[6];
      if ( (v20 - (__int64)v21) >> 2 == v7 )
      {
        if ( v21 == (char *)v20 )
        {
LABEL_19:
          *a2 = v10;
        }
        else
        {
          v22 = v6 - v21;
          while ( *(_DWORD *)v21 == *(_DWORD *)&v21[v22] )
          {
            v21 += 4;
            if ( v21 == (char *)v20 )
              goto LABEL_19;
          }
        }
      }
      goto LABEL_20;
    }
  }
  operator delete(v6, v18);
  return a2;
}
