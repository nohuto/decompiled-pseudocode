/*
 * XREFs of PipInitializeEarlyLaunchDrivers @ 0x140A0FB40
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140A0FDEC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 *     SeRegisterElamCertResources @ 0x140764638 (SeRegisterElamCertResources.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeEarlyLaunchDrivers(UNICODE_STRING *a1, __int64 a2)
{
  UNICODE_STRING *v2; // r14
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  NTSTATUS DriverNameFromKeyNode; // esi
  int v9; // [rsp+38h] [rbp-50h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF

  v2 = a1 + 4;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  while ( v3 != v2 )
  {
    v5 = v3;
    v3 = *(UNICODE_STRING **)&v3->Length;
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
                                    (unsigned int)&Destination,
                                    (int)v5 + 32,
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
