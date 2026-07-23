/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x180022ADC
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D50 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(PUNICODE_STRING a1, int a2, _QWORD *a3, _DWORD *a4, unsigned int a5)
{
  int LoadedDllByName; // ebx
  int v10; // eax
  _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  LoadedDllByName = -1073741275;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, (__int64)a3, a4);
  }
  else
  {
    if ( (a5 & 0x200) != 0 )
      LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, a5, (__int64)a3, a4);
    if ( LoadedDllByName < 0 )
    {
      v14 = 0x1000000;
      v15 = v16;
      v16[0] = 0;
      *(_QWORD *)&v12.Length = 0LL;
      v12.Buffer = 0LL;
      if ( (a5 & 0x200) != 0 )
        v10 = LdrpResolveDllName(a1, &v14, &String1, &v12, a5);
      else
        v10 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)&v12, 0LL, 0LL);
      LoadedDllByName = v10;
      if ( v10 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName(&String1, &v12, a5, (__int64)a3, a4);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
      }
      LdrpFreeUnicodeString(&v12);
      if ( v16 != v15 )
        NtdllpFreeStringRoutine(v15);
      v14 = 0x1000000;
      v15 = v16;
      v16[0] = 0;
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      480,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
