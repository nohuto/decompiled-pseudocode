/*
 * XREFs of ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180142594
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180145AE0 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800150AC (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18014DDB4 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  __int64 v3; // rbx
  int RoomAt; // ebx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-89h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-81h] BYREF
  __int128 v11; // [rsp+38h] [rbp-79h] BYREF
  __int64 v12; // [rsp+48h] [rbp-69h]
  _OWORD v13[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v14; // [rsp+70h] [rbp-41h]
  int v15; // [rsp+78h] [rbp-39h]
  _QWORD v16[2]; // [rsp+88h] [rbp-29h] BYREF
  int v17; // [rsp+98h] [rbp-19h]
  int v18; // [rsp+9Ch] [rbp-15h]
  __int128 v19; // [rsp+A0h] [rbp-11h]
  __int128 v20; // [rsp+B0h] [rbp-1h]
  __int128 v21; // [rsp+C0h] [rbp+Fh]
  __int64 v22; // [rsp+D0h] [rbp+1Fh]
  int v23; // [rsp+D8h] [rbp+27h]
  __int64 v24; // [rsp+E0h] [rbp+2Fh]
  int v25; // [rsp+E8h] [rbp+37h]
  int v26; // [rsp+ECh] [rbp+3Bh]

  v12 = -2LL;
  v11 = 0uLL;
  v3 = *((_QWORD *)this + 20);
  v16[0] = a2;
  v16[1] = 0LL;
  v17 = 3;
  v18 = 0;
  v19 = 0uLL;
  memset_0(v13, 0, 0x2CuLL);
  v20 = v13[0];
  v21 = v13[1];
  v22 = v14;
  v23 = v15;
  v24 = (v3 + 112) & -(__int64)(v3 != 0);
  v25 = 3;
  v26 = 15;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  *(_QWORD *)&v11 = v16;
  v9 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  RoomAt = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
             &v10,
             &v11);
  if ( RoomAt >= 0 )
    RoomAt = (**v10)(v10, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  if ( RoomAt >= 0 )
  {
    v5 = (_QWORD *)((char *)this + 256);
    v6 = *((_QWORD *)this + 33);
    RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
               v5,
               v6);
    if ( RoomAt >= 0 )
    {
      v7 = (__int64 *)(*v5 + 8 * v6);
      if ( v7 )
      {
        *v7 = v9;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)RoomAt;
}
