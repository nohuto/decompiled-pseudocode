/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180087AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     NtOpenSection @ 0x1800A09C0 (NtOpenSection.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrGetKnownDllSectionHandle(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdi
  int inited; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  _BYTE *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-18h]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3795,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      "DLL name: %ws\n",
      a1);
  if ( a2 )
    return 3221225485LL;
  v6 = LdrpKnownDllDirectoryHandle;
  if ( LdrpKnownDllDirectoryHandle )
  {
    inited = RtlInitUnicodeStringEx((__int64)v9, a1);
    if ( inited >= 0 )
    {
      v10 = 48;
      v12 = v9;
      v11 = v6;
      v13 = 64;
      v14 = 0LL;
      inited = NtOpenSection(a3, 15LL, &v10);
    }
  }
  else
  {
    inited = -1073741816;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3826,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      "Status: 0x%08lx\n",
      inited);
  return (unsigned int)inited;
}
