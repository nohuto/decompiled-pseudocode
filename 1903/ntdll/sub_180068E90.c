/*
 * XREFs of sub_180068E90 @ 0x180068E90
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

void __fastcall sub_180068E90(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  int v6; // [rsp+28h] [rbp-D8h]
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  PVOID v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+68h] [rbp-98h]
  _WORD v16[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v18; // [rsp+1ECh] [rbp+ECh]
  _BYTE v19[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v12 = 1572886;
  v13 = L"apphelp.dll";
  v14 = 0x1000000;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v16;
  v16[0] = 0;
  v2 = sub_180025714(&v14, (__int64)&v12);
  if ( v2 < 0 )
  {
    v5 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) == 0 )
      goto LABEL_14;
    v6 = v2;
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2584,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v6);
    goto LABEL_13;
  }
  sub_180021798(0LL, 16385LL, (__int64 *)Path);
  v3 = sub_180022180((__int64)&v14, (__int64)Path, 0, (__int64)&v9);
  if ( v18 )
    RtlReleasePath(Path[0]);
  if ( v3 < 0 )
  {
    v5 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v8 = v3;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2603,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Loading the shim engine DLL failed with status 0x%08lx\n",
        v8);
LABEL_13:
      v5 = dword_18015FAB0;
    }
  }
  else
  {
    *((_DWORD *)v9 + 26) |= 0x100u;
    DllHandle = (PVOID)*((_QWORD *)v9 + 6);
    sub_18002EB1C((__int64)v9);
    sub_18001B678((char *)v9);
    v4 = sub_180069410();
    if ( v4 >= 0 )
    {
      BaseAddress = v19;
      v10 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18017A240, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v10,
             qword_180164FC8 + 72,
             a1) >= 0 )
      {
        sub_180069034((PCWSTR)BaseAddress);
        if ( BaseAddress != v19 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v5 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v7 = v4;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2617,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Getting the shim engine exports failed with status 0x%08lx\n",
        v7);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v5 & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( v16 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
}
