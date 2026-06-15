/*
 * XREFs of ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180113774
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x18011430C (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180115504 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801144E4 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWorkFifo::DelayWorkUntil(PTP_TIMER *this, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  double v7; // xmm1_8
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp+18h] BYREF
  _Mtx_t v14; // [rsp+68h] [rbp+20h]

  v14 = (_Mtx_t)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize((CWorkFifo *)this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        137LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v5);
      goto LABEL_11;
    }
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v7 = (double)(int)g_u64QPCFrequency;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v7 = v7 + 1.844674407370955e19;
    v8 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v7);
    if ( v8 < a2 )
    {
      PerformanceCount.QuadPart = v8 - a2;
      pftDueTime = (struct _FILETIME)(v8 - a2);
      *((_BYTE *)this + 137) = 1;
      SetThreadpoolTimer(this[1], &pftDueTime, 0, 0);
    }
  }
  v6 = 0;
LABEL_11:
  v9 = _Mtx_unlock(v14);
  if ( v9 )
    std::_Throw_C_error(v9);
  return v6;
}
