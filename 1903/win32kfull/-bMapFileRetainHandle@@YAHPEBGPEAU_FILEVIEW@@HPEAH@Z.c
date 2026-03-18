/*
 * XREFs of ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00E8608
 * Callers:
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 *     bInitCacheTable @ 0x1C0285BB8 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0285D30 (bReAllocCacheFile.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C007DE00 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C007DF1C (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007E4B8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void *__fastcall bMapFileRetainHandle(const unsigned __int16 *a1, struct _FILEVIEW *a2, int a3, int *a4)
{
  void *result; // rax
  unsigned int v7; // ebx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID MappedBase[10]; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+28h] BYREF

  ViewSize = (ULONG_PTR)a4;
  memset(MappedBase, 0, sizeof(MappedBase));
  result = (void *)*((_QWORD *)a2 + 6);
  v7 = 0;
  if ( result || (result = hGetHandleFromFilePath(L"\\SystemRoot\\system32\\FNTCACHE.DAT", a3 != 0)) != 0LL )
  {
    if ( (unsigned int)bCreateSectionFromHandle(
                         result,
                         L"\\SystemRoot\\system32\\FNTCACHE.DAT",
                         (struct _FILEVIEW *)MappedBase,
                         a3,
                         0LL,
                         0) )
    {
      ViewSize = 0LL;
      if ( MmMapViewInSessionSpace(MappedBase[4], &MappedBase[1], &ViewSize) < 0 )
      {
        vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
      }
      else
      {
        v7 = 1;
        v8 = *(_OWORD *)&MappedBase[2];
        *(_OWORD *)a2 = *(_OWORD *)MappedBase;
        v9 = *(_OWORD *)&MappedBase[4];
        *((_OWORD *)a2 + 1) = v8;
        v10 = *(_OWORD *)&MappedBase[6];
        *((_OWORD *)a2 + 2) = v9;
        v11 = *(_OWORD *)&MappedBase[8];
        *((_OWORD *)a2 + 3) = v10;
        *((_OWORD *)a2 + 4) = v11;
      }
    }
    return (void *)v7;
  }
  return result;
}
