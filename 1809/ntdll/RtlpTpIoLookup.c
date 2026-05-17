/*
 * XREFs of RtlpTpIoLookup @ 0x18008BDE0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18008BC90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x18006C590 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x18008BF2C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v8 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v9 = v8 - 96;
      v15 = v8 - 96;
      v10 = *(_QWORD *)(v8 - 96);
      if ( a2 == v10 )
        break;
      if ( a2 >= v10 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        if ( !v12 )
        {
          v11 = RtlpTpIoAlloc(&v15, a2, a3);
          v9 = v15;
          if ( !v15 )
            goto LABEL_16;
          v13 = (__int64 *)(v15 + 96);
          *(_QWORD *)(v8 + 16) = v15 + 96;
          goto LABEL_14;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
        {
          v11 = RtlpTpIoAlloc(&v15, a2, a3);
          v9 = v15;
          if ( !v15 )
            goto LABEL_16;
          v13 = (__int64 *)(v15 + 96);
          *(_QWORD *)(v8 + 8) = v15 + 96;
LABEL_14:
          *v13 = v8;
          goto LABEL_16;
        }
      }
      v8 = v12;
    }
    v11 = TpBindFileToDirect((__int64)a3, v9 + 8, *(_PEB_LDR_DATA **)(v9 + 80), v7);
    if ( v11 >= 0 )
      ++*(_DWORD *)(v9 + 88);
  }
  else
  {
    v11 = RtlpTpIoAlloc(&v15, a2, a3);
    v9 = v15;
  }
LABEL_16:
  if ( v9 && RtlpTpIoTree != v9 + 96 )
    RtlpTpIoTree = (__int64)RtlSplay((_QWORD *)(v9 + 96));
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v9;
  return (unsigned int)v11;
}
