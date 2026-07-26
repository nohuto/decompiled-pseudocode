/*
 * XREFs of NdisGetFirstBufferFromPacket @ 0x1C005CE90
 * Callers:
 *     ndisMIndicatePacket @ 0x1C0068450 (ndisMIndicatePacket.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NdisGetFirstBufferFromPacket(__int64 a1, struct _MDL **a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  struct _MDL *v5; // rbx
  PVOID MappedSystemVa; // rax
  _DWORD *result; // rax
  struct _MDL *i; // rcx

  v5 = *(struct _MDL **)(a1 + 8);
  *a2 = v5;
  if ( v5 )
  {
    if ( (v5->MdlFlags & 5) != 0 )
      MappedSystemVa = v5->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPages(v5, 0);
    *a3 = MappedSystemVa;
    result = (_DWORD *)v5->ByteCount;
    *a5 = (_DWORD)result;
    *a4 = (_DWORD)result;
    for ( i = v5->Next; i; i = i->Next )
    {
      result = (_DWORD *)i->ByteCount;
      *a5 += (_DWORD)result;
    }
  }
  else
  {
    *a3 = 0LL;
    result = a5;
    *a4 = 0;
    *a5 = 0;
  }
  return result;
}
