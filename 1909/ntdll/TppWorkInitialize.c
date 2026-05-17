/*
 * XREFs of TppWorkInitialize @ 0x180037608
 * Callers:
 *     TppInitializeTimer @ 0x180031AA0 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x180062D10 (TpAllocWork.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      TppGetCurrentThreadNumaNode(v8, (_DWORD *)(a1 + 208), (unsigned __int8 *)(a1 + 212));
      *(_DWORD *)(a1 + 232) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      TppCleanupGroupMemberDestroy((_QWORD *)a1);
  }
  return (unsigned int)v7;
}
