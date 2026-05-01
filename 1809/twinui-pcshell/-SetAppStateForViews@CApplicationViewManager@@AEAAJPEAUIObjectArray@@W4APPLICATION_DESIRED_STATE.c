/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18012D7D8
 * Callers:
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x18012DAE0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18012DBA0 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_e82093062f3543b63215b0da2be0dc6a___ @ 0x18012A4C0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_e82093062f3543b63215b0da2be0dc6a___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r15d
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // edi
  unsigned int v11; // esi
  int v12; // eax
  int v13; // r15d
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v19; // [rsp+A8h] [rbp+48h] BYREF
  int v20; // [rsp+B8h] [rbp+58h]

  punk[1] = (IUnknown *)-2LL;
  v6 = 0;
  v20 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v19);
  if ( v7 >= 0 )
  {
    if ( v19 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
                a2,
                v11,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &v14);
        if ( v12 >= 0 )
        {
          v16 = v14;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
          v17 = a3;
          punk[0] = 0LL;
          v13 = v6 | 2;
          v20 = v13;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
          (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 32) + 32LL))(
            a1 + 32,
            &GUID_00000000_0000_0000_c000_000000000046,
            punk);
          v6 = v13 & 0xFFFFFFFC | 1;
          v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_e82093062f3543b63215b0da2be0dc6a___(
                 punk[0],
                 v14,
                 &v16);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          if ( a3 == 1 && v7 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
            return (unsigned int)v7;
          }
          if ( v10 >= 0 )
            v10 = v7;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            947LL,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v12);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        if ( ++v11 >= v19 )
          return (unsigned int)v10;
      }
    }
    v7 = -2147319765;
    v8 = 941LL;
  }
  else
  {
    v8 = 940LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
