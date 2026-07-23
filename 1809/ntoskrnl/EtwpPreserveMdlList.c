/*
 * XREFs of EtwpPreserveMdlList @ 0x1408CB5B4
 * Callers:
 *     EtwpPreserveLogger @ 0x1408CB38C (EtwpPreserveLogger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveMdlList(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  _QWORD *v9; // rdi
  char *PoolWithTag; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  char *v13; // r14
  unsigned int v14; // ebp
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v8 = 0;
  v9 = a1;
  do
  {
    KsrMdlToMemoryRuns(v9, 0LL, 0LL, &v16);
    v8 += v16;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v8, 0x4B777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = PoolWithTag;
    v14 = v8;
    while ( v7 )
    {
      KsrMdlToMemoryRuns(v7, v13, v14, &v16);
      v14 -= v16;
      v7 = (_QWORD *)*v7;
      v13 += 8 * v16;
    }
    v12 = KsrPersistMemoryWithMetadata(EtwpKsrGuid, v11, v8, a2, a3, a4);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
