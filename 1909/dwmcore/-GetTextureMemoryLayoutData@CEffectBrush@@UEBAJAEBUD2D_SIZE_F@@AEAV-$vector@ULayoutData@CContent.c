/*
 * XREFs of ?GetTextureMemoryLayoutData@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C9D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801C9AB4 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C9B28 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x1801CA088 (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 i; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(void **)a3;
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  *(_QWORD *)(a3 + 8) = v3;
  for ( i = 0LL; (unsigned int)v5 < *(_DWORD *)(a1 + 136); v5 = (unsigned int)(v5 + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8 * v5);
    if ( v9 )
    {
      v14 = 0LL;
      v13 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 320LL))(v9, a2, &v13);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x15Du, 0LL);
        std::vector<CContent::LayoutData>::_Tidy(&v13);
        goto LABEL_7;
      }
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &i,
        &v17,
        *((char **)&i + 1),
        (const void *)v13,
        *((__int64 *)&v13 + 1));
      std::vector<CContent::LayoutData>::_Tidy(&v13);
    }
  }
  std::vector<CContent::LayoutData>::operator=((void **)a3, (__int64)&i);
LABEL_7:
  std::vector<CContent::LayoutData>::_Tidy(&i);
  return v4;
}
