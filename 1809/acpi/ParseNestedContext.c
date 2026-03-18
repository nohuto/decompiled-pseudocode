/*
 * XREFs of ParseNestedContext @ 0x1C0069730
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     AsyncCallBack @ 0x1C0065DAC (AsyncCallBack.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx

  v4 = a3;
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a2 + 96);
    if ( v7 )
      v4 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v7, a2 + 48, a4);
  }
  AsyncCallBack((_QWORD *)a1, v4);
  FreeDataBuffs(a2 + 48, 1u);
  *(_DWORD *)(a1 + 64) &= ~0x100u;
  *(_DWORD *)(a1 + 64) |= *(_DWORD *)(a2 + 112) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v8);
  *(_QWORD *)(a2 + 40) = 0LL;
  v9 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v9[1];
  HeapFree(v9);
  return 0x8000LL;
}
