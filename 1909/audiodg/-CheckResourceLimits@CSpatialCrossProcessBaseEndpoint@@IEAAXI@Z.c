/*
 * XREFs of ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B880
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005D130 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058DB4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A0C8 (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessBaseEndpoint::CheckResourceLimits(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned __int32 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // r8
  const GUID *v6; // r9
  signed __int64 v7; // rdx
  unsigned __int32 v8; // eax
  __int64 v9; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 352) & -(__int64)TryEnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352)));
  if ( v4 )
  {
    if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x40) != 0 )
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 112) + 8LL), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 112) + 16LL), 0LL, 0LL) <= v7 )
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 112) + 24LL), 0, 0);
        if ( a2 >= v8 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 112) + 28LL), v8);
          _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 112) + 72LL), 0xFFFFFFBF);
          CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
            (CSpatialCrossProcessBaseEndpoint *)((char *)this + 400),
            v8,
            v5,
            v6);
          v9 = *((_QWORD *)this + 49);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
        }
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
