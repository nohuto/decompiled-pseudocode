/*
 * XREFs of ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x1801370F8
 * Callers:
 *     ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18012E980 (-AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180133B60 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_FindAnotherGlom(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        struct IUnknown **a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v8; // esi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rdi
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, _QWORD, GUID *, struct IUnknown **); // rdi
  struct IUnknown *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  struct IUnknown *v23; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a3;
  v19[1] = -2LL;
  *a4 = 0LL;
  v19[0] = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         v19);
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v9 = v19[0];
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19[0] + 32LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    v21 = -1LL;
    v22 = -1LL;
    v8 = v10(v9, &v20);
    if ( v8 >= 0 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 120))(
             *(_QWORD *)(a1 + 120),
             &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
             &v18);
      if ( v8 >= 0 )
      {
        v25 = 0LL;
        v11 = v18;
        v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v18 + 104LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        v8 = v12(v11, v20, &v25);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v24);
          if ( v8 >= 0 )
          {
            v8 = -2147023728;
            if ( v24 > 1 )
            {
              v13 = 0;
              if ( v24 )
              {
                while ( 1 )
                {
                  v23 = 0LL;
                  v14 = v25;
                  v15 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v25 + 32LL);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
                  if ( v15(v14, v13, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v23) >= 0
                    && !(unsigned int)SHIsSameObject(a2, v23)
                    && ((unsigned __int8 (__fastcall *)(struct IUnknown *))v23->lpVtbl[17].AddRef)(v23) )
                  {
                    break;
                  }
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
                  if ( ++v13 >= v24 )
                    goto LABEL_14;
                }
                v16 = v23;
                v23 = 0LL;
                *a4 = v16;
                v8 = 0;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
              }
            }
          }
        }
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return (unsigned int)v8;
}
