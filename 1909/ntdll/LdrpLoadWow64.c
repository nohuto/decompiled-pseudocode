/*
 * XREFs of LdrpLoadWow64 @ 0x1800822AC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpLoadWow64(__int16 *a1)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  const void ***v3; // rdi
  int ProcedureAddressForCaller; // esi
  char v6; // cl
  char v7; // al
  int v8; // [rsp+38h] [rbp-D0h]
  int v9; // [rsp+40h] [rbp-C8h]
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  char *v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v14; // [rsp+E4h] [rbp-24h]
  char v15; // [rsp+E8h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v10) = 34078720;
  v11 = &v15;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v10, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"wow64.dll");
  LdrpInitializeDllPath((__int64)v11, 16385LL, v13);
  Dll = LdrpLoadDll((__int64)&v10, (int)v13, 2048, (__int64)&v12);
  if ( v14 )
    RtlReleasePath(v13[0]);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v8 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3150,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v10,
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
    v3 = (const void ***)&off_180118DC0;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(*(_QWORD *)(v12 + 48), *v3, 0, v3[1], 0, retaddr);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 6 )
        goto LABEL_7;
    }
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = ProcedureAddressForCaller;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3173,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180118DC0 + 2 * v2),
        &v10,
        v9);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v12);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
