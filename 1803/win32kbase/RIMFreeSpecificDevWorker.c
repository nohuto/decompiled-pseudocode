/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C00F7A6C
 * Callers:
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00DD8B8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C00F2218 (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C000F2B8 (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00ED6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidDesc @ 0x1C00EF8B0 (RIMFreeHidDesc.c)
 *     RIMFreeHidTLCInfo @ 0x1C00F14D0 (RIMFreeHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00F3CA8 (RIMIDEFreeInjectedInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01061E8 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  RIMDeadzone **v9; // rdi
  __int64 v10; // rbp
  RIMDeadzone *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *(_QWORD *)(a2 + 216);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a2 + 320);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a2 + 1632);
  if ( v6 )
    Win32FreePool(v6);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v7 = *(_QWORD *)(a2 + 472);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 472)) )
        RIMFreeHidTLCInfo(*(_QWORD *)(a2 + 472));
    }
    if ( *(_QWORD *)(a2 + 464) )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v9 = (RIMDeadzone **)(a2 + 416);
          v10 = 5LL;
          do
          {
            v11 = *v9;
            if ( *v9 )
            {
              RIMDeadzone::Release(v11);
              v13 = (__int64)*v9;
              if ( *((_DWORD *)*v9 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
                v13 = (__int64)*v9;
              }
              Win32FreePool(v13);
              *v9 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v9;
            --v10;
          }
          while ( v10 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      {
        v14 = *(_QWORD **)(a2 + 488);
        --*(_BYTE *)(a1 + 832);
        v15 = v14[43];
        if ( v15 )
        {
          Win32FreePool(v15);
          v14[43] = 0LL;
        }
        v16 = v14[49];
        if ( v16 )
        {
          Win32FreePool(v16);
          v14[49] = 0LL;
        }
        v17 = v14[51];
        if ( v17 )
        {
          Win32FreePool(v17);
          v14[51] = 0LL;
        }
        v18 = v14[55];
        if ( v18 )
        {
          Win32FreePool(v18);
          v14[55] = 0LL;
        }
        Win32FreePool((__int64)v14);
        *(_QWORD *)(a2 + 488) = 0LL;
      }
      RIMFreeHidDesc(*(_QWORD *)(a2 + 464), a2);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 472) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464), a2);
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  v19 = *(_QWORD *)(a2 + 352);
  if ( v19 )
    Win32FreePool(v19);
  v20 = *(_QWORD *)(a2 + 376);
  if ( v20 )
    Win32FreePool(v20);
  return RIMIDEFreeInjectedInfo(a2);
}
