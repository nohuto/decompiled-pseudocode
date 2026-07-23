/*
 * XREFs of MiCompressImportList @ 0x1406C9A38
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiAllocateImportList @ 0x1406C9B44 (MiAllocateImportList.c)
 */

unsigned __int64 *__fastcall MiCompressImportList(unsigned __int64 *P)
{
  unsigned __int64 v1; // r8
  __int64 ImportList; // rdi
  int v3; // edx
  unsigned int v4; // r9d
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // r8

  v1 = *P;
  ImportList = 0LL;
  v3 = 0;
  v4 = 0;
  if ( !*P )
    goto LABEL_19;
  v6 = 0LL;
  do
  {
    v7 = P[v6 + 1];
    v8 = v3++;
    if ( !v7 )
      v3 = v8;
    v9 = v7 | 1;
    if ( !v7 )
      v9 = ImportList;
    v6 = ++v4;
    ImportList = v9;
  }
  while ( v4 < v1 );
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == v1 )
        return P;
      ImportList = MiAllocateImportList();
      if ( !ImportList )
        return P;
      v11 = 0LL;
      v12 = 0;
      if ( *P )
      {
        v13 = 0LL;
        do
        {
          v14 = P[v13 + 1];
          if ( v14 )
          {
            *(_QWORD *)(ImportList + 8 * v11 + 8) = v14;
            v11 = (unsigned int)(v11 + 1);
          }
          v13 = ++v12;
        }
        while ( v12 < *P );
      }
    }
  }
  else
  {
LABEL_19:
    ImportList = -2LL;
  }
  ExFreePoolWithTag(P, 0);
  return (unsigned __int64 *)ImportList;
}
