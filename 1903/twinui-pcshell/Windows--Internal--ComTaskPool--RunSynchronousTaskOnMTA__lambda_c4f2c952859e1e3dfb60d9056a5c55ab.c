/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c4f2c952859e1e3dfb60d9056a5c55ab___ @ 0x18007B1F4
 * Callers:
 *     ?OnAppViewActivationShowRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewActivationShowRequestedEventArgs@3456@@Z @ 0x18007B1C0 (-OnAppViewActivationShowRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c4f2c952859e1e3dfb60d9056a5c55ab___(
        unsigned int a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rbx
  __int128 v10; // xmm0
  int v11; // ebx
  APTTYPEQUALIFIER v13[14]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v15, v13) < 0 || !v15 || v15 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v14 = 0;
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v10 = *a3;
    v6 = v9;
    *v9 = off_18042C1E8;
    v8 = v9;
    v9[4] = &v14;
    *((_OWORD *)v9 + 1) = v10;
  }
  v11 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v6, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  if ( v11 >= 0 )
    return v14;
  return (unsigned int)v11;
}
