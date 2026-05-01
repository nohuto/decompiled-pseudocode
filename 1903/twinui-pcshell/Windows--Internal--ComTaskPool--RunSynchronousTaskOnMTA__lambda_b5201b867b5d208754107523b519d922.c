/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b5201b867b5d208754107523b519d922___ @ 0x18006F648
 * Callers:
 *     ?put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006F5F0 (-put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b5201b867b5d208754107523b519d922____long_&__lambda_b5201b867b5d208754107523b519d922___ @ 0x18006F700 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_b5201b8.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b5201b867b5d208754107523b519d922___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  int v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v14, (APTTYPEQUALIFIER *)&v11) < 0 || !v14 || v14 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b5201b867b5d208754107523b519d922____long____lambda_b5201b867b5d208754107523b519d922___(
                    &v12,
                    &v13,
                    a3);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v13;
  return (unsigned int)v9;
}
