/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C778
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F000 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x140001D28 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400286A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058F54 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005ADC8 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14005AFA0 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B2F0 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14005B368 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005BBE0 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005BCB4 (-EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005C09C (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemoryManager *a2,
        size_t *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct ICrossProcessMemory **a8)
{
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  DWORD v12; // r14d
  __int64 v13; // r11
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rdx
  PVOID *v18; // rsi
  int v19; // eax
  unsigned __int8 *v20; // rdi
  void *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  volatile __int32 *v25; // rcx
  __int64 *v26; // rax
  std::_Ref_count_base *v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int16 *v30; // rdx
  int v31; // eax
  void *v32; // rax
  std::_Ref_count_base *v33; // rbx
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v38; // [rsp+68h] [rbp-18h] BYREF
  std::_Ref_count_base *v39; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  DWORD v41; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int MemoryRequirement; // [rsp+C8h] [rbp+48h]
  int v43; // [rsp+D8h] [rbp+58h]

  v43 = a4;
  Block[1] = (void *)-2LL;
  v10 = a4 + a5;
  v11 = a7;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(*((_DWORD *)this + 43), a6, a7, a4 + a5);
  v12 = MemoryRequirement + 832;
  v35 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(
          v13,
          MemoryRequirement + 832,
          &v35);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = (unsigned int)v14;
    v17 = 67LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)v16);
    goto LABEL_32;
  }
  v18 = (PVOID *)((char *)this + 896);
  v19 = (*(__int64 (__fastcall **)(__int64, DWORD *, char *))(*(_QWORD *)v35 + 32LL))(v35, &v41, (char *)this + 896);
  v15 = v19;
  if ( v19 < 0 )
  {
    v16 = (unsigned int)v19;
    v17 = 71LL;
    goto LABEL_7;
  }
  if ( v41 < v12 )
  {
    v15 = -2147024882;
    v16 = 2147942414LL;
    v17 = 72LL;
    goto LABEL_7;
  }
  v20 = (unsigned __int8 *)*v18;
  v21 = (void *)*((_QWORD *)this + 113);
  if ( v21 )
    operator delete(v21);
  *((_QWORD *)this + 113) = 0LL;
  std::make_unique<SpatialBlock,,0>(Block);
  if ( Block[0] )
  {
    v24 = SpatialBlock::Create(
            (SpatialBlock *)Block[0],
            v20 + 832,
            MemoryRequirement,
            *((_DWORD *)this + 43),
            a6,
            v11,
            v10);
    v15 = v24;
    if ( v24 < 0 )
    {
      v22 = (unsigned int)v24;
      v23 = 82LL;
      goto LABEL_14;
    }
    *(_DWORD *)*v18 = 806;
    *((_DWORD *)*v18 + 1) = 1396785988;
    v25 = (volatile __int32 *)((char *)*v18 + 48);
    *((_QWORD *)this + 41) = v25;
    _InterlockedExchange(v25, 6);
    *(_OWORD *)v37 = 0LL;
    v26 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
            &v38,
            (__int64)*v18 + 84);
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(v37, v26);
    v27 = v39;
    if ( v39 && _InterlockedExchangeAdd((volatile signed __int32 *)v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(std::_Ref_count_base *))v27)(v27);
      std::_Ref_count_base::_Decwref(v27);
    }
    if ( v37[0] )
    {
      v30 = (unsigned __int16 *)*((_QWORD *)this + 22);
      if ( v30[8] <= 0x100u )
      {
        memcpy_0((char *)*v18 + 532, v30, v30[8] + 18LL);
        *((_DWORD *)*v18 + 129) = *((_DWORD *)this + 25);
        *((_DWORD *)*v18 + 130) = v43;
        *((_DWORD *)*v18 + 131) = a5;
        *((_DWORD *)*v18 + 132) = v12;
        CSpatialCrossProcessBaseEndpoint::EraseHandleServerPortName(this);
        if ( !a3 || (v31 = StringCchCopyW((unsigned __int16 *)*v18 + 194, 0x40uLL, a3), v15 = v31, v31 >= 0) )
        {
          WerRegisterMemoryBlock(*v18, v12);
          wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 11, v35);
          v32 = Block[0];
          Block[0] = 0LL;
          *((_QWORD *)this + 113) = v32;
          std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 42, v37);
          wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v35, a8);
          v15 = 0;
          goto LABEL_27;
        }
        v28 = (unsigned int)v31;
        v29 = 109LL;
      }
      else
      {
        v15 = -2147024809;
        v28 = 2147942487LL;
        v29 = 97LL;
      }
    }
    else
    {
      v15 = -2147024882;
      v28 = 2147942414LL;
      v29 = 94LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)v28);
LABEL_27:
    if ( v37[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v37[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v33 = v37[1];
      (**(void (__fastcall ***)(std::_Ref_count_base *))v37[1])(v37[1]);
      std::_Ref_count_base::_Decwref(v33);
    }
    goto LABEL_30;
  }
  v15 = -2147024882;
  v22 = 2147942414LL;
  v23 = 79LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
    (const char *)v22);
LABEL_30:
  if ( Block[0] )
    operator delete(Block[0]);
LABEL_32:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v35);
  return v15;
}
