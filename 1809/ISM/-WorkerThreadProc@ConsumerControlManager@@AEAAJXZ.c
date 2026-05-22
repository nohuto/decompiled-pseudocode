/*
 * XREFs of ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x180072B94
 * Callers:
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x180072B30 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x180072C58 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x180077D40 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlManager::WorkerThreadProc(ConsumerControlManager *this)
{
  bool i; // zf
  int v3; // eax
  unsigned int v4; // ebx
  ConsumerControlNexusDevice **j; // rbx
  ConsumerControlNexusDevice *v6; // rax
  ConsumerControlNexusDevice ***v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *((_BYTE *)this + 104) == 0; i; i = *((_BYTE *)this + 104) == 0 )
  {
    SleepEx(0xFFFFFFFF, 1);
    if ( *((_BYTE *)this + 104) )
      break;
    v3 = ConsumerControlManager::ProcessAddRemoveDeviceCommands(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    for ( j = (ConsumerControlNexusDevice **)*((_QWORD *)this + 5);
          j != (ConsumerControlNexusDevice **)((char *)this + 40);
          j = (ConsumerControlNexusDevice **)*j )
    {
      if ( (int)ConsumerControlNexusDevice::ProcessInput(j[2]) < 0 )
      {
        v6 = *j;
        if ( *((ConsumerControlNexusDevice ***)*j + 1) != j || (v7 = (ConsumerControlNexusDevice ***)j[1], *v7 != j) )
          __fastfail(3u);
        *v7 = (ConsumerControlNexusDevice **)v6;
        *((_QWORD *)v6 + 1) = v7;
        --*((_QWORD *)this + 7);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)j);
      }
    }
  }
  return 0LL;
}
