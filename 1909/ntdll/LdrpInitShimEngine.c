/*
 * XREFs of LdrpInitShimEngine @ 0x1800690E0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x180025714 (LdrpBuildSystem32FileName.c)
 *     LdrpPinModule @ 0x18002EB1C (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int Dll; // ebx
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  char v6; // cl
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+28h] [rbp-D8h]
  PVOID v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v16; // [rsp+68h] [rbp-98h]
  _WORD v17[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v19; // [rsp+1ECh] [rbp+ECh]
  _BYTE v20[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = 1572886;
  v14 = L"apphelp.dll";
  v15 = 0x1000000;
  v16 = v17;
  v17[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v15, (__int64)&v13);
  if ( v2 < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_14;
    v7 = v2;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2587,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v7);
    goto LABEL_13;
  }
  LdrpInitializeDllPath(0LL, 16385LL, (__int64 *)Path);
  Dll = LdrpLoadDll((__int64)&v15, (__int64)Path, 0, (__int64)&v10);
  if ( v19 )
    RtlReleasePath(Path[0]);
  if ( Dll < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v9 = Dll;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2606,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
LABEL_13:
      v6 = LdrpDebugFlags;
    }
  }
  else
  {
    *((_DWORD *)v10 + 26) |= 0x100u;
    g_pShimEngineModule = (PVOID)*((_QWORD *)v10 + 6);
    LdrpPinModule((__int64)v10);
    LdrpDereferenceModule((char *)v10);
    ShimEngineInterface = LdrpGetShimEngineInterface();
    if ( ShimEngineInterface >= 0 )
    {
      BaseAddress = v20;
      v11 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(
                                                            g_pfnSE_InitializeEngine,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v11,
             LdrpImageEntry + 72,
             a1) >= 0 )
      {
        LdrpLoadShimEngine((PCWSTR)BaseAddress);
        if ( BaseAddress != v20 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v8 = ShimEngineInterface;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2620,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
        v8);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v6 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  result = v17;
  if ( v17 != v16 )
    return (_WORD *)NtdllpFreeStringRoutine(v16);
  return result;
}
