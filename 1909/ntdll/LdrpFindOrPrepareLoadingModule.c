/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x18002AA74
 * Callers:
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002228C (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpAllocatePlaceHolder @ 0x18002AB70 (LdrpAllocatePlaceHolder.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        unsigned __int16 *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  int v8; // r10d
  int v12; // ebp
  unsigned __int16 *v13; // rdx
  int LoadedDllByName; // eax
  int PlaceHolder; // edi
  char v17; // al
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v7 = a6;
  v8 = 0;
  v19 = 0;
  v12 = (int)a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v13 = 0LL;
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    v13 = a1;
    a1 = 0LL;
LABEL_4:
    LoadedDllByName = LdrpFindLoadedDllByName(a1, v13, a3, (__int64)v7, &v19);
    v8 = v19;
    PlaceHolder = LoadedDllByName;
    goto LABEL_5;
  }
  PlaceHolder = -1073741515;
LABEL_5:
  if ( PlaceHolder == -1073741515 )
  {
    PlaceHolder = LdrpAllocatePlaceHolder(v12, a2, a3, a4, a5, (__int64)v7, a7);
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
        2945,
        (unsigned int)"LdrpFindOrPrepareLoadingModule",
        0,
        (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        &v18,
        v8);
      v17 = LdrpDebugFlags;
    }
    if ( (v17 & 0x10) != 0 )
      __debugbreak();
    PlaceHolder = -1073741595;
    LdrpDereferenceModule(*v7);
    *v7 = 0LL;
  }
  else
  {
    LdrpIncrementModuleLoadCount(*v7);
  }
  return (unsigned int)PlaceHolder;
}
