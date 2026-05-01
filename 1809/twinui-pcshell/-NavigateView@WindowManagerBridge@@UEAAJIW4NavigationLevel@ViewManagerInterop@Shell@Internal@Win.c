/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180061450
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d_____lambda_fb3fa034337556d8d2ac1df059e47d1d___ @ 0x180061554 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df0_ea_180061554.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v5; // edi
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+28h] BYREF
  int v14; // [rsp+98h] [rbp+30h] BYREF
  int v15; // [rsp+A0h] [rbp+38h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+40h] BYREF

  v15 = a3;
  v14 = a2;
  v11 = -2LL;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 200LL))(*(_QWORD *)(a1 + 288));
  v12[0] = &v14;
  v12[1] = a1;
  v12[2] = &v15;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d_____lambda_fb3fa034337556d8d2ac1df059e47d1d___(
           v6,
           &v13,
           v12);
  v8 = SHTaskPoolQueueTask(v5, 32LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v13;
  return (unsigned int)v8;
}
