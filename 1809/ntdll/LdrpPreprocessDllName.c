/*
 * XREFs of LdrpPreprocessDllName @ 0x180025FA8
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CF448 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180026510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpGetFullPath @ 0x180028FE4 (LdrpGetFullPath.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  bool v5; // zf
  int appended; // ebx
  char v9; // r14
  int v10; // eax
  unsigned __int16 *v11; // r15
  unsigned __int64 v12; // rdx
  _WORD *i; // rcx
  unsigned __int64 v14; // rdx
  _WORD *j; // rcx
  unsigned __int64 v16; // rdx
  _WORD *k; // rcx
  int v19; // eax
  const char *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-38h]
  char v22; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 0x800008) == 0;
  v22 = 0;
  appended = 0;
  v9 = 0;
  if ( v5 )
  {
    v10 = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v22);
    v9 = v22;
    appended = v10;
  }
  if ( appended < 0 )
  {
LABEL_33:
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v21) = appended;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        a1,
        v21);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)appended;
  }
  v11 = a1;
  if ( *a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      v20 = "SxS";
      if ( !v9 )
        v20 = "API set";
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2680,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        a1,
        a2,
        v20);
    }
    v19 = *a4 | 0x200;
    *a4 = v19;
    if ( v9 )
      *a4 = v19 | 4;
    v11 = a2;
    goto LABEL_12;
  }
  v12 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v12 - 2); ; --i )
  {
    if ( (unsigned __int64)i < v12 )
    {
      *a4 |= 0x20u;
LABEL_11:
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, a1);
      goto LABEL_12;
    }
    if ( *i == 92 || *i == 47 )
      break;
  }
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) == 5 )
    goto LABEL_11;
  appended = LdrpGetFullPath(a1, a2);
  if ( appended >= 0 )
    *a4 |= 0x600u;
LABEL_12:
  if ( appended < 0 )
    goto LABEL_33;
  v14 = *((_QWORD *)v11 + 1);
  for ( j = (_WORD *)(*v11 + v14 - 2); ; --j )
  {
    if ( (unsigned __int64)j < v14 )
    {
LABEL_29:
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension);
      goto LABEL_23;
    }
    if ( *j == 46 )
      break;
    if ( *j == 92 || *j == 47 )
      goto LABEL_29;
  }
  v16 = *((_QWORD *)a2 + 1);
  for ( k = (_WORD *)(*a2 + v16 - 2); (unsigned __int64)k >= v16 && *k == 46; --k )
    *a2 -= 2;
  k[1] = 0;
LABEL_23:
  if ( appended < 0 )
    goto LABEL_33;
  return (unsigned int)appended;
}
