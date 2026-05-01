/*
 * XREFs of ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x18011032C
 * Callers:
 *     ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180108640 (-AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18010D1D0 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_FindAnotherGlom(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        struct IUnknown **a4)
{
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rbx
  struct IUnknown *v12; // rax
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  struct IUnknown *v19; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v20 = a3;
  v15[1] = -2LL;
  *a4 = 0LL;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         v15);
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v8 = v15[0];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
    v17 = -1LL;
    v18 = -1LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, &v16);
    if ( v7 >= 0 )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 120))(
             *(_QWORD *)(a1 + 120),
             &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
             &v14);
      if ( v7 >= 0 )
      {
        v21 = 0LL;
        v9 = v14;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 104LL))(v9, v16, &v21);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
          if ( v7 >= 0 )
          {
            v7 = -2147023728;
            if ( v20 > 1 )
            {
              v10 = 0;
              if ( v20 )
              {
                while ( 1 )
                {
                  v19 = 0LL;
                  v11 = v21;
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
                  if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v11 + 32LL))(
                         v11,
                         v10,
                         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                         &v19) >= 0
                    && !(unsigned int)SHIsSameObject(a2, v19)
                    && ((unsigned __int8 (__fastcall *)(struct IUnknown *))v19->lpVtbl[17].AddRef)(v19) )
                  {
                    break;
                  }
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
                  if ( ++v10 >= v20 )
                    goto LABEL_14;
                }
                v12 = v19;
                v19 = 0LL;
                *a4 = v12;
                v7 = 0;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
              }
            }
          }
        }
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return (unsigned int)v7;
}
