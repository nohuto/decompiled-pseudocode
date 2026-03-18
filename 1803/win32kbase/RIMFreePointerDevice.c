/*
 * XREFs of RIMFreePointerDevice @ 0x1C00EBFB4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00ED6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMRemoveFromActiveDevices @ 0x1C00ED7BC (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0106C44 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  char v19; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v19);
  v5 = *(_QWORD **)(a1 + 416);
  while ( v5 != (_QWORD *)(a1 + 416) )
  {
    v6 = v5 - 103;
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
  v7 = *(_QWORD *)(a2 + 928);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(a2 + 928) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 840);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a2 + 840) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 304);
  if ( v9 )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported(v8, v5, v4) >= 0 )
      FreePointerDeviceCalData(v9);
    v10 = *(_QWORD *)(a2 + 304);
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported() >= 0 )
      FreePointerDeviceCalibrationInfo(v10);
    *(_QWORD *)(a2 + 304) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v5, v4);
  v12 = *(_QWORD *)(a2 + 672);
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 24) )
    {
      Win32FreePool(*(_QWORD *)(v12 + 24));
      *(_QWORD *)(*(_QWORD *)(a2 + 672) + 24LL) = 0LL;
      v12 = *(_QWORD *)(a2 + 672);
    }
    if ( *(_QWORD *)(v12 + 16) )
    {
      Win32FreePool(*(_QWORD *)(v12 + 16));
      *(_QWORD *)(*(_QWORD *)(a2 + 672) + 16LL) = 0LL;
      v12 = *(_QWORD *)(a2 + 672);
    }
    Win32FreePool(v12);
    *(_QWORD *)(a2 + 672) = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 288);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(a2 + 288) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 728);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(a2 + 728) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 276) & 0x1000) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 516);
    v16 = *(unsigned int *)(a2 + 680);
    if ( v15 < (unsigned int)v16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v11);
      v15 = *(_DWORD *)(a1 + 516);
      LODWORD(v16) = *(_DWORD *)(a2 + 680);
    }
    *(_DWORD *)(a1 + 516) = v15 - v16;
  }
  if ( *(_QWORD *)(a2 + 824) != a2 + 824 )
    __int2c();
  return Win32FreePool(a2);
}
