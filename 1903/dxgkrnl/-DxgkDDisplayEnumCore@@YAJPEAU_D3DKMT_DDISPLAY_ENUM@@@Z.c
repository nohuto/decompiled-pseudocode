/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C013FC70
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x1C013F8E0 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int128 v4; // [rsp+20h] [rbp-40h]
  __int128 v5; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v6; // [rsp+50h] [rbp-10h]
  struct _D3DKMT_DDISPLAY_ENUM *v7; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+78h] [rbp+18h] BYREF
  int v9; // [rsp+80h] [rbp+20h] BYREF

  v7 = a1;
  v9 = 0;
  v8 = 0;
  *(_QWORD *)&v4 = &v9;
  *((_QWORD *)&v4 + 1) = &v7;
  v6 = &v8;
  v5 = v4;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64)lambda_3dc479c6339d8ea3367aebfddfa054a6_::_lambda_invoker_cdecl_,
    (__int64)&v5,
    4);
  *(_DWORD *)v7 = v9;
  *((_DWORD *)v7 + 4) = v8;
  if ( *((_DWORD *)v7 + 1) < *(_DWORD *)v7 || *((_DWORD *)v7 + 5) < v8 )
    return 3221225507LL;
  else
    return 0LL;
}
