/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b___ @ 0x180070980
 * Callers:
 *     ?UpdateEngagementTelemetryFlags@WindowWrapperBase@@UEAAJ_K0@Z @ 0x180070910 (-UpdateEngagementTelemetryFlags@WindowWrapperBase@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b____long_&__lambda_adb4202210a1cd7d97551f2a3dbe735b___ @ 0x180070A38 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_adb4202.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_adb4202210a1cd7d97551f2a3dbe735b___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // edi
  int v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v15, (APTTYPEQUALIFIER *)&v12) < 0 || !v15 || v15 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v14 = 0;
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b____long____lambda_adb4202210a1cd7d97551f2a3dbe735b___(
                    &v13,
                    &v14,
                    a3);
  v8 = *v6;
  *v6 = 0LL;
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v9,
      v7);
  }
  v10 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 >= 0 )
    return v14;
  return (unsigned int)v10;
}
