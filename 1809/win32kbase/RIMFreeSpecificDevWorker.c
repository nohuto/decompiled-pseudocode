/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C0121FA0
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RawInputManagerObjectDelete @ 0x1C00866A4 (RawInputManagerObjectDelete.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     RIMHidTLCActive @ 0x1C0051510 (RIMHidTLCActive.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00910B0 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00948C0 (RIMFreeHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0118A5C (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C012DEF4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  RIMDeadzone **v11; // rdi
  __int64 v12; // rsi
  RIMDeadzone *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

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
  v7 = *(_QWORD *)(a2 + 1984);
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
    v10 = *(_QWORD *)(a2 + 464);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v11 = (RIMDeadzone **)(a2 + 416);
          v12 = 5LL;
          do
          {
            v13 = *v11;
            if ( *v11 )
            {
              RIMDeadzone::Release(v13);
              v16 = (__int64)*v11;
              if ( *((_DWORD *)*v11 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v15);
                v16 = (__int64)*v11;
              }
              Win32FreePool(v16);
              *v11 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v11;
            --v12;
          }
          while ( v12 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, a2, a3);
        }
        RIMReleasePointerDeviceInfo(a1, a2, a3);
        v10 = *(_QWORD *)(a2 + 464);
      }
      RIMFreeHidDesc(v10, a2, a3);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  v17 = *(_BYTE *)(a2 + 48);
  if ( v17 == 3 )
  {
    if ( !*(_QWORD *)(a2 + 472) )
      goto LABEL_35;
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464), a2, a3);
    v17 = *(_BYTE *)(a2 + 48);
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  if ( !v17 )
  {
    v18 = *(_QWORD *)(a2 + 760);
    if ( v18 )
    {
      Win32FreePool(v18);
      *(_QWORD *)(a2 + 760) = 0LL;
      *(_WORD *)(a2 + 754) = 0;
    }
  }
LABEL_35:
  v19 = *(_QWORD *)(a2 + 352);
  if ( v19 )
    Win32FreePool(v19);
  v20 = *(_QWORD *)(a2 + 376);
  if ( v20 )
    Win32FreePool(v20);
  RIMIDEFreeInjectedInfo(a2);
}
