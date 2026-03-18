/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0149910
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C011AB10 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00A0EA0 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C0135CE8 (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C0135E3C (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C014897C (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(__int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // edi
  int ReferencedRimObj; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v16[9]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+F0h] [rbp-10h] BYREF

  v4 = a1;
  if ( (unsigned int)a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v15[0] = 0x1000000LL;
  v15[1] = &v17;
  Handle = (HANDLE)-1LL;
  v14 = -1LL;
  memset(v16, 0, sizeof(v16));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath();
  if ( ReferencedRimObj >= 0 )
  {
    v7 = rimInputTypeFromDeviceTypeAndUsages(v4, 0, 0);
    v9 = v7 - 1;
    if ( (unsigned int)v9 > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v6, v8);
    ReferencedRimObj = rimFindReferencedRimObj(v7, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v16[0]) &= 0xFFFFFFF8;
        *(_QWORD *)&v16[5] = 0LL;
        DWORD2(v16[5]) = 0;
        *(_QWORD *)((char *)&v16[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v10) + 872);
        HIDWORD(v16[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v16[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, (__int64)v15, v4, v16, 0, &v14);
        if ( ReferencedRimObj >= 0 )
          *a2 = v14;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
