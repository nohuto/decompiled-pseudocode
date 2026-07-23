/*
 * XREFs of sub_180020654 @ 0x180020654
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 *     sub_180020844 @ 0x180020844 (sub_180020844.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_180020C18 @ 0x180020C18 (sub_180020C18.c)
 *     sub_180020D2C @ 0x180020D2C (sub_180020D2C.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 sub_180020654(__int64 a1, int a2, int a3, ...)
{
  char *v3; // rbp
  NTSTATUS v7; // edi
  PIMAGE_NT_HEADERS v8; // rsi
  char *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // r8d
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, PIMAGE_NT_HEADERS);
  v3 = *(char **)(a1 + 48);
  v7 = RtlImageNtHeaderEx(3u, v3, 0LL, (PIMAGE_NT_HEADERS *)va);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = v15;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( v15->OptionalHeader.AddressOfEntryPoint )
      v9 = &v3[v15->OptionalHeader.AddressOfEntryPoint];
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)sub_180020844(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = v8->OptionalHeader.ImageBase;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 && (*(_BYTE *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a3 )
  {
    v14 = 0LL;
    v10 = sub_180020C18();
    v11 = sub_180020514(v3, *(_DWORD *)(a1 + 64), 0LL, v10 ^ LdrSystemDllInitBlock.RngData, &v14);
    if ( v3 == (char *)0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (v15->OptionalHeader.MajorSubsystemVersion != 6 || v15->OptionalHeader.MinorSubsystemVersion < 3u)
      && v15->OptionalHeader.MajorSubsystemVersion < 7u
      || v11 )
    {
      v7 = sub_18002088C(a1, v15, v14);
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  v12 = *(_DWORD *)(a1 + 104);
  if ( (v12 & 0x200) == 0 && (a2 & 0x800000) == 0 )
  {
    sub_180020D8C(v3, *(unsigned int *)(a1 + 64));
    v12 = *(_DWORD *)(a1 + 104);
  }
  *(_DWORD *)(a1 + 104) = v12 | 0x2200;
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    sub_180020D2C(a1);
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  sub_1800255A8(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)v7;
}
