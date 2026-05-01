/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180045DB8
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180045AD8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x180045D64 (-PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180045F1C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180046480 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  struct ITaskWindow *v3; // rsi
  __int64 v6; // rbx
  int inserted; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __m128i v11; // xmm2
  struct ITaskWindow *v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+48h] [rbp-41h] BYREF
  int v14; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-31h] BYREF
  struct ITaskWindow *v16; // [rsp+60h] [rbp-29h] BYREF
  __int64 v17; // [rsp+68h] [rbp-21h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v20; // [rsp+88h] [rbp-1h] BYREF
  __int128 v21; // [rsp+98h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  int v23; // [rsp+B0h] [rbp+27h]

  v19[1] = -2LL;
  v3 = a3;
  v12 = 0LL;
  if ( a3 )
  {
    v9 = *((_QWORD *)this + 20);
    LODWORD(v20) = 2;
    *((_QWORD *)&v20 + 1) = 0LL;
    *(_QWORD *)&v21 = (v9 + 112) & -(__int64)(v9 != 0);
    DWORD2(v21) = 0;
    v22 = 0LL;
    inserted = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v20);
    if ( inserted < 0 )
      goto LABEL_9;
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v12, (__int64)v3);
  }
  else
  {
    if ( *((_DWORD *)this + 4) <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7) )
    {
      v3 = (CImmersiveApp::CImmersiveWindowCollection *)((char *)this + 16);
      v10 = *(_OWORD *)((char *)this + 92);
      v11 = *(__m128i *)((char *)this + 108);
      v20 = *(_OWORD *)((char *)this + 76);
      v21 = v10;
      v22 = v11.m128i_i64[0];
      v23 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    }
    v6 = *((_QWORD *)this + 20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v15 = (unsigned __int64)&v20 & -(__int64)(v3 != 0LL);
    v16 = v3;
    v17 = (v6 + 112) & -(__int64)(v6 != 0);
    v14 = 1;
    v18 = a2;
    v19[0] = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
                 (unsigned int)&v13,
                 (unsigned int)v19,
                 (unsigned int)&v18,
                 (unsigned int)&v14,
                 (__int64)&v17,
                 (__int64)&v16,
                 (__int64)&v15);
    if ( inserted >= 0 )
      inserted = (**v13)(v13, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  if ( inserted >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(this, v12);
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(this, v12, 0LL);
    if ( inserted >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v12);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)inserted;
}
