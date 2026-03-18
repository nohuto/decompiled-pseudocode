/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x18016B8D8
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800E54A0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180156F80 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@MEAA@XZ @ 0x18016B828 (--1CConnection@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x18015A614 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this, unsigned int a2)
{
  void *v3; // rax

  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    v3 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    SetEvent(v3);
    WaitForSingleObject(*((HANDLE *)this + 3), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_18033CC20, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this, a2);
}
