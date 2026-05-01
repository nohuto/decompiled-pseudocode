/*
 * XREFs of ?IsHidingAnimationRunning@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NI@Z @ 0x1802CB96C
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1802C3FA0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsHidingAnimationRunning(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v3 = std::_Hash_bytes((const unsigned __int8 *)&v12, 4uLL);
  v5 = v4[66];
  v6 = v4[69] & v3;
  v7 = (__int64 *)v4[64];
  v8 = *(__int64 **)(v5 + 16 * v6);
  v9 = 2 * v6;
  while ( 1 )
  {
    v10 = *(__int64 **)(v5 + 8 * v9) == v7 ? (__int64 *)v4[64] : **(__int64 ***)(v5 + 8 * v9 + 8);
    if ( v8 == v10 )
      break;
    if ( *((_DWORD *)v8 + 4) == a2 )
      goto LABEL_9;
    v8 = (__int64 *)*v8;
  }
  v8 = (__int64 *)v4[64];
LABEL_9:
  if ( v8 == v7 )
    return 0;
  else
    return *((_BYTE *)v8 + 20);
}
