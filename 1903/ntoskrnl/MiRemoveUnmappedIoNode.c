/*
 * XREFs of MiRemoveUnmappedIoNode @ 0x140118D90
 * Callers:
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiMakeIoRangePermanent @ 0x1402C4C54 (MiMakeIoRangePermanent.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     MiInitializeIoPageNodeArray @ 0x140118E54 (MiInitializeIoPageNodeArray.c)
 */

unsigned __int64 __fastcall MiRemoveUnmappedIoNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
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
      v3 = *(_QWORD *)(i + 40);
      if ( a2 >= v3 )
        break;
      i = *(_QWORD *)i;
    }
    if ( a2 < v3 + 512 )
      break;
  }
  RtlAvlRemoveNode(a1, (unsigned __int64 *)i);
  v5 = i + 24;
  if ( qword_1404667A0 == i + 24 && *(__int64 **)v5 != &qword_1404667A0 )
    dword_1404667B0 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
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
  --qword_1404667B8;
  return result;
}
