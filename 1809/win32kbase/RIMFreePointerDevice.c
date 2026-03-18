/*
 * XREFs of RIMFreePointerDevice @ 0x1C0116B48
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0118A5C (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0118B60 (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C012EB18 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v19);
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 107;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v18 = (_QWORD *)v4[1], (_QWORD *)*v18 != v4) )
        __fastfail(3u);
      *v18 = v5;
      v5[1] = v18;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(_QWORD *)(a2 + 960);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(a2 + 960) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 872);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a2 + 872) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 336);
  if ( v9 )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported(v8, v5, v4) >= 0 )
      FreePointerDeviceCalData(v9);
    v10 = *(_QWORD *)(a2 + 336);
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported() >= 0 )
      FreePointerDeviceCalibrationInfo(v10);
    *(_QWORD *)(a2 + 336) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v5, v4);
  v13 = *(_QWORD *)(a2 + 704);
  if ( v13 )
  {
    if ( *(_QWORD *)(v13 + 24) )
    {
      Win32FreePool(*(_QWORD *)(v13 + 24));
      *(_QWORD *)(*(_QWORD *)(a2 + 704) + 24LL) = 0LL;
      v13 = *(_QWORD *)(a2 + 704);
    }
    if ( *(_QWORD *)(v13 + 16) )
    {
      Win32FreePool(*(_QWORD *)(v13 + 16));
      *(_QWORD *)(*(_QWORD *)(a2 + 704) + 16LL) = 0LL;
      v13 = *(_QWORD *)(a2 + 704);
    }
    Win32FreePool(v13);
    *(_QWORD *)(a2 + 704) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 320);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(a2 + 320) = 0LL;
  }
  v15 = *(_QWORD *)(a2 + 760);
  if ( v15 )
  {
    Win32FreePool(v15);
    *(_QWORD *)(a2 + 760) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 308) & 0x1000) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 532);
    v17 = *(unsigned int *)(a2 + 712);
    if ( v16 < (unsigned int)v17 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v11, v12);
      v16 = *(_DWORD *)(a1 + 532);
      LODWORD(v17) = *(_DWORD *)(a2 + 712);
    }
    *(_DWORD *)(a1 + 532) = v16 - v17;
  }
  if ( *(_QWORD *)(a2 + 856) != a2 + 856 )
    __int2c();
  Win32FreePool(a2);
}
