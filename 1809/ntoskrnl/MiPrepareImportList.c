/*
 * XREFs of MiPrepareImportList @ 0x1406C9AF0
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 * Callees:
 *     MiAllocateImportList @ 0x1406C9B44 (MiAllocateImportList.c)
 */

__int64 __fastcall MiPrepareImportList(_DWORD *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 ImportList; // rax

  *a2 = 0LL;
  v2 = 0;
  if ( !a1[3] )
    goto LABEL_8;
  do
  {
    if ( !*a1 )
      break;
    a1 += 5;
    ++v2;
  }
  while ( a1[3] );
  if ( !v2 )
  {
LABEL_8:
    ImportList = 0LL;
    goto LABEL_6;
  }
  ImportList = MiAllocateImportList(v2);
  if ( ImportList )
  {
LABEL_6:
    *a2 = ImportList;
    return 0LL;
  }
  return 3221225626LL;
}
