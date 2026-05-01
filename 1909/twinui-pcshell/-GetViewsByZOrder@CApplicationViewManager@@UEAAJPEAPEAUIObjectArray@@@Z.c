/*
 * XREFs of ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180175640
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180175B90 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViewsByZOrder(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  struct IObjectArray *v8; // rax
  LPARAM lParam[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char *v12; // [rsp+78h] [rbp+38h] BYREF
  void *v13; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v14; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v14 = this + 67;
    AcquireSRWLockShared(this + 67);
    LODWORD(v12) = 0;
    lParam[0] = (LPARAM)&v12;
    lParam[1] = (LPARAM)&this[-17];
    lParam[2] = (LPARAM)&v13;
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_1d72a6719327f90c5d8253a2407aff64_>,
      (LPARAM)lParam);
    v7 = (unsigned int)v12;
    if ( (int)v12 >= 0 )
    {
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v8 = (struct IObjectArray *)v13;
      v13 = 0LL;
      *a2 = v8;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( this != (RTL_SRWLOCK *)-536LL )
      ReleaseSRWLockShared(this + 67);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v7;
}
