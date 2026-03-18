/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00F39F8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00B8190 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B8340 (NtUserInjectMouseInput.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00DEBE0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00DFD50 (RIMAddInjectionDeviceOfType.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00F21B0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C00F2BC8 (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(__int64 a1, __int64 *a2)
{
  unsigned int v3; // esi
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int ReferencedRimObj; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING v11; // [rsp+38h] [rbp-61h] BYREF
  __int128 v12[9]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1;
  v4 = 1;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    }
    v4 = 2;
  }
  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  Handle = (HANDLE)-1LL;
  v10 = -1LL;
  memset(v12, 0, sizeof(v12));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(v3, 0, 0, (__int64)&v11);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = rimFindReferencedRimObj(v4, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        *(_QWORD *)&v12[0] = 0LL;
        *((_QWORD *)&v12[0] + 1) &= 0xFFFFFFF800000000uLL;
        *(_QWORD *)&v12[5] = 0LL;
        DWORD2(v12[5]) = 0;
        *(_QWORD *)((char *)&v12[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v8) + 872);
        HIDWORD(v12[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v12[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v11, v3, v12, 0, (ULONG64)&v10);
        if ( ReferencedRimObj >= 0 )
          *a2 = v10;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
