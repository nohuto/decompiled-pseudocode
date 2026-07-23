/*
 * XREFs of sub_180069034 @ 0x180069034
 * Callers:
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180069240 @ 0x180069240 (sub_180069240.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

char __fastcall sub_180069034(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int v7; // ecx
  _QWORD *v8; // rcx
  NTSTATUS v9; // ebx
  char v10; // al
  char v11; // al
  __int64 *i; // rax
  __int64 v13; // [rsp+30h] [rbp-89h]
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  PWSTR Path[15]; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  sub_180021798(0LL, 16385LL, (__int64 *)Path);
  byte_180166015 = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(qword_18017A210, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = sub_180022180((__int64)&DestinationString, (__int64)Path, 1, (__int64)&BaseAddress);
    if ( v7 < 0 )
    {
      v10 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(v13) = v7;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2258,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          (__int64)"Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v13);
        v10 = dword_18015FAB0;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *((_DWORD *)BaseAddress + 26) |= 0x100u;
      sub_18002EB1C((__int64)BaseAddress);
      v8 = BaseAddress;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) == 7 )
      {
        v9 = sub_180069854(*((_QWORD *)BaseAddress + 19));
        if ( v9 < 0 )
        {
          v11 = dword_18015FAB0;
          if ( (dword_18015FAB0 & 3) != 0 )
          {
            LODWORD(v13) = v9;
            sub_1800CE318(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2284,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              (__int64)"Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v13);
            v11 = dword_18015FAB0;
          }
          if ( (v11 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          sub_180089150((unsigned int)v9);
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
          break;
        }
        v8 = BaseAddress;
      }
      v3(v8[6]);
      sub_18001B678((char *)BaseAddress);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v17 )
    RtlReleasePath(Path[0]);
  ((void (*)(void))(__ROR8__(qword_18017A250, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18017A268, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&stru_18015F3F0);
  if ( byte_180166014 )
  {
    for ( i = (__int64 *)qword_1801653D0; i != &qword_1801653D0; i = (__int64 *)*i )
    {
      BaseAddress = i;
      *((_BYTE *)i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_1801653D0;
  if ( dword_1801664E0 >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_1801653D0 )
      break;
    BaseAddress = v5;
    sub_180069240(v5[19], v4);
  }
  byte_180166015 = 0;
  byte_180166014 = 1;
  RtlLeaveCriticalSection(&stru_18015F3F0);
  sub_1800692D0();
  return v2;
}
