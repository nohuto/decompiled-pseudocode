/*
 * XREFs of ?OnAppViewUniversalPropertyChanged@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewUniversalPropertyChangedEventArgs@3456@@Z @ 0x18002AF40
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ff02ad46e3db5cfcb8cb681148c280b____long_&__lambda_6ff02ad46e3db5cfcb8cb681148c280b___ @ 0x18002B040 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6ff02ad.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewUniversalPropertyChanged(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *v13; // [rsp+90h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+98h] [rbp+20h] BYREF

  v13 = a3;
  v10[1] = -2LL;
  v11[0] = this;
  v11[1] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v12 = 0;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6ff02ad46e3db5cfcb8cb681148c280b____long____lambda_6ff02ad46e3db5cfcb8cb681148c280b___(
                    v10,
                    &v12,
                    v11);
  v6 = *v5;
  *v5 = 0LL;
  if ( v10[0] )
  {
    v10[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
    return (unsigned int)v7;
  else
    return v12;
}
