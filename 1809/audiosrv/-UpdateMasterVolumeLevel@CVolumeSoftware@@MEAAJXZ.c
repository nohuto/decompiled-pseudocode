/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800B9B30
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C1E4 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     pow @ 0x1800616C4 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B6D8C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  float *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  float v7; // xmm1_4
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v11; // [rsp+50h] [rbp-10h]
  void *Block; // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 256);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 31) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 31));
    v3 = (float *)Block;
    if ( !Block )
    {
      v2 = -2147024882;
      free(0LL);
      Block = 0LL;
LABEL_10:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 2049, v2);
      goto LABEL_17;
    }
    v4 = 0LL;
    v5 = *((unsigned int *)this + 31);
    if ( (_DWORD)v5 )
    {
      do
      {
        v6 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
               (_QWORD *)this + 11,
               (unsigned int)v4);
        v7 = pow(10.0, *(float *)(v6 + 4) / 20.0);
        v3[v4] = v7;
        v4 = (unsigned int)(v4 + 1);
        v5 = *((unsigned int *)this + 31);
      }
      while ( (unsigned int)v4 < (unsigned int)v5 );
    }
    v13 = 50000LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 31) + 32LL))(
           *((_QWORD *)this + 31),
           v5,
           v3,
           0LL,
           1,
           &v13);
    v2 = v8;
    if ( v8 == -2147417848 || v8 == -2147023174 )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
      v2 = 0;
    }
    free(v3);
    Block = 0LL;
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      (__int64)&WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
      this);
  }
  *((_BYTE *)this + 300) = 1;
  Block = (void *)-10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, void **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 38),
      &Block,
      0LL,
      0);
LABEL_17:
  if ( v11 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v11 = 0;
  }
  return (unsigned int)v2;
}
