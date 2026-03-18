/*
 * XREFs of ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1EFC
 * Callers:
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800A1940 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800A1A34 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1DB4 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CDataBlockReader::GetFirstItemSafe(__int64 **this, unsigned int *a2, void **a3, unsigned int *a4)
{
  __int64 v5; // r10
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // r10
  __int64 result; // rax

  v5 = **this;
  if ( *this == (__int64 *)v5 )
    return 1LL;
  this[1] = (__int64 *)v5;
  v6 = (char *)(this + 2);
  v7 = *(_DWORD *)(v5 + 20);
  v8 = v5 + 24;
  *(_QWORD *)v6 = v8;
  *((_DWORD *)v6 + 4) = v7;
  *((_QWORD *)v6 + 1) = v8;
  result = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)v6, a2, a3, a4);
  if ( (_DWORD)result == 1 && (__int64 *)*this[1] != *this )
    return 2147500037LL;
  return result;
}
