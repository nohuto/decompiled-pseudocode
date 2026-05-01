/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18002D548
 * Callers:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x18005ADA4 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD030 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002D2FC (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GetThreadUILanguage_0 @ 0x18008578E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *a1,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v3; // rax
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int16 *v8; // r14
  LANGID ThreadUILanguage_0; // ax
  int v10; // ebx
  const wchar_t *v11; // rdx
  unsigned __int16 *v12; // rax
  unsigned __int16 *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  unsigned __int16 *v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  struct IImmersiveApplicationManagerSafeForSyncCallouts *LCData; // [rsp+78h] [rbp+28h] BYREF

  LCData = a2;
  *a3 = 0LL;
  v3 = *(_QWORD *)a1;
  v17 = 0LL;
  v18 = -1LL;
  v19 = -1LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 **))(v3 + 376))(a1, &v17);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)a1;
    v14 = 0LL;
    v15 = -1LL;
    v16 = -1LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 **))(v7 + 248))(a1, &v14) < 0 )
      goto LABEL_11;
    v8 = v17;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v10 = 0;
    if ( GetLocaleInfoW(ThreadUILanguage_0, 0x20000070u, (LPWSTR)&LCData, 2) > 0 )
      LOBYTE(v10) = (_DWORD)LCData == 1;
    v11 = asc_180411C18;
    if ( !v10 )
      v11 = asc_180411C28;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &v14,
                (__int64)v11,
                v8) < 0 )
    {
LABEL_11:
      v12 = v17;
      v17 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v12 = v14;
      v14 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
    }
    *a3 = v12;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v14);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v17);
  return (unsigned int)v6;
}
