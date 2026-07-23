/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x140722BB8
 * Callers:
 *     SdbFindNextStringIndexedTag @ 0x1407215A4 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x140722904 (SdbpFindMatchingName.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14067DFC8 (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x14067E424 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  __int64 MappedTagData; // rsi
  unsigned int TagDataSize; // eax
  __int64 v8; // rbp
  __int64 v9; // rbp
  unsigned int NextTagId; // edi
  unsigned int v12; // ebp
  __int16 TagFromTagID; // si
  __int16 v14; // ax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 && (MappedTagData = SdbpGetMappedTagData(a1, v4)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v12 = a3[1];
      if ( !v12 )
        v12 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
      NextTagId = SdbpGetNextTagId(a1, v12);
      TagFromTagID = SdbGetTagFromTagID(a1, v12);
      v14 = SdbGetTagFromTagID(a1, NextTagId);
      if ( v14 && (v14 & 0xF000) == 0x7000 && v14 == TagFromTagID && NextTagId != a3[2] )
      {
        a3[1] = NextTagId;
        return NextTagId;
      }
    }
    else
    {
      TagDataSize = SdbGetTagDataSize(a1, v4);
      v8 = (unsigned int)a3[4];
      if ( (_DWORD)v8 != TagDataSize / 0xC - 1 )
      {
        memmove(v15, (const void *)(MappedTagData + 12 * v8), 8uLL);
        v9 = (unsigned int)(v8 + 1);
        memmove(&v16, (const void *)(MappedTagData + 12 * v9), 8uLL);
        if ( v15[0] == v16 )
        {
          a3[4] = v9;
          return *(unsigned int *)(MappedTagData + 12 * v9 + 8);
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
