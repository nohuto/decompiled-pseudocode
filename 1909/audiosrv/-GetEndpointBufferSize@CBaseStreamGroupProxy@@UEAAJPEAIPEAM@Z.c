/*
 * XREFs of ?GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z @ 0x1800EECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetEndpointBufferSize(
        CBaseStreamGroupProxy *this,
        unsigned int *a2,
        float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // edi
  __int64 v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, &v10);
    if ( v7 >= 0 && v10 )
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v10 + 40LL))(v10, a2, a3);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
    if ( v7 < 0 )
      AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::GetEndpointBufferSize", 766, v7);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
