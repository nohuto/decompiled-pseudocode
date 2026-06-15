/*
 * XREFs of ?Shutdown@CEndpointCharacteristicsCache@@UEAAXXZ @ 0x18011A880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEndpointCharacteristicsCache::Shutdown(CEndpointCharacteristicsCache *this)
{
  struct _TP_WORK *v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 2);
  *((_BYTE *)this + 104) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)this + 2);
  v2 = (struct _TP_WORK *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = g_policyConfigInternal;
  g_policyConfigInternal = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
