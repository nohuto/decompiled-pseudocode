/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180130840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18005C100 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  CApplicationManager *v5; // rbx
  int ImmersiveApplicationArraySafe; // eax
  int v7; // ebx
  struct IImmersiveApplicationArray *v8; // rbx
  __int64 (__fastcall *v9)(struct IImmersiveApplicationArray *, GUID *, __int64 *); // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveApplicationArray *v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  v5 = (CApplicationManager *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(v5, &v14);
  v7 = ImmersiveApplicationArraySafe;
  if ( ImmersiveApplicationArraySafe >= 0 )
  {
    v13 = 0LL;
    v8 = v14;
    v9 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationArray *, GUID *, __int64 *))v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v10 = v9(v8, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v13);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v13 + 40LL))(v13, a2, a3);
      if ( v7 >= 0 )
        v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10FE,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10FC,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)ImmersiveApplicationArraySafe);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v7;
}
