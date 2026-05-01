/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180161558
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18000CDBC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18000F6F0 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1801403C4 (WPP_SF_qd.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18016D044 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // edx
  __int128 *v11; // r8
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __m128i v14; // xmm1
  __int64 v15; // rax
  int inserted; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  struct ITaskWindow *v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h]
  _OWORD *v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  _QWORD v28[2]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+9Ch] [rbp-6Ch]
  __int128 v31; // [rsp+A0h] [rbp-68h]
  __int128 v32; // [rsp+B0h] [rbp-58h]
  __int128 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+ECh] [rbp-1Ch]
  _OWORD v39[3]; // [rsp+F8h] [rbp-10h] BYREF

  v27 = -2LL;
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * *(_QWORD *)(a1 + 176) - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  v8 = 4;
  v9 = 0;
  if ( (unsigned int)(a3 - 1) > 2 )
    v8 = 0;
  if ( (*(_BYTE *)(a1 + 212) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || (v10 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v10 = 8;
  }
  v11 = (__int128 *)(a1 + 16);
  v12 = *(_OWORD *)(a1 + 76);
  v39[0] = v12;
  v13 = *(_OWORD *)(a1 + 92);
  v39[1] = v13;
  v14 = *(__m128i *)(a1 + 108);
  v39[2] = v14;
  v20 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a1 + 160);
    LODWORD(v24[0]) = (v10 == 0) | v8;
    v24[1] = a1 + 16;
    v24[2] = (v15 + 112) & -(__int64)(v15 != 0);
    LODWORD(v25) = v10;
    v26 = v39;
    inserted = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int128 *))(*(_QWORD *)a4 + 200LL))(a4, v24, v11);
    if ( inserted < 0 )
      goto LABEL_20;
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)&v20, a4);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 160);
    v28[0] = 0LL;
    v28[1] = a2;
    v29 = 1;
    v30 = 1;
    v31 = *v11;
    v32 = v12;
    v33 = v13;
    v34 = v14.m128i_i64[0];
    v35 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
    v36 = (v17 + 112) & -(__int64)(v17 != 0);
    v37 = 0;
    v38 = v10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    v23 = v28;
    v20 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
                 &v21,
                 &v23);
    if ( inserted >= 0 )
      inserted = (**v21)(v21, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  }
  if ( inserted >= 0 )
  {
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CSplashScreen **)a1,
                 v20,
                 *(_QWORD *)(a1 + 176));
    if ( inserted >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        LOBYTE(v9) = a3 != 1;
        (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v20 + 160LL))(v20, v9);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v18 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 32LL))(v20);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x12u,
            &WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
            v18,
            v9);
        }
      }
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return (unsigned int)inserted;
}
