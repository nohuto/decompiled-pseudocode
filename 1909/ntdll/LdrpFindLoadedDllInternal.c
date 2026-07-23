/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800219E8
 * Callers:
 *     LdrpFindLoadedDll @ 0x180021908 (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180079A68 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(PUNICODE_STRING a1, int a2, _QWORD *a3, __int64 a4, int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a4);
  }
  else if ( (a5 & 0x200) == 0 || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, a4), LoadedDllByName < 0) )
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    *(_QWORD *)&v12.Length = 0LL;
    v12.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName(a1, &v14, &String1, &v12, a5);
    else
      v11 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)&v12, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, &v12, a4);
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
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      480,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
