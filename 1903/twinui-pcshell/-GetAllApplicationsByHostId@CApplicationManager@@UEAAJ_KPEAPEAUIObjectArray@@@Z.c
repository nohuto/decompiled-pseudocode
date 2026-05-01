/*
 * XREFs of ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x18001B590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18001B680 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostId(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // eax
  int v7; // ebx
  int v8; // eax
  struct IImmersiveApplicationArray *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveApplicationArray *v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = 0LL;
  v12 = 0LL;
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(
                                    (CApplicationManager *)((char *)this + 72),
                                    &v12);
  v7 = ImmersiveApplicationArraySafe;
  if ( ImmersiveApplicationArraySafe < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)ImmersiveApplicationArraySafe,
      -2);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    goto LABEL_7;
  }
  v13 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationArray *, GUID *, __int64 *))v12)(
         v12,
         &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34,
         &v13);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110D,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v8,
      -2);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v13 + 40LL))(v13, a2, a3);
  if ( v7 < 0 )
  {
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationArray *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v7 = 0;
LABEL_7:
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)v7;
}
