/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180050310
 * Callers:
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180050050 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180050070 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x180050188 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___ @ 0x180102B74 (CClassicWindowManager--ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180104320 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CClassicWindowManager::_HandleDestructionOrHide(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 v13; // bl
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  _QWORD v22[4]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  v22[1] = -2LL;
  v24 = 0LL;
  v22[0] = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v8 = -2147319765;
  if ( a1[25] )
  {
    v22[2] = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1[24] + 8 * v7);
      v23[0] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v25 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
             v9,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v25) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 192LL))(v25, a2) )
      {
        v10 = 0;
      }
      else
      {
        v10 = -1;
      }
      v11 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v7 >= a1[25] )
      {
        v6 = v26;
        goto LABEL_13;
      }
    }
    v6 = v7;
    v12 = 0;
  }
  else
  {
LABEL_13:
    v12 = -2147319765;
  }
  if ( v12 < 0
    || (v18 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[24] + 8 * v6),
        (**v18)(v18, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v24) < 0) )
  {
    v13 = 0;
    if ( a3 == 1 )
    {
      v23[0] = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      if ( a1[30] )
      {
        while ( 1 )
        {
          v22[0] = 0LL;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
          v26 = *(_QWORD *)(a1[29] + 8 * v15);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
          v25 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v26, &v25) >= 0
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 192LL))(v25, a2) )
          {
            v21 = 0;
          }
          else
          {
            v21 = -1;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22);
          if ( !v21 )
            break;
          if ( (unsigned __int64)++v15 >= a1[30] )
            goto LABEL_17;
        }
        v14 = v15;
        v8 = 0;
      }
LABEL_17:
      if ( v8 >= 0 )
      {
        v13 = 1;
        CClassicWindowManager::RemoveApplicationView(a1, *(_QWORD *)(a1[29] + 8 * v14), 0LL);
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[28] + 16LL))(a1 + 28, v14);
      }
      else
      {
        v13 = 0;
      }
    }
  }
  else
  {
    v13 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v24 + 136LL))(v24) )
    {
      v25 = v24;
      v22[0] = &v25;
      v26 = v24;
      v23[0] = &v26;
      v23[1] = v22;
      CClassicWindowManager::ForEachWindow__lambda_e38150da5853c9585d6e2ab0148a729e___(a1, v23);
    }
    if ( a3 || (*(int (__fastcall **)(_QWORD *, __int64 *))(a1[28] + 8LL))(a1 + 28, &v24) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[23] + 16LL))(a1 + 23, v6);
      CClassicWindowManager::RemoveApplicationView(v20, v24, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[23] + 16LL))(a1 + 23, v6);
      CClassicWindowManager::RemoveApplicationView(v19, v24, 1LL);
    }
  }
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v13;
}
