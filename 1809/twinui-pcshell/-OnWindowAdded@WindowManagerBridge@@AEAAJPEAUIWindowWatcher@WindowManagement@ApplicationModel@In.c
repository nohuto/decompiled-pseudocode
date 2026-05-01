/*
 * XREFs of ?OnWindowAdded@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x1800342B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c_____lambda_2254560a2be2e850cda9341575eb773c___ @ 0x180034398 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___--.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowAdded(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rdi
  int v7; // ebx
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *v13; // [rsp+80h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+20h] BYREF

  v13 = a3;
  v10 = -2LL;
  v11[0] = &v13;
  v11[1] = this;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v12 = 0;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c___::CResultTaskWrapper__lambda_2254560a2be2e850cda9341575eb773c_____lambda_2254560a2be2e850cda9341575eb773c___(
           v5,
           &v12,
           v11);
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v12;
  return (unsigned int)v7;
}
