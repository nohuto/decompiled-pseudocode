/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x180145698
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x18007A330 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180145440 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??_GCConnection@@EEAAPEAXI@Z @ 0x1801454A0 (--_GCConnection@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x1801E0F28 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  if ( *((_BYTE *)this + 160) )
  {
    *((_BYTE *)this + 160) = 0;
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 12) + 8LL));
    WaitForSingleObject(*((HANDLE *)this + 21), 0xFFFFFFFF);
  }
  if ( _InterlockedExchangeAdd(&dword_180308278, 0xFFFFFFFF) == 1 )
    CDisplayManager::CheckInUse(this);
}
