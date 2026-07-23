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
 *     EtwpGuidEntryCompare @ 0x180086E60 (EtwpGuidEntryCompare.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *a1)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 && EtwpGuidEntryTable.Root )
    Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = EtwpGuidEntryCompare(a1, Root);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
        goto LABEL_10;
      }
      i = (_QWORD *)Root;
    }
    v6 = *(_QWORD *)Root;
LABEL_10:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( i )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(i) )
    {
      v8 = (_QWORD **)i[1];
      if ( v8 )
      {
        v9 = *v8;
        for ( i = (_QWORD *)i[1]; v9; v9 = (_QWORD *)*v9 )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v7 )
            break;
          v7 = i;
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
