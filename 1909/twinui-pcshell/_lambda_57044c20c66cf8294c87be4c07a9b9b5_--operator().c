/*
 * XREFs of _lambda_57044c20c66cf8294c87be4c07a9b9b5_::operator() @ 0x18034DB04
 * Callers:
 *     ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x18034E8A0 (-IndexOf@-$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_57044c20c66cf8294c87be4c07a9b9b5_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // r9
  __int128 v3; // xmm1
  __int64 *v4; // r8
  __int128 v5; // xmm0
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v1 = a1[1];
  v2 = (__int64 *)a1[3];
  v3 = *(_OWORD *)(v1 + 16);
  v4 = (__int64 *)a1[2];
  v10[0] = *(_OWORD *)v1;
  v5 = *(_OWORD *)(v1 + 32);
  v6 = *v2;
  v7 = *v4;
  v10[1] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(v1 + 48);
  v8 = *a1;
  v10[2] = v5;
  v11 = v3;
  return (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64, __int64))(**(_QWORD **)(v8 + 40) + 72LL))(
           *(_QWORD *)(v8 + 40),
           v10,
           v7,
           v6);
}
