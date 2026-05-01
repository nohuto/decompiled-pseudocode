/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011A1F8
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180046480 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800FAFA4 (WPP_SF_qd.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180124654 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // edx
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __m128i v13; // xmm1
  __int64 v14; // r8
  int inserted; // esi
  __int64 v16; // rax
  struct ITaskWindow *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  _OWORD *v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  _QWORD v26[2]; // [rsp+88h] [rbp-80h] BYREF
  int v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+9Ch] [rbp-6Ch]
  __int128 v29; // [rsp+A0h] [rbp-68h]
  __int128 v30; // [rsp+B0h] [rbp-58h]
  __int128 v31; // [rsp+C0h] [rbp-48h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+ECh] [rbp-1Ch]
  _OWORD v37[3]; // [rsp+F8h] [rbp-10h] BYREF

  v25 = -2LL;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * *(_QWORD *)(a1 + 176) - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  v8 = 0;
  v9 = 4;
  if ( (unsigned int)(a3 - 1) > 2 )
    v9 = 0;
  if ( (*(_BYTE *)(a1 + 212) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || (v10 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v10 = 8;
  }
  v11 = *(_OWORD *)(a1 + 76);
  v37[0] = v11;
  v12 = *(_OWORD *)(a1 + 92);
  v37[1] = v12;
  v13 = *(__m128i *)(a1 + 108);
  v37[2] = v13;
  v18 = 0LL;
  v14 = *(_QWORD *)(a1 + 160);
  if ( a4 )
  {
    LODWORD(v22[0]) = v9 | (v10 == 0);
    v22[1] = a1 + 16;
    v22[2] = (v14 + 112) & -(__int64)(v14 != 0);
    LODWORD(v23) = v10;
    v24 = v37;
    inserted = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a4 + 200LL))(a4, v22);
    if ( inserted < 0 )
      goto LABEL_20;
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v18, a4);
  }
  else
  {
    v26[0] = 0LL;
    v26[1] = a2;
    v27 = 1;
    v28 = 1;
    v29 = *(_OWORD *)(a1 + 16);
    v30 = v11;
    v31 = v12;
    v32 = v13.m128i_i64[0];
    v33 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    v34 = (v14 + 112) & -(__int64)(v14 != 0);
    v35 = 0;
    v36 = v10;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    v21 = v26;
    v18 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
                 &v19,
                 &v21);
    if ( inserted >= 0 )
      inserted = (**v19)(v19, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
  if ( inserted >= 0 )
  {
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CImmersiveApp::CImmersiveWindowCollection *)a1,
                 v18,
                 *(_QWORD *)(a1 + 176));
    if ( inserted >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        LOBYTE(v8) = a3 != 1;
        (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v18 + 160LL))(v18, v8);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v16 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v18 + 32LL))(v18);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x12u,
            &WPP_3d345533ad1632fc07820b100fc427c3_Traceguids,
            v16,
            v8);
        }
      }
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)inserted;
}
