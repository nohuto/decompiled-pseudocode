/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026834
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180009740 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180025620 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x180029780 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180010678 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001831C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001AC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180036BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180037130 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        const unsigned __int16 *a2,
        struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rsi
  int v8; // r9d
  char v9; // bp
  void **v10; // r10
  unsigned __int16 *v11; // rcx
  int v12; // r8d
  int v13; // edx
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  _QWORD *v15; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // r8
  struct _RTL_CRITICAL_SECTION **v23; // rax
  volatile signed __int32 *v24; // rdx
  void *v26[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+40h] [rbp-48h]
  char *v28; // [rsp+48h] [rbp-40h]
  _QWORD *v29; // [rsp+50h] [rbp-38h]
  volatile signed __int32 *v30; // [rsp+A8h] [rbp+20h] BYREF

  v26[1] = (void *)-2LL;
  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v26,
    (__int64)a2);
  v7 = (__int64 *)((char *)this + 152);
  v8 = 0;
  v9 = 1;
  if ( *((int *)this + 42) <= 0 )
  {
LABEL_9:
    v8 = -1;
  }
  else
  {
    v10 = (void **)*v7;
    while ( 1 )
    {
      if ( !v26[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = (unsigned __int16 *)*v10;
      do
      {
        v12 = *(unsigned __int16 *)((char *)v11 + (char *)v26[0] - (char *)*v10);
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)this + 42) )
        goto LABEL_9;
    }
  }
  if ( v8 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)this + 42) )
    {
      ATL::_AtlRaiseException();
      JUMPOUT(0x180026B16LL);
    }
    v14 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)this + 20) + 8LL * v8);
  }
  v15 = (char *)v26[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
  if ( v14 )
    goto LABEL_34;
  ProcessHeap = GetProcessHeap();
  v17 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x2D0uLL);
  v14 = v17;
  if ( v17 )
  {
    v27 = v17;
    InitializeCriticalSectionEx(v17, 0, 0);
    `eh vector constructor iterator'(
      &v14[1],
      0x10uLL,
      0x15uLL,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    `eh vector constructor iterator'(
      &v14[9].OwningThread,
      0x10uLL,
      0x15uLL,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>,
      std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    v14[17].SpinCount = (ULONG_PTR)this + 280;
  }
  else
  {
    v14 = 0LL;
  }
  v27 = v14;
  if ( v14 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v30,
      (__int64)a2);
    v28 = (char *)this + 152;
    v18 = _o__recalloc(*v7, *((_DWORD *)this + 42) + 1, 8LL);
    if ( v18 )
    {
      *v7 = v18;
      v19 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) + 1, 8LL);
      v20 = v19;
      if ( v19 )
      {
        *((_QWORD *)this + 20) = v19;
        v21 = *((int *)this + 42);
        v22 = (_QWORD *)(*v7 + 8 * v21);
        v29 = v22;
        if ( v22 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v22,
            (const void **)&v30);
          v20 = *((_QWORD *)this + 20);
        }
        v23 = (struct _RTL_CRITICAL_SECTION **)(v20 + 8 * v21);
        if ( v23 )
          *v23 = v14;
        ++*((_DWORD *)this + 42);
        v9 = 0;
      }
    }
    v24 = v30 - 6;
    if ( _InterlockedExchangeAdd(v30 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 8LL))(*(_QWORD *)v24);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v14[9].OwningThread,
        0x10uLL,
        0x15uLL,
        std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      `eh vector destructor iterator'(
        &v14[1],
        0x10uLL,
        0x15uLL,
        std::list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      DeleteCriticalSection(v14);
      operator delete(v14, (const struct std::nothrow_t *)0x2D0);
      return v6;
    }
LABEL_34:
    *a3 = v14;
    return v6;
  }
  return (unsigned int)-2147024882;
}
