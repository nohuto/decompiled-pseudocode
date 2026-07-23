/*
 * XREFs of LdrpLoadWow64 @ 0x1800869B0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  PANSI_STRING *v3; // rdi
  NTSTATUS ProcedureAddressForCaller; // esi
  char v6; // cl
  char v7; // al
  int v8; // [rsp+38h] [rbp-D0h]
  NTSTATUS v9; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR Path[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+E4h] [rbp-24h]
  char v14; // [rsp+E8h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+320h] [rbp+218h]

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (wchar_t *)&v14;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath((__int64)Destination.Buffer, 16385LL, (__int64 *)Path);
  Dll = LdrpLoadDll((__int64)&Destination, (__int64)Path, 2048, (__int64)BaseAddress);
  if ( v13 )
    RtlReleasePath(Path[0]);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v8 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3154,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &Destination,
        v8);
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (PANSI_STRING *)&off_180118E40;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    *((PVOID *)BaseAddress[0] + 6),
                                    *v3,
                                    0,
                                    (PVOID *)v3[1],
                                    0,
                                    Callback);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 5 )
        goto LABEL_7;
    }
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3177,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180118E40 + 2 * v2),
        &Destination,
        v9);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)BaseAddress[0]);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
