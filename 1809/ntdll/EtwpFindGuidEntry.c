/*
 * XREFs of EtwpFindGuidEntry @ 0x180020FF4
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180050DC4 (EtwpReferenceUmGuidEntry.c)
 *     EtwpGuidEntryCompare @ 0x180086E50 (EtwpGuidEntryCompare.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  int v6; // esi
  _QWORD *i; // rdi
  int v8; // eax
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = EtwpGuidEntryTable;
  if ( (qword_180166410 & 1) != 0 && EtwpGuidEntryTable )
    v5 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
  v6 = qword_180166410 & 1;
  i = 0LL;
  while ( v5 )
  {
    v8 = EtwpGuidEntryCompare(a1, v5);
    if ( v8 >= 0 )
    {
      if ( v8 > 0 )
      {
        v9 = *(_QWORD *)(v5 + 8);
        goto LABEL_10;
      }
      i = (_QWORD *)v5;
    }
    v9 = *(_QWORD *)v5;
LABEL_10:
    if ( v6 && v9 )
      v5 ^= v9;
    else
      v5 = v9;
  }
  if ( i )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(i) )
    {
      v11 = (_QWORD **)i[1];
      if ( v11 )
      {
        v12 = *v11;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
      if ( !i || *a1 != i[3] || a1[1] != i[4] )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
