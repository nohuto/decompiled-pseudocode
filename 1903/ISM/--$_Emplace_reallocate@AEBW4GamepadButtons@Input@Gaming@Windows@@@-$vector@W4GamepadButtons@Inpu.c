/*
 * XREFs of ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x1800796BC
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036FB0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18007997C (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x180094BA0 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180059D64 (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x1800666DC (--$_Ucopy@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Butto.c)
 *     ?_Umove_if_noexcept1@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@00U?$integral_constant@_N$00@2@@Z @ 0x180066738 (-_Umove_if_noexcept1@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        void **a1,
        _BYTE *a2,
        unsigned int *a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rdx
  __int64 v18; // rcx
  void *v20; // [rsp+78h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v20 = v13;
  try
  {
    v15 = *a3;
    *((_DWORD *)v13 + v6) = v15;
    v16 = (__int64)a1[1];
    v17 = *a1;
    if ( a2 == (_BYTE *)v16 )
    {
      std::vector<Windows::UI::Color>::_Umove_if_noexcept1((__int64)a1, v17, v16, v13, 0);
    }
    else
    {
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v15, v17, (__int64)a2, v13);
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v18, a2, (__int64)a1[1], (void *)(v14 + 4 * (v6 + 1)));
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(4 * v11));
    throw;
  }
  std::vector<Windows::UI::Color>::_Change_array((__int64)a1, v14, v8, v11);
  return (__int64)*a1 + 4 * v6;
}
