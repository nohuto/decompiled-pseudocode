/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E4B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801CB254 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801CB2C8 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x1801CB828 (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(void **)a3;
  v4 = 0;
  v18 = 0LL;
  *(_QWORD *)(a3 + 8) = v3;
  v6 = *(_QWORD *)(a1 + 88);
  v17 = 0LL;
  if ( v6 )
  {
    v16 = 0LL;
    v15 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 320LL))(v6, a2, &v15);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4Fu, 0LL);
      goto LABEL_10;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
      &v17,
      &v19,
      0LL,
      (const void *)v15,
      *((__int64 *)&v15 + 1));
    std::vector<CContent::LayoutData>::_Tidy((__int64)&v15);
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    v16 = 0LL;
    v15 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v11 + 320LL))(v11, a2, &v15);
    v4 = v12;
    if ( v12 >= 0 )
    {
      std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,void>(
        &v17,
        &v19,
        *((char **)&v17 + 1),
        (const void *)v15,
        *((__int64 *)&v15 + 1));
      std::vector<CContent::LayoutData>::_Tidy((__int64)&v15);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x56u, 0LL);
LABEL_10:
    std::vector<CContent::LayoutData>::_Tidy((__int64)&v15);
    goto LABEL_8;
  }
LABEL_7:
  std::vector<CContent::LayoutData>::operator=((void **)a3, (__int64)&v17);
LABEL_8:
  std::vector<CContent::LayoutData>::_Tidy((__int64)&v17);
  return v4;
}
