/*
 * XREFs of PipInitializeEarlyLaunchDrivers @ 0x1409CD2D4
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1409CB89C (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     SeRegisterElamCertResources @ 0x14073D784 (SeRegisterElamCertResources.c)
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeEarlyLaunchDrivers(UNICODE_STRING *a1, __int64 a2)
{
  UNICODE_STRING *v2; // rsi
  UNICODE_STRING *v4; // rbx
  UNICODE_STRING *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int DriverNameFromKeyNode; // ebp
  unsigned int v9; // [rsp+38h] [rbp-50h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF

  v2 = a1 + 4;
  v4 = *(UNICODE_STRING **)&a1[4].Length;
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = *(UNICODE_STRING **)&v4->Length;
    if ( SLODWORD(v5[3].Buffer) >= 0 )
    {
      v6 = *(_QWORD *)&v5[3].Length;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
          SeRegisterElamCertResources(v7, a2, 0);
      }
      Destination.Buffer = 0LL;
      Handle = 0LL;
      DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v5 + 2, 0x20019u);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
        if ( DriverNameFromKeyNode >= 0 )
          DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                    &Destination.Length,
                                    (__int128 *)&v5[2],
                                    *(_QWORD *)(*(_QWORD *)&v5[3].Length + 56LL),
                                    *(_QWORD *)&v5[3].Length,
                                    (__int64)&a1[1],
                                    0,
                                    0,
                                    v9,
                                    (__int64)&v12);
      }
      if ( Handle )
        ZwClose(Handle);
      if ( Destination.Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( DriverNameFromKeyNode < 0 )
        *(_DWORD *)(*(_QWORD *)&v5[3].Length + 104LL) |= 0x20000u;
    }
  }
}
