/*
 * XREFs of ?OnCasterRemovedFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801AF21C
 * Callers:
 *     ?OnCasterRemovedFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801ADB30 (-OnCasterRemovedFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801AE898 (-erase@-$vector@V-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCProjectedS.c)
 */

void __fastcall CProjectedShadowReceiver::OnCasterRemovedFromScene(
        CProjectedShadowReceiver *this,
        struct CResource **a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  struct CProjectedShadow **v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  v5 = ((v2[1] - v4) >> 3) - 1;
  if ( v5 >= 0 )
  {
    v6 = v5;
    v7 = (struct CProjectedShadow **)(v4 + 8LL * v5);
    while ( *v7 != (struct CProjectedShadow *)a2 )
    {
      --v5;
      --v7;
      if ( --v6 < 0 )
        goto LABEL_7;
    }
    CResource::UnRegisterNotifierInternal(this, a2[9]);
    *(_QWORD *)(*(_QWORD *)(*v2 + 8LL * v5) + 80LL) = 0LL;
    std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase((__int64)v2, &v8, *v2 + 8LL * v5);
  }
LABEL_7:
  (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
}
