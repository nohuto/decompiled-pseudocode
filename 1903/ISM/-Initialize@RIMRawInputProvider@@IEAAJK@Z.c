/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800210A0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18000A14C (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180015018 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18001BF18 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D968 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PenIdentity@@@wil@@CAX_NW4ReportingK.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18001F524 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x1800201C0 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800203AC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800204A8 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ @ 0x180035318 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VSystemControlDeviceCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVSystemControlDeviceCollection@@XZ @ 0x180098D1C (--B-$ComPtrRef@V-$ComPtr@VSystemControlDeviceCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A1314 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A2A4C (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A398C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, __int16 a2)
{
  struct IMessageSession **v2; // r15
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  void **v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  int (*v12)(void *, unsigned int, void *); // r8
  __int64 v13; // rdx
  void **v14; // rbx
  __int64 v15; // rcx
  int (*v16)(void *, unsigned int, void *); // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  struct IRawInputClient *v19; // rbx
  struct MobileButtonDeviceCollection **v20; // rax
  int (*v21)(void *, unsigned int, void *); // r8
  struct IRawInputClient *v22; // rbx
  struct ConsumerControlDeviceCollection **v23; // rax
  int (*v24)(void *, unsigned int, void *); // r8
  struct IRawInputClient *v25; // rbx
  struct SystemControlDeviceCollection **v26; // rax
  int (*v27)(void *, unsigned int, void *); // r8
  struct IRawInputClient *v28; // rbx
  struct MobileButtonDeviceCollection **v29; // rax
  int (*v30)(void *, unsigned int, void *); // r8
  struct IRawInputClient *v31; // rbx
  struct ConsumerControlDeviceCollection **v32; // rax
  int (*v33)(void *, unsigned int, void *); // r8
  struct IRawInputClient *v34; // rbx
  struct SystemControlDeviceCollection **v35; // rax
  int (*v36)(void *, unsigned int, void *); // r8
  void **v37; // rbx
  __int64 v38; // rcx
  int (*v39)(void *, unsigned int, void *); // r8
  void **v40; // rbx
  __int64 v41; // rcx
  int (*v42)(void *, unsigned int, void *); // r8
  void **v43; // rbx
  __int64 v44; // rcx
  int (*v45)(void *, unsigned int, void *); // r8
  __int64 v46; // r8
  _QWORD v47[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *v49; // [rsp+A0h] [rbp+30h] BYREF
  char *v50; // [rsp+B0h] [rbp+40h] BYREF

  v49 = 0LL;
  v2 = (struct IMessageSession **)((char *)this + 32);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 32);
  v6 = CoreUICreate(v2);
  if ( v6 < 0 )
  {
    v7 = 84LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( (a2 & 0x400) != 0 )
  {
    v9 = (void **)((char *)this + 48);
    v10 = *((_QWORD *)this + 6);
    if ( v10 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = AugmentedInputDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            &v49,
            (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v11 < 0 )
    {
      v13 = 91LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v12, *v9);
    if ( v6 < 0 )
    {
      v7 = 96LL;
      goto LABEL_3;
    }
  }
  if ( (a2 & 0x2000) != 0 )
  {
    v14 = (void **)((char *)this + 56);
    v15 = *((_QWORD *)this + 7);
    if ( v15 )
    {
      *v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v11 = SpatialRimDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            *v2,
            &v49,
            (struct SpatialRimDeviceCollection **)this + 7);
    if ( v11 < 0 )
    {
      v13 = 106LL;
      goto LABEL_9;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v16, *v14);
    if ( v6 < 0 )
    {
      v7 = 111LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::__private_IsEnabled(v5) )
  {
    if ( (a2 & 0x80) != 0 )
    {
      if ( IsEdition(253345LL) )
      {
        v19 = (struct IRawInputClient *)*((_QWORD *)this + 3);
        v50 = (char *)this + 40;
        v20 = (struct MobileButtonDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
        v6 = MobileButtonDeviceCollection::Create(v19, this, &v49, v20);
        if ( v6 < 0 )
        {
          v7 = 132LL;
          goto LABEL_3;
        }
        v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v21, *((void **)this + 5));
        if ( v6 < 0 )
        {
          v7 = 137LL;
          goto LABEL_3;
        }
        v22 = (struct IRawInputClient *)*((_QWORD *)this + 3);
        v50 = (char *)this + 64;
        v23 = (struct ConsumerControlDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
        v6 = ConsumerControlDeviceCollection::Create(v22, this, &v49, v23);
        if ( v6 < 0 )
        {
          v7 = 143LL;
          goto LABEL_3;
        }
        v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v24, *((void **)this + 8));
        if ( v6 < 0 )
        {
          v7 = 148LL;
          goto LABEL_3;
        }
      }
      v25 = (struct IRawInputClient *)*((_QWORD *)this + 3);
      v50 = (char *)this + 72;
      v26 = (struct SystemControlDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
      v6 = SystemControlDeviceCollection::Create(v25, this, &v49, v26);
      if ( v6 < 0 )
      {
        v7 = 155LL;
        goto LABEL_3;
      }
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v27, *((void **)this + 9));
      if ( v6 < 0 )
      {
        v7 = 160LL;
        goto LABEL_3;
      }
    }
  }
  else if ( (a2 & 0x80) != 0 )
  {
    v28 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    v50 = (char *)this + 40;
    v29 = (struct MobileButtonDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
    v6 = MobileButtonDeviceCollection::Create(v28, this, &v49, v29);
    if ( v6 < 0 )
    {
      v7 = 178LL;
      goto LABEL_3;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v30, *((void **)this + 5));
    if ( v6 < 0 )
    {
      v7 = 183LL;
      goto LABEL_3;
    }
    v31 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    v50 = (char *)this + 64;
    v32 = (struct ConsumerControlDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
    v6 = ConsumerControlDeviceCollection::Create(v31, this, &v49, v32);
    if ( v6 < 0 )
    {
      v7 = 189LL;
      goto LABEL_3;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v33, *((void **)this + 8));
    if ( v6 < 0 )
    {
      v7 = 194LL;
      goto LABEL_3;
    }
    v34 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    v50 = (char *)this + 72;
    v35 = (struct SystemControlDeviceCollection **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(&v50);
    v6 = SystemControlDeviceCollection::Create(v34, this, &v49, v35);
    if ( v6 < 0 )
    {
      v7 = 200LL;
      goto LABEL_3;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v36, *((void **)this + 9));
    if ( v6 < 0 )
    {
      v7 = 205LL;
      goto LABEL_3;
    }
  }
  if ( (a2 & 0x800) != 0 )
  {
    v37 = (void **)((char *)this + 80);
    v38 = *((_QWORD *)this + 10);
    if ( v38 )
    {
      *v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v11 = HeatDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v49,
            (struct HeatDeviceCollection **)this + 10);
    if ( v11 < 0 )
    {
      v13 = 215LL;
      goto LABEL_9;
    }
    v11 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v37 + 48LL))(*v37, &v49);
    if ( v11 < 0 )
    {
      v13 = 222LL;
      goto LABEL_9;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v39, *v37);
    if ( v6 < 0 )
    {
      v7 = 227LL;
      goto LABEL_3;
    }
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v40 = (void **)((char *)this + 88);
    v41 = *((_QWORD *)this + 11);
    if ( v41 )
    {
      *v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v11 = GazeDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v49,
            (struct GazeDeviceCollection **)this + 11);
    if ( v11 < 0 )
    {
      v13 = 236LL;
      goto LABEL_9;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v42, *v40);
    if ( v6 < 0 )
    {
      v7 = 241LL;
      goto LABEL_3;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::ReportUsageToService(v17, 3u, v18);
  v43 = (void **)((char *)this + 96);
  v44 = *((_QWORD *)this + 12);
  if ( v44 )
  {
    *v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v11 = PenDeviceCollection::Create(
          *((struct IRawInputClient **)this + 3),
          this,
          &v49,
          (struct PenDeviceCollection **)this + 12);
  if ( v11 < 0 )
  {
    v13 = 250LL;
    goto LABEL_9;
  }
  v6 = RIMRawInputProvider::RegisterWaitHandler(this, v49, v45, *v43);
  if ( v6 < 0 )
  {
    v7 = 255LL;
    goto LABEL_3;
  }
  v47[1] = this;
  v47[0] = off_180174F10;
  v47[7] = v47;
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 13, v2, v46, (__int64)v47);
  return 0LL;
}
