/*
 * XREFs of ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x18012C650
 * Callers:
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18012CD30 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x18012DAE0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18012DBA0 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18012D2B0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetApplicationViewsById(
        RTL_SRWLOCK *this,
        GUID *a2,
        __int64 a3,
        char a4,
        struct IObjectArray **a5)
{
  struct IObjectArray **v8; // r12
  __int64 v9; // rdx
  const struct _GUID *v11; // rdx
  __int64 v12; // rcx
  int Instance; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, struct IObjectArray ***); // rdi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  void *v21[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v24; // [rsp+98h] [rbp+58h] BYREF

  v21[1] = (void *)-2LL;
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
  v21[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  Instance = CEnumerableObjectCollection::CreateInstance(v12, v11, v21);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 902LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_24;
  }
  v21[2] = &this[81];
  AcquireSRWLockShared(this + 81);
  v16 = 0LL;
  if ( this[83].Ptr )
  {
    while ( 1 )
    {
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, struct IObjectArray ***))this[82].Ptr;
      if ( a4 )
      {
        a5 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
        v18 = (**Ptr[v16])(Ptr[v16], &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, &a5);
        v14 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x393,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
          goto LABEL_27;
        }
        v19 = ((__int64 (__fastcall *)(struct IObjectArray **, __int64, int *))(*a5)[7].lpVtbl)(a5, a3, &v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      }
      else
      {
        v19 = (*Ptr[v16])[19](Ptr[v16], a2, (struct IObjectArray ***)&v24);
      }
      if ( v19 >= 0 )
      {
        if ( v24 )
        {
          v20 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v21[0] + 40LL))(
                  v21[0],
                  *((_QWORD *)this[82].Ptr + v16));
          v14 = v20;
          if ( v20 < 0 )
            break;
        }
      }
      if ( (PVOID)++v16 >= this[83].Ptr )
        goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_27:
    if ( this != (RTL_SRWLOCK *)-648LL )
      ReleaseSRWLockShared(this + 81);
    goto LABEL_24;
  }
LABEL_19:
  if ( this != (RTL_SRWLOCK *)-648LL )
    ReleaseSRWLockShared(this + 81);
  CApplicationViewManager::RefreshCollection((CApplicationViewManager *)&this[17]);
  Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v21[0])(
               v21[0],
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               v8);
  v14 = Instance;
  if ( Instance < 0 )
  {
    v15 = 934LL;
    goto LABEL_23;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  return v14;
}
