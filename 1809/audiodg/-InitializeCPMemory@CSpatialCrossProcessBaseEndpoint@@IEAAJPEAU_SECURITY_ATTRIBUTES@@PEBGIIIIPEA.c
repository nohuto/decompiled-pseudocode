/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005E7E8
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140030368 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140058F60 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005AEE4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005D010 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005D158 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005D488 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005DC64 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005E0EC (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct _SECURITY_ATTRIBUTES *a2,
        size_t *a3,
        int a4,
        unsigned int a5,
        DWORD dwDesiredAccess,
        BOOL a7,
        void **lpTargetHandle)
{
  unsigned int v10; // edi
  unsigned int v11; // r15d
  LPSECURITY_ATTRIBUTES v12; // r11
  HANDLE FileMappingW; // rax
  signed int LastError; // eax
  int v15; // esi
  PVOID *v16; // r14
  unsigned __int8 *v17; // rbx
  void *v18; // rcx
  SpatialBlock *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  volatile __int32 *v22; // rcx
  __int64 *v23; // rax
  std::_Ref_count_base *v24; // rbx
  unsigned __int16 *v25; // rdx
  void *v26; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v28; // rax
  signed int v29; // eax
  void *v30; // rcx
  SpatialBlock *v32; // [rsp+50h] [rbp-48h] BYREF
  std::_Ref_count_base *v33; // [rsp+58h] [rbp-40h]
  unsigned int MemoryRequirement; // [rsp+A0h] [rbp+8h]

  v10 = a4 + a5;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(*((_DWORD *)this + 37), dwDesiredAccess, a7, a4 + a5);
  v11 = MemoryRequirement + 832;
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12, 4u, 0, MemoryRequirement + 832, 0LL);
  *((_QWORD *)this + 111) = FileMappingW;
  if ( !FileMappingW )
  {
    LastError = GetLastError();
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_29;
  }
  if ( GetLastError() == 183 )
  {
    v15 = -2147024713;
  }
  else
  {
    v16 = (PVOID *)((char *)this + 880);
    v15 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(
            (_QWORD *)this + 110,
            *((void **)this + 111),
            v11);
    if ( v15 >= 0 )
    {
      v17 = (unsigned __int8 *)*v16;
      v18 = (void *)*((_QWORD *)this + 112);
      if ( v18 )
        operator delete(v18);
      *((_QWORD *)this + 112) = 0LL;
      v19 = (SpatialBlock *)operator new(0x38uLL);
      v32 = v19;
      if ( v19 )
      {
        *(_QWORD *)v19 = 0LL;
        v20 = 2LL;
        v21 = (_QWORD *)((char *)v19 + 8);
        do
        {
          *v21 = 0LL;
          v21[1] = 0LL;
          v21[2] = 0LL;
          v21 += 3;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v19 = 0LL;
      }
      *((_QWORD *)this + 112) = v19;
      if ( !v19 )
        goto LABEL_15;
      v15 = SpatialBlock::Create(v19, v17 + 832, MemoryRequirement, *((_DWORD *)this + 37), dwDesiredAccess, a7, v10);
      if ( v15 < 0 )
        goto LABEL_30;
      *(_DWORD *)*v16 = 806;
      *((_DWORD *)*v16 + 1) = 1396785988;
      v22 = (volatile __int32 *)((char *)*v16 + 48);
      *((_QWORD *)this + 38) = v22;
      _InterlockedExchange(v22, 6);
      v23 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
              &v32,
              (__int64)*v16 + 84);
      std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
        (_QWORD *)this + 39,
        v23);
      v24 = v33;
      if ( v33 && _InterlockedExchangeAdd((volatile signed __int32 *)v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(std::_Ref_count_base *))v24)(v24);
        std::_Ref_count_base::_Decwref(v24);
      }
      if ( *((_QWORD *)this + 39) )
      {
        v25 = (unsigned __int16 *)*((_QWORD *)this + 19);
        if ( v25[8] <= 0x100u )
        {
          memcpy_0((char *)*v16 + 532, v25, v25[8] + 18LL);
          *((_DWORD *)*v16 + 129) = *((_DWORD *)this + 19);
          *((_DWORD *)*v16 + 130) = a4;
          *((_DWORD *)*v16 + 131) = a5;
          *((_DWORD *)*v16 + 132) = v11;
          if ( !a3 || (v15 = StringCchCopyW((unsigned __int16 *)*v16 + 194, 0x40uLL, a3), v15 >= 0) )
          {
            v26 = (void *)*((_QWORD *)this + 111);
            CurrentProcess = GetCurrentProcess();
            v28 = GetCurrentProcess();
            if ( !DuplicateHandle(v28, v26, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
            {
              v29 = GetLastError();
              v15 = v29;
              if ( v29 > 0 )
                v15 = (unsigned __int16)v29 | 0x80070000;
            }
            WerRegisterMemoryBlock(*v16, v11);
LABEL_29:
            if ( v15 >= 0 )
              return (unsigned int)v15;
          }
        }
        else
        {
          v15 = -2147024809;
        }
      }
      else
      {
LABEL_15:
        v15 = -2147024882;
      }
    }
  }
LABEL_30:
  v30 = (void *)*((_QWORD *)this + 112);
  if ( v30 )
    operator delete(v30);
  *((_QWORD *)this + 112) = 0LL;
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)this + 110, v11);
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::InitializeCPMemory", 126, v15);
  return (unsigned int)v15;
}
