/*
 * XREFs of LdrpLoadWow64 @ 0x1800869A0
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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(__int16 *a1)
{
  unsigned __int64 v1; // rdx
  int Dll; // ebx
  unsigned __int64 *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  const void ***v6; // rdi
  unsigned __int64 v7; // rdx
  int ProcedureAddressForCaller; // esi
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  char v12; // cl
  char v13; // al
  int v14; // [rsp+38h] [rbp-D0h]
  int v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  char *v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v20; // [rsp+E4h] [rbp-24h]
  char v21; // [rsp+E8h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v16) = 34078720;
  v17 = &v21;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v16, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v16, L"wow64.dll");
  LdrpInitializeDllPath((__int64)v17, 16385LL, v19);
  Dll = LdrpLoadDll((__int64)&v16, (int)v19, 2048, (__int64)&v18);
  if ( v20 )
    RtlReleasePath(v19[0], v1, v3, v4);
  if ( Dll < 0 )
  {
    v12 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v14 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3154,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v16,
        v14);
      v12 = LdrpDebugFlags;
    }
    if ( (v12 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0, v1, v3, v4);
    v5 = 0;
    v6 = (const void ***)&off_180118E40;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(*(_QWORD *)(v18 + 48), *v6, 0, v6[1], 0, retaddr);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v5;
      v6 += 2;
      if ( v5 >= 5 )
        goto LABEL_7;
    }
    v13 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v15 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3177,
        (unsigned int)"LdrpLoadWow64",
        0,
        "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180118E40 + 2 * v5),
        &v16,
        v15);
      v13 = LdrpDebugFlags;
    }
    if ( (v13 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    LdrProtectMrdata(1, v7, v9, v10);
    LdrpDereferenceModule(v18);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
