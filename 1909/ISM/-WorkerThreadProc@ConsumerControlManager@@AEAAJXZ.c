/*
 * XREFs of ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800AD660
 * Callers:
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800AD720 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800ABF58 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800AD210 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800B0A34 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlManager::WorkerThreadProc(ConsumerControlManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  ConsumerControlNexusDevice **i; // rbx
  ConsumerControlNexusDevice *v5; // rax
  ConsumerControlNexusDevice ***v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  while ( !*((_BYTE *)this + 104) )
  {
    SleepEx(0xFFFFFFFF, 1);
    if ( *((_BYTE *)this + 104) )
      break;
    v2 = ConsumerControlManager::ProcessAddRemoveDeviceCommands(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    for ( i = (ConsumerControlNexusDevice **)*((_QWORD *)this + 5);
          i != (ConsumerControlNexusDevice **)((char *)this + 40);
          i = (ConsumerControlNexusDevice **)*i )
    {
      if ( (int)ConsumerControlNexusDevice::ProcessInput(i[2]) < 0 )
      {
        v5 = *i;
        if ( *((ConsumerControlNexusDevice ***)*i + 1) != i || (v6 = (ConsumerControlNexusDevice ***)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = (ConsumerControlNexusDevice **)v5;
        *((_QWORD *)v5 + 1) = v6;
        --*((_QWORD *)this + 7);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)i);
      }
    }
  }
  return 0LL;
}
