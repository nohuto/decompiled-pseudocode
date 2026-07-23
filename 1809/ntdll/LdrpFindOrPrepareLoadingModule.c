/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x180028D4C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpAllocatePlaceHolder @ 0x180026CE4 (LdrpAllocatePlaceHolder.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        const void **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  int v8; // r10d
  int v10; // esi
  const void **v12; // rbp
  _UNICODE_STRING *v13; // rdx
  int LoadedDllByName; // eax
  int PlaceHolder; // edi
  char v17; // al
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v7 = a6;
  v8 = 0;
  LODWORD(v19) = 0;
  v10 = a3;
  v12 = a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    v13 = (_UNICODE_STRING *)a1;
    a1 = 0LL;
LABEL_4:
    LoadedDllByName = LdrpFindLoadedDllByName((PUNICODE_STRING)a1, v13, a3, (__int64)v7, &v19);
    v8 = v19;
    PlaceHolder = LoadedDllByName;
    goto LABEL_5;
  }
  PlaceHolder = -1073741515;
LABEL_5:
  if ( PlaceHolder == -1073741515 )
  {
    PlaceHolder = LdrpAllocatePlaceHolder(v12, a2, v10, a4, a5, v7, a7);
    if ( PlaceHolder >= 0 )
      return (unsigned int)LdrpLoadKnownDll(*(_BYTE **)(*v7 + 176));
  }
  else if ( v8 < 0 )
  {
    v17 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v18 = *(_OWORD *)(*v7 + 72);
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        2936,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v18,
        v8);
      v17 = LdrpDebugFlags;
    }
    if ( (v17 & 0x10) != 0 )
      __debugbreak();
    PlaceHolder = -1073741595;
    LdrpDereferenceModule((char *)*v7);
    *v7 = 0LL;
  }
  else
  {
    LdrpIncrementModuleLoadCount(*v7);
  }
  return (unsigned int)PlaceHolder;
}
