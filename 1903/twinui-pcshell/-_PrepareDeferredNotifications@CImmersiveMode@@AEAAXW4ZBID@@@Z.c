/*
 * XREFs of ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800681B4
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180068080 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_PrepareDeferredNotifications(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // r14d
  struct IObjectArray *v6; // rbx
  int CallbackArray; // eax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  int v10; // ecx
  struct IObjectArray *v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 184) & -(__int64)(a1 != 0));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  v6 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 296), &v11);
    v6 = v11;
    if ( CallbackArray >= 0
      && (((int (__fastcall *)(struct IObjectArray *, int *))v11->lpVtbl->GetCount)(v11, &v12) < 0 || !v12) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      v6 = v11;
    }
  }
  v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v13 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(a1 + 248);
    *v8 = a2;
    v8[1] = v10;
    *((_QWORD *)v8 + 1) = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8 + 2);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
