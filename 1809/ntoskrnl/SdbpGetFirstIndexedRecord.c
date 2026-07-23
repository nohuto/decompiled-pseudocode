/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x14067DE70
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14067DDCC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     SdbpBinarySearchFirst @ 0x14067E97C (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x14067F8FC (SdbpBinarySearchUnique.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // edi
  unsigned int v8; // r14d
  __int64 MappedTagData; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  _DWORD *v13; // r9
  int v14; // eax
  int v16; // edx
  const char *v17; // r9
  int v18; // r8d

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v17 = "The tag 0x%lx is not an index tag";
    v18 = 430;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v18, (_DWORD)v17);
    return 0LL;
  }
  v8 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, v6);
  v10 = 0;
  v11 = MappedTagData;
  if ( !MappedTagData )
  {
    v17 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v18 = 439;
    goto LABEL_15;
  }
  v12 = a4 + 4;
  v13 = a4 + 4;
  if ( (a4[5] & 1) != 0 )
  {
    v14 = SdbpBinarySearchUnique(MappedTagData, v8, a3, v13);
    if ( v14 && *v12 < v8 - 1 )
      v16 = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v12 + 1) + 8);
    else
      v16 = 0;
    a4[2] = v16;
    a4[1] = 0;
  }
  else
  {
    v14 = SdbpBinarySearchFirst(MappedTagData, v8, a3, v13);
  }
  if ( v14 )
    return *(unsigned int *)(v11 + 12LL * (unsigned int)*v12 + 8);
  return v10;
}
