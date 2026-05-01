/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f734c1787531bbb8bf09975f4ec8a2df___ @ 0x1800495A4
 * Callers:
 *     ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x180049520 (-UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df____long_&__lambda_f734c1787531bbb8bf09975f4ec8a2df___ @ 0x18004966C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f734c17.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f734c1787531bbb8bf09975f4ec8a2df___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  int v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v13, (APTTYPEQUALIFIER *)&v10) < 0 || !v13 || v13 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f734c1787531bbb8bf09975f4ec8a2df____long____lambda_f734c1787531bbb8bf09975f4ec8a2df___(
                    &v11,
                    &v12,
                    a3);
  v7 = *v6;
  *v6 = 0LL;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
