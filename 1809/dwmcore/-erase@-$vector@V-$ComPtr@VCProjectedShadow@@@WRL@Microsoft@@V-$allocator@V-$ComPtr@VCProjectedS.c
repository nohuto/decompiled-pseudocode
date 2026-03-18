/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801AE898
 * Callers:
 *     ?OnCasterRemovedFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801ADB30 (-OnCasterRemovedFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 *     ?OnCasterRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801AF21C (-OnCasterRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 *     ?OnReceiverRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801AF2BC (-OnReceiverRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *v3; // rsi
  char *v4; // rdi
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(char **)(a1 + 8);
  v4 = (char *)(a3 + 8);
  v8 = v3;
  if ( (char *)(a3 + 8) != v3 )
  {
    do
    {
      v9 = 0LL;
      if ( &v13 != v4 )
      {
        v9 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
      }
      v10 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v4 += 8;
    }
    while ( v4 != v3 );
    v3 = *(char **)(a1 + 8);
    v8 = v3;
  }
  v11 = *((_QWORD *)v3 - 1);
  if ( v11 )
  {
    *((_QWORD *)v3 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v8 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 8;
  result = a2;
  *a2 = a3;
  return result;
}
