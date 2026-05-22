/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18005C190 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18003D28C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exceptio.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18005C86C (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18005CBC8 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180061D7C (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800620A8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180064EB4 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180066C2C (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800676F8 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180067C8C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18006836C (-Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180068F14 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v4; // r13
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v10; // r14d
  __int64 v11; // rcx
  struct IRawInputClient *v12; // rbx
  HIDDeviceCollection *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r9d
  HIDDeviceCollection *v16; // rsi
  int v17; // eax
  int (*v18)(void *, unsigned int, void *); // r8
  __int64 v19; // rcx
  struct IMessageSession *v20; // r12
  struct IRawInputClient *v21; // rsi
  SpatialRimDeviceCollection *v22; // rax
  SpatialRimDeviceCollection *v23; // rbx
  SpatialRimDeviceCollection *v24; // rbx
  int v25; // eax
  int (*v26)(void *, unsigned int, void *); // r8
  void **v27; // rbx
  __int64 v28; // rcx
  int v29; // esi
  int (*v30)(void *, unsigned int, void *); // r8
  __int64 v31; // rdx
  void **v32; // rbx
  __int64 v33; // rcx
  int (*v34)(void *, unsigned int, void *); // r8
  void **v35; // rbx
  __int64 v36; // rcx
  int (*v37)(void *, unsigned int, void *); // r8
  void **v38; // rbx
  __int64 v39; // rcx
  int (*v40)(void *, unsigned int, void *); // r8
  void **v41; // rbx
  __int64 v42; // rcx
  int (*v43)(void *, unsigned int, void *); // r8
  _QWORD v44[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  SpatialRimDeviceCollection *v46; // [rsp+C0h] [rbp+40h] BYREF
  void *v47; // [rsp+D0h] [rbp+50h] BYREF
  SpatialRimDeviceCollection *v48; // [rsp+D8h] [rbp+58h]

  v47 = 0LL;
  v4 = (struct IMessageSession **)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = CoreUICreate(v4);
  if ( v6 < 0 )
  {
    v8 = 80LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = -2147024809;
  if ( (a2 & 0x400) != 0 )
  {
    v11 = *((_QWORD *)this + 6);
    if ( v11 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    v48 = 0LL;
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
        (const char *)0x80070057LL);
      v6 = -2147024809;
      goto LABEL_25;
    }
    v13 = (HIDDeviceCollection *)malloc(0xAD8uLL);
    v16 = v13;
    if ( v13 )
      memset_0(v13, 0, 0xAD8uLL);
    v46 = v16;
    if ( v16 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v16, v12);
      *(_QWORD *)v16 = &AugmentedInputDeviceCollection::`vftable';
      *((_QWORD *)v16 + 345) = 0LL;
      *((_QWORD *)v16 + 346) = 0LL;
      *((_QWORD *)v16 + 345) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buyheadnode();
    }
    else
    {
      v16 = 0LL;
    }
    v48 = v16;
    if ( !v16 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
        (const char *)0x8007000ELL);
LABEL_25:
      v8 = 87LL;
      goto LABEL_5;
    }
    LODWORD(v46) = 130986;
    v17 = HIDDeviceCollection::Initialize(v16, v14, (struct _RIM_USAGE_ANDPAGE *const)&v46, v15, 8u, &v47);
    v6 = v17;
    if ( v17 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
        (const char *)(unsigned int)v17);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
        (const char *)(unsigned int)v6);
      (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      goto LABEL_25;
    }
    *((_QWORD *)this + 6) = v16;
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v18, *((void **)this + 6));
    if ( v6 < 0 )
    {
      v8 = 92LL;
      goto LABEL_5;
    }
  }
  if ( (a2 & 0x2000) != 0 )
  {
    v19 = *((_QWORD *)this + 7);
    if ( v19 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = *v4;
    v21 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    v46 = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( !v21 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)0x80070057LL);
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v22 = (SpatialRimDeviceCollection *)malloc(0xB70uLL);
    v23 = v22;
    if ( v22 )
      memset_0(v22, 0, 0xB70uLL);
    v48 = v23;
    if ( v23 )
      v24 = SpatialRimDeviceCollection::SpatialRimDeviceCollection(v23, v21, this, v20);
    else
      v24 = 0LL;
    v46 = v24;
    if ( !v24 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)0x8007000ELL);
      v10 = -2147024882;
      goto LABEL_42;
    }
    v25 = SpatialRimDeviceCollection::Initialize(v24, &v47);
    v10 = v25;
    if ( v25 >= 0 )
    {
      *((_QWORD *)this + 7) = v24;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v25);
      (*(void (__fastcall **)(SpatialRimDeviceCollection *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
    }
    if ( v10 < 0 )
      goto LABEL_42;
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v26, *((void **)this + 7));
    if ( v6 < 0 )
    {
      v8 = 107LL;
      goto LABEL_5;
    }
  }
  if ( (a2 & 0x80u) != 0 )
  {
    v27 = (void **)((char *)this + 40);
    v28 = *((_QWORD *)this + 5);
    if ( v28 )
    {
      *v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = MobileButtonDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v47,
            (struct MobileButtonDeviceCollection **)this + 5);
    if ( v29 < 0 )
    {
      v31 = 123LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
        (const char *)(unsigned int)v29);
      return (unsigned int)v29;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v30, *v27);
    if ( v6 < 0 )
    {
      v8 = 128LL;
      goto LABEL_5;
    }
    v32 = (void **)((char *)this + 64);
    v33 = *((_QWORD *)this + 8);
    if ( v33 )
    {
      *v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v29 = ConsumerControlDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v47,
            (struct ConsumerControlDeviceCollection **)this + 8);
    if ( v29 < 0 )
    {
      v31 = 134LL;
      goto LABEL_50;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v34, *v32);
    if ( v6 < 0 )
    {
      v8 = 139LL;
      goto LABEL_5;
    }
  }
  if ( (a2 & 0x800) != 0 )
  {
    v35 = (void **)((char *)this + 80);
    v36 = *((_QWORD *)this + 10);
    if ( v36 )
    {
      *v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v29 = HeatDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v47,
            (struct HeatDeviceCollection **)this + 10);
    if ( v29 < 0 )
    {
      v31 = 148LL;
      goto LABEL_50;
    }
    v29 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v35 + 48LL))(*v35, &v47);
    if ( v29 < 0 )
    {
      v31 = 155LL;
      goto LABEL_50;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v37, *v35);
    if ( v6 < 0 )
    {
      v8 = 160LL;
      goto LABEL_5;
    }
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v38 = (void **)((char *)this + 88);
    v39 = *((_QWORD *)this + 11);
    if ( v39 )
    {
      *v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v29 = GazeDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v47,
            (struct GazeDeviceCollection **)this + 11);
    if ( v29 < 0 )
    {
      v31 = 169LL;
      goto LABEL_50;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v40, *v38);
    if ( v6 < 0 )
    {
      v8 = 174LL;
      goto LABEL_5;
    }
  }
  if ( (a2 & 0x100000) != 0 )
  {
    v41 = (void **)((char *)this + 72);
    v42 = *((_QWORD *)this + 9);
    if ( v42 )
    {
      *v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v29 = CameraControlDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v47,
            (struct CameraControlDeviceCollection **)this + 9);
    if ( v29 < 0 )
    {
      v31 = 182LL;
      goto LABEL_50;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v47, v43, *v41);
    if ( v6 < 0 )
    {
      v8 = 187LL;
      goto LABEL_5;
    }
  }
  v44[0] = off_18013BC88;
  v44[1] = this;
  v44[7] = v44;
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((char *)this + 96, v4, v7, v44);
  return 0LL;
}
