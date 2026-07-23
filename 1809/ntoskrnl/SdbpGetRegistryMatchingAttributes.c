/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x1408E88BC
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1408E7110 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x1408E7F90 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadQWORDTag @ 0x140722388 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbGetBinaryTagData @ 0x1408E8E18 (SdbGetBinaryTagData.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v13; // esi
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int DWORDTag; // eax
  unsigned int v23; // eax
  __int64 TagDataSize; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v30 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  BinaryTagData = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_24;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v19 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_24;
  v20 = SdbFindFirstTag(a1, v11, 24624);
  if ( v20 )
    v30 = SdbGetStringTagPtr(a1, v20);
  v21 = SdbFindFirstTag(a1, v11, 16465);
  if ( !v21 )
    goto LABEL_15;
  DWORDTag = SdbReadDWORDTag(a1, v21, 0);
  v13 = DWORDTag;
  if ( !DWORDTag )
    goto LABEL_24;
  if ( DWORDTag <= 2 )
    goto LABEL_22;
  switch ( DWORDTag )
  {
    case 3u:
      v26 = SdbFindFirstTag(a1, v11, 36882);
      v27 = v26;
      if ( v26 )
      {
        BinaryTagData = SdbGetBinaryTagData(a1, v26);
        if ( BinaryTagData )
        {
          TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v27);
          goto LABEL_16;
        }
      }
      goto LABEL_24;
    case 4u:
      v25 = SdbFindFirstTag(a1, v11, 16466);
      if ( v25 )
      {
        v10 = SdbReadDWORDTag(a1, v25, 0);
        TagDataSize = 0LL;
        goto LABEL_16;
      }
      goto LABEL_24;
    case 7u:
LABEL_22:
      v28 = SdbFindFirstTag(a1, v11, 24625);
      if ( v28 )
      {
        v14 = SdbGetStringTagPtr(a1, v28);
        if ( v14 )
          goto LABEL_15;
      }
LABEL_24:
      AslLogCallPrintf(1LL);
      return v16;
  }
  if ( DWORDTag != 11 )
    goto LABEL_24;
  v23 = SdbFindFirstTag(a1, v11, 20507);
  if ( !v23 )
    goto LABEL_24;
  QWORDTag = SdbReadQWORDTag(a1, v23, 0LL);
LABEL_15:
  TagDataSize = 0LL;
LABEL_16:
  v16 = 1;
  *a3 = v19;
  *a4 = v30;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
