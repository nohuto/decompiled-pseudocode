/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x18016A1E8
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800E6350 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801558A0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@MEAA@XZ @ 0x18016A138 (--1CConnection@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180158F34 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  void *v2; // rax

  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    v2 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    SetEvent(v2);
    WaitForSingleObject(*((HANDLE *)this + 3), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_180339D10, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this);
}
