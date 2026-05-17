/*
 * XREFs of TppWorkInitialize @ 0x18002DAD4
 * Callers:
 *     TpSimpleTryPost @ 0x18002D4A0 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x18002D890 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 */

__int64 __fastcall TppWorkInitialize(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rdx
  int v8; // ebx
  volatile signed __int32 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  v8 = TppCleanupGroupMemberInitialize(a1, a2, a3, a4, a5);
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 144);
    if ( v11 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      TppGetCurrentThreadNumaNode(v11, a1 + 208, a1 + 212);
      *(_DWORD *)(a1 + 232) = 1;
      v8 = 0;
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      TppCleanupGroupMemberDestroy((_QWORD *)a1, v7, v9, v10);
  }
  return (unsigned int)v8;
}
