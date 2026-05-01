/*
 * XREFs of ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x180174F20
 * Callers:
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180175610 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x1801763B0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x180176470 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180175B90 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetApplicationViewsById(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        __int64 a3,
        char a4,
        struct IObjectArray **a5)
{
  struct IObjectArray **v8; // r15
  __int64 v9; // rdx
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int Instance; // eax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r14
  RTL_SRWLOCK *v17; // rax
  RTL_SRWLOCK *v18; // r15
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  int v20; // eax
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  void *v24[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v27; // [rsp+98h] [rbp+58h] BYREF

  v24[1] = (void *)-2LL;
  v8 = a5;
  *a5 = 0LL;
  if ( a4 == 1 )
  {
    if ( a3 == -1 )
    {
      v9 = 898LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  else if ( !a4 && !a2 )
  {
    v9 = 899LL;
    goto LABEL_4;
  }
  v24[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
  Instance = CEnumerableObjectCollection::CreateInstance(v12, v11, v24);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 902LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_26;
  }
  v24[2] = &this[84];
  AcquireSRWLockShared(this + 84);
  v16 = 0LL;
  if ( this[86].Ptr )
  {
    v17 = this + 85;
    while ( 1 )
    {
      v18 = v17;
      if ( a4 )
      {
        v23 = 0LL;
        Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v17->Ptr;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v20 = (**Ptr[v16])(Ptr[v16], &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, &v23);
        v14 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          goto LABEL_29;
        }
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v23 + 56LL))(v23, a3, &v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
      else
      {
        v22 = *((_QWORD *)this[85].Ptr + v16);
        v21 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v22 + 152LL))(
                v22,
                a2,
                &v27);
      }
      v17 = v18;
      if ( v21 >= 0 )
      {
        if ( v27 )
        {
          v14 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v24[0] + 40LL))(
                  v24[0],
                  *((_QWORD *)v18->Ptr + v16));
          v17 = v18;
          if ( v14 < 0 )
            break;
        }
      }
      if ( (PVOID)++v16 >= this[86].Ptr )
      {
        v8 = a5;
        goto LABEL_21;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_29:
    if ( this != (RTL_SRWLOCK *)-672LL )
      ReleaseSRWLockShared(this + 84);
    goto LABEL_26;
  }
LABEL_21:
  if ( this != (RTL_SRWLOCK *)-672LL )
    ReleaseSRWLockShared(this + 84);
  CApplicationViewManager::RefreshCollection((CApplicationViewManager *)&this[17]);
  Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v24[0])(
               v24[0],
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               v8);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 934LL;
    goto LABEL_25;
  }
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
  return (unsigned int)v14;
}
