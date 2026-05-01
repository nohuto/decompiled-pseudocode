/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180067950
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07_____lambda_585f166517ad6215030a8574fdaaae07___ @ 0x180067A50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_585f166517ad6215030a8574_ea_180067A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v5; // edi
  __int64 v6; // rbx
  void *v7; // rax
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
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 208LL))(*(_QWORD *)(a1 + 280));
  v12[0] = &v14;
  v12[1] = a1;
  v12[2] = &v15;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07_____lambda_585f166517ad6215030a8574fdaaae07___(
           v7,
           &v13,
           v12);
  v8 = SHTaskPoolQueueTask(v5, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    return v13;
  return (unsigned int)v8;
}
