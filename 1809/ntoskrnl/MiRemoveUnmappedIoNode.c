/*
 * XREFs of MiRemoveUnmappedIoNode @ 0x1400E5A50
 * Callers:
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiMakeIoRangePermanent @ 0x1402ABBFC (MiMakeIoRangePermanent.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiInitializeIoPageNodeArray @ 0x1400E5A18 (MiInitializeIoPageNodeArray.c)
 */

__int64 __fastcall MiRemoveUnmappedIoNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 i; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  int v8; // ecx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  for ( i = *a1; ; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      v4 = *(_QWORD *)(i + 40);
      if ( a2 >= v4 )
        break;
      i = *(_QWORD *)i;
    }
    if ( a2 < v4 + 512 )
      break;
  }
  RtlAvlRemoveNode(a1, (unsigned __int64 *)i);
  v5 = i + 24;
  if ( qword_14043BDE0 == i + 24 && *(__int64 **)v5 != &qword_14043BDE0 )
    dword_14043BDF0 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(i + 32), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  _InterlockedOr(v9, 0);
  v8 = *(_DWORD *)(i + 56);
  if ( (unsigned int)(KiCacheFlushTimeStamp - v8) > 2
    || (v8 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - v8) >= 2 )
  {
    MiInitializeIoPageNodeArray(i);
  }
  *(_QWORD *)(i + 56) = 0LL;
  result = i;
  --qword_14043BDF8;
  return result;
}
