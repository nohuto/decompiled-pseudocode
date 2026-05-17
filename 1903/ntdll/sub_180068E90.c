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

_WORD *__fastcall sub_180068E90(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  _WORD *result; // rax
  char v6; // cl
  int v7; // [rsp+28h] [rbp-D8h]
  int v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+28h] [rbp-D8h]
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v16; // [rsp+68h] [rbp-98h]
  _WORD v17[128]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18[15]; // [rsp+170h] [rbp+70h] BYREF
  char v19; // [rsp+1ECh] [rbp+ECh]
  _BYTE v20[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = 1572886;
  v14 = L"apphelp.dll";
  v15 = 0x1000000;
  v16 = v17;
  v17[0] = 0;
  v2 = sub_180025714(&v15, (__int64)&v13);
  if ( v2 < 0 )
  {
    v6 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) == 0 )
      goto LABEL_14;
    v7 = v2;
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2584,
      (unsigned int)"LdrpInitShimEngine",
      0,
      (__int64)"Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v7);
    goto LABEL_13;
  }
  sub_180021798(0LL, 16385LL, v18);
  v3 = sub_180022180((__int64)&v15, (int)v18, 0, (__int64)&v10);
  if ( v19 )
    RtlReleasePath(v18[0]);
  if ( v3 < 0 )
  {
    v6 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v9 = v3;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2603,
        (unsigned int)"LdrpInitShimEngine",
        0,
        (__int64)"Loading the shim engine DLL failed with status 0x%08lx\n",
        v9);
LABEL_13:
      v6 = dword_18015FAB0;
    }
  }
  else
  {
    *(_DWORD *)(v10 + 104) |= 0x100u;
    qword_180165398 = *(_QWORD *)(v10 + 48);
    sub_18002EB1C(v10);
    sub_18001B678(v10);
    v4 = sub_180069410();
    if ( v4 >= 0 )
    {
      SourceString = (PCWSTR)v20;
      v11 = 0x2000000;
      if ( ((int (__fastcall *)(int *, __int64, __int64))(__ROR8__(qword_18017A240, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             &v11,
             qword_180164FC8 + 72,
             a1) >= 0 )
      {
        sub_180069034(SourceString);
        if ( SourceString != (PCWSTR)v20 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString);
      }
      goto LABEL_9;
    }
    v6 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v8 = v4;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2617,
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
    return (_WORD *)RtlDeleteBoundaryDescriptor(v16);
  return result;
}
