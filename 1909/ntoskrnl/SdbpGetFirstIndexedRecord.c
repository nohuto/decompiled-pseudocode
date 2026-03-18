/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x14070DC70
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14070DBCC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070DD44 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14070E270 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 *     SdbpBinarySearchFirst @ 0x14070E72C (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x14070F25C (SdbpBinarySearchUnique.c)
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

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801
    && (v8 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC,
        MappedTagData = SdbpGetMappedTagData(a1, v6),
        v10 = 0,
        (v11 = MappedTagData) != 0) )
  {
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
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
