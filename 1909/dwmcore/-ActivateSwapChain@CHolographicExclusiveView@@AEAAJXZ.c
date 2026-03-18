/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x180243448
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180243518 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802437E0 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 74) && !*((_BYTE *)this + 73) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v3 )
      v3 = (_QWORD *)v3[11];
    if ( v3 )
    {
      *((_QWORD *)this + 17) = v3[4];
      *((_QWORD *)this + 15) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v3 + 256LL))(v3, &v9);
      v5 = NtSetCompositionSurfaceAnalogExclusive(*((_QWORD *)this + 17), 1LL);
      if ( v5 >= 0 )
      {
        v6 = CHolographicExclusiveView::OpenSurfaceHandles(this);
        v1 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x14Bu, 0LL);
        else
          *((_BYTE *)this + 72) = 1;
      }
      else
      {
        v1 = v5 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0x14Au, 0LL);
      }
    }
  }
  return v1;
}
