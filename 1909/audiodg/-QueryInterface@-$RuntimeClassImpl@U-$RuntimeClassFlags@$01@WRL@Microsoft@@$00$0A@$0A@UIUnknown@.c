/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400057D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400184E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1400184E0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140003D08 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rdx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( InlineIsEqualGUID(v4, v3) )
  {
    *v8 = v9;
    v12 = 0;
LABEL_6:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return (unsigned int)v12;
  }
  if ( InlineIsEqualGUID(v7, &GUID_be7a4789_2891_49b3_923e_dc97de058472) )
  {
    v9 = v11 + 8;
    *v10 = v9;
    v12 = 0;
  }
  else
  {
    v12 = -2147467262;
    v9 = 0LL;
  }
  if ( v12 >= 0 )
    goto LABEL_6;
  return (unsigned int)v12;
}
