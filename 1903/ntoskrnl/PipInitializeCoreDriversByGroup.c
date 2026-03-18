/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x140A0FED8
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140A0FDEC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407645E0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076460C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rax
  UNICODE_STRING **v5; // rdi
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // r14
  int DriverNameFromKeyNode; // esi
  __int64 v9; // r15
  void *v10; // rcx
  ULONG v11; // r8d
  char v12; // r9
  HANDLE KeyHandle; // [rsp+20h] [rbp-40h]
  _DWORD *P; // [rsp+30h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 96LL;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v4 = 112LL;
    }
  }
  else
  {
    v4 = 80LL;
  }
  v5 = (UNICODE_STRING **)(v4 + a2);
  if ( v4 + a2 )
  {
    v6 = *v5;
    PnpCoreDriverGroupLoadPhase = a1;
    while ( v6 != (UNICODE_STRING *)v5 )
    {
      v7 = v6;
      v6 = *(UNICODE_STRING **)&v6->Length;
      if ( SLODWORD(v7[3].Buffer) >= 0 )
      {
        Destination.Buffer = 0LL;
        Handle = 0LL;
        DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v7 + 2, 0x20019u);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                      (unsigned int)&Destination,
                                      (int)v7 + 32,
                                      *(_QWORD *)(*(_QWORD *)&v7[3].Length + 56LL),
                                      *(_QWORD *)&v7[3].Length,
                                      a2 + 16,
                                      0,
                                      v2);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v9 = v17;
              if ( v17 )
              {
                PnpLockDeviceActionQueue();
                PipApplyFunctionToServiceInstances(
                  v10,
                  (UNICODE_STRING *)(*(_QWORD *)(v9 + 48) + 24LL),
                  v11,
                  v12,
                  KeyHandle,
                  v9,
                  P);
                PnpUnlockDeviceActionQueue();
                PnpWaitForEmptyDeviceActionQueue();
                PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
                if ( PnpWaitForEmptyDeviceEventQueue() < 0 && HeadlessGlobals && HeadlessGlobals[1] )
                  HdlspKernelAddLogEntry(0x12u, 0LL);
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( Destination.Buffer )
          ExFreePoolWithTag(Destination.Buffer, 0);
        if ( DriverNameFromKeyNode < 0 )
          *(_DWORD *)(*(_QWORD *)&v7[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
