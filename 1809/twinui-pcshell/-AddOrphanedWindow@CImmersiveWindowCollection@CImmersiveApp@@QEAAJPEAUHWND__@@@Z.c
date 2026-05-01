/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18011A644
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18011D160 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800465B8 (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180124654 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rbx
  int RoomAt; // ebx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-81h] BYREF
  __int128 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+48h] [rbp-69h]
  _OWORD v12[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v13; // [rsp+70h] [rbp-41h]
  int v14; // [rsp+78h] [rbp-39h]
  _QWORD v15[2]; // [rsp+88h] [rbp-29h] BYREF
  int v16; // [rsp+98h] [rbp-19h]
  int v17; // [rsp+9Ch] [rbp-15h]
  __int128 v18; // [rsp+A0h] [rbp-11h]
  __int128 v19; // [rsp+B0h] [rbp-1h]
  __int128 v20; // [rsp+C0h] [rbp+Fh]
  __int64 v21; // [rsp+D0h] [rbp+1Fh]
  int v22; // [rsp+D8h] [rbp+27h]
  __int64 v23; // [rsp+E0h] [rbp+2Fh]
  int v24; // [rsp+E8h] [rbp+37h]
  int v25; // [rsp+ECh] [rbp+3Bh]

  v11 = -2LL;
  v10 = 0uLL;
  v3 = *((_QWORD *)this + 20);
  v15[0] = a2;
  v15[1] = 0LL;
  v16 = 3;
  v17 = 0;
  v18 = 0uLL;
  memset_0(v12, 0, 0x2CuLL);
  v19 = v12[0];
  v20 = v12[1];
  v21 = v13;
  v22 = v14;
  v23 = (v3 + 112) & -(__int64)(v3 != 0);
  v24 = 3;
  v25 = 15;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  *(_QWORD *)&v10 = v15;
  v8 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  RoomAt = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
             &v9,
             &v10);
  if ( RoomAt >= 0 )
    RoomAt = (**v9)(v9, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  if ( RoomAt >= 0 )
  {
    v5 = *((_QWORD *)this + 33);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               (_QWORD *)this + 32,
               v5);
    if ( RoomAt >= 0 )
    {
      v6 = (__int64 *)(*((_QWORD *)this + 32) + 8 * v5);
      if ( v6 )
      {
        *v6 = v8;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)RoomAt;
}
