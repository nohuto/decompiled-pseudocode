/*
 * XREFs of ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C27F8
 * Callers:
 *     InitFNTCache @ 0x1C00C2290 (InitFNTCache.c)
 *     bInitCacheTable @ 0x1C026D33C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C026D4B4 (bReAllocCacheFile.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C008CEC8 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008CFCC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008D590 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void *__fastcall bMapFileRetainHandle(const unsigned __int16 *a1, struct _FILEVIEW *a2, int a3, int *a4)
{
  void *result; // rax
  unsigned int v5; // ebx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  PVOID MappedBase[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h]
  PVOID Section[2]; // [rsp+50h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+28h] BYREF

  ViewSize = (ULONG_PTR)a4;
  result = (void *)*((_QWORD *)a2 + 6);
  v5 = 0;
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
      if ( MmMapViewInSessionSpace(Section[0], &MappedBase[1], &ViewSize) < 0 )
      {
        vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
      }
      else
      {
        v5 = 1;
        v8 = v13;
        *(_OWORD *)a2 = *(_OWORD *)MappedBase;
        v9 = *(_OWORD *)Section;
        *((_OWORD *)a2 + 1) = v8;
        v10 = v15;
        *((_OWORD *)a2 + 2) = v9;
        v11 = v16;
        *((_OWORD *)a2 + 3) = v10;
        *((_OWORD *)a2 + 4) = v11;
      }
    }
    return (void *)v5;
  }
  return result;
}
