/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C006EC88
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7BA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     RIMHidTLCActive @ 0x1C006C938 (RIMHidTLCActive.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C006EDAC (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1C007189C (RIMFreeHidDesc.c)
 *     RIMFreeHidTLCInfo @ 0x1C0071A30 (RIMFreeHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C01411F8 (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C015AEE4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  RIMDeadzone **v14; // rdi
  __int64 v15; // rsi
  RIMDeadzone *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(_QWORD *)(a2 + 216);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a2 + 320);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a2 + 2112);
  if ( v7 )
    Win32FreePool(v7);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v8 = *(_QWORD *)(a2 + 472);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 472)) )
        RIMFreeHidTLCInfo(*(_QWORD *)(a2 + 472));
    }
    v9 = *(_QWORD *)(a2 + 464);
    if ( v9 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v14 = (RIMDeadzone **)(a2 + 416);
          v15 = 5LL;
          do
          {
            v16 = *v14;
            if ( *v14 )
            {
              RIMDeadzone::Release(v16);
              v19 = (__int64)*v14;
              if ( *((_DWORD *)*v14 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v17, v18);
                v19 = (__int64)*v14;
              }
              Win32FreePool(v19);
              *v14 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v14;
            --v15;
          }
          while ( v15 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
        v9 = *(_QWORD *)(a2 + 464);
      }
      RIMFreeHidDesc(v9);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 472) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464));
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 352);
  if ( v10 )
    Win32FreePool(v10);
  v11 = *(_QWORD *)(a2 + 376);
  if ( v11 )
    Win32FreePool(v11);
  return RIMIDEFreeInjectedInfo(a2);
}
