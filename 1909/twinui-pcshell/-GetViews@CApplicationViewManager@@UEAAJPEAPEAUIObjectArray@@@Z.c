/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1801754D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180175B90 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rbp
  int v9; // eax
  struct IObjectArray *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v13; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v14 = this + 67;
    AcquireSRWLockShared(this + 67);
    v8 = 0LL;
    if ( this[69].Ptr )
    {
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, *((_QWORD *)this[68].Ptr + v8));
        v7 = v9;
        if ( v9 < 0 )
          break;
        if ( (PVOID)++v8 >= this[69].Ptr )
          goto LABEL_6;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( this != (RTL_SRWLOCK *)-536LL )
        ReleaseSRWLockShared(this + 67);
    }
    else
    {
LABEL_6:
      if ( this != (RTL_SRWLOCK *)-536LL )
        ReleaseSRWLockShared(this + 67);
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v10 = (struct IObjectArray *)v13;
      v13 = 0LL;
      *a2 = v10;
      v7 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v7;
}
