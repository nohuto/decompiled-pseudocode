/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x1408E8694
 * Callers:
 *     SdbpCheckMatchingText @ 0x1408E7780 (SdbpCheckMatchingText.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14067E4AC (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int DWORDTag; // r13d
  unsigned int v9; // r12d
  void *v11; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int TagDataSize; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebp
  PVOID v20; // rax
  unsigned int v21; // eax
  int v22; // r14d
  unsigned int v23; // eax

  v7 = 0;
  *a3 = 0LL;
  DWORDTag = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_2;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v14 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_14;
  v15 = SdbFindFirstTag(a1, v9, 36883);
  v16 = v15;
  if ( !v15
    || (TagDataSize = SdbGetTagDataSize(a1, v15), (v19 = TagDataSize) == 0)
    || (v20 = AslAlloc(v18, TagDataSize + 2LL), (v11 = v20) == 0LL) )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (unsigned int)SdbReadBinaryTag(a1, v16, v20, v19)
    && (v21 = SdbFindFirstTag(a1, v9, 16467)) != 0
    && (v22 = SdbReadDWORDTag(a1, v21, 0)) != 0 )
  {
    v23 = SdbFindFirstTag(a1, v9, 16385);
    if ( v23 )
      DWORDTag = SdbReadDWORDTag(a1, v23, 0x2000u);
    v7 = 1;
    *a3 = v14;
    *a4 = v11;
    *a5 = v19;
    *a6 = v22;
    *a7 = DWORDTag;
  }
  else
  {
LABEL_14:
    AslLogCallPrintf(1LL);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x74705041u);
  }
  return v7;
}
