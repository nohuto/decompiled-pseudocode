/*
 * XREFs of LdrpFindKnownDll @ 0x1800298B4
 * Callers:
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x18002A580 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenSection @ 0x1800A09C0 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindKnownDll(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v8; // eax
  int UnicodeString; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1514,
      (unsigned int)"LdrpFindKnownDll",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  v12 = 48;
  v13 = LdrpKnownDllDirectoryHandle;
  v15 = 64;
  v14 = a1;
  v16 = 0LL;
  v8 = NtOpenSection(a4, 15LL, &v12);
  UnicodeString = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  UnicodeString = LdrpAllocateUnicodeString(a3, *a1 + (unsigned int)(unsigned __int16)LdrpKnownDllPath + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(a3, L"\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1586,
      (unsigned int)"LdrpFindKnownDll",
      4,
      "Status: 0x%08lx\n",
      UnicodeString);
  return (unsigned int)UnicodeString;
}
