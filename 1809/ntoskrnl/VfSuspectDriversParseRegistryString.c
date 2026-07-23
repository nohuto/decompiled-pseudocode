/*
 * XREFs of VfSuspectDriversParseRegistryString @ 0x1409F9948
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1409B8610 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x1409226E0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140929154 (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409384B4 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x140938770 (VfSuspectDriversInsert.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140938D20 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rcx
  unsigned __int64 Entry; // rax
  BOOL v2; // ebp
  __int64 *v3; // rsi
  __int64 v4; // r8
  unsigned __int16 v5; // dx
  __int64 *v6; // rbx
  unsigned __int16 v7; // dx
  int v8; // edx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  const void *v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v2 = (VfOptionFlags & 1) == 0;
  v3 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  if ( MmVerifyDriverBuffer < v3 )
  {
    v4 = 0x100002601LL;
    while ( 1 )
    {
      v5 = *(_WORD *)v0;
      if ( *(_WORD *)v0 <= 0x20u && (LODWORD(Entry) = v5, _bittest64(&v4, v5)) || v5 == 12288 )
      {
        v6 = v0;
        goto LABEL_30;
      }
      if ( v5 == 42 && v2 )
      {
        ViVerifyAllDrivers = 1;
        return Entry;
      }
      v6 = (__int64 *)((char *)v0 + 2);
      if ( v5 == 34 )
      {
        v0 = (__int64 *)((char *)v0 + 2);
        v6 = (__int64 *)((char *)v6 + 2);
        if ( v6 >= v3 )
          return Entry;
        do
        {
          if ( *(_WORD *)v6 == 34 )
            break;
          v6 = (__int64 *)((char *)v6 + 2);
        }
        while ( v6 < v3 );
        if ( v6 >= v3 )
          return Entry;
      }
      else
      {
        while ( v6 < v3 )
        {
          v7 = *(_WORD *)v6;
          if ( *(_WORD *)v6 <= 0x20u )
          {
            LODWORD(Entry) = v7;
            if ( _bittest64(&v4, v7) )
              break;
          }
          if ( v7 == 12288 )
            break;
          v6 = (__int64 *)((char *)v6 + 2);
        }
      }
      v8 = 2 * (((char *)v6 - (char *)v0) >> 1);
      if ( v8 )
        break;
LABEL_30:
      v0 = (__int64 *)((char *)v6 + 2);
      if ( (__int64 *)((char *)v6 + 2) >= v3 )
        return Entry;
    }
    LODWORD(Entry) = v8 + 2;
    LOWORD(v13[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
    WORD1(v13[0]) = v8 + 2;
    if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
      return Entry;
    v13[1] = v0;
    if ( v2 )
    {
      Entry = (unsigned __int64)VfSuspectDriversAllocateEntry(v13);
      v9 = (_QWORD *)Entry;
      if ( Entry )
      {
        VfDriverLock();
        VfSuspectDriversInsert(v9);
LABEL_27:
        LODWORD(Entry) = VfDriverUnlock();
      }
    }
    else
    {
      Entry = (unsigned __int64)VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v13, 0x44456656u);
      v10 = (_QWORD *)Entry;
      if ( Entry )
      {
        VfDriverLock();
        v11 = (_QWORD *)qword_14040E2F8;
        if ( *(__int64 **)qword_14040E2F8 != &VfExcludedDriversList )
          __fastfail(3u);
        *v10 = &VfExcludedDriversList;
        v10[1] = v11;
        *v11 = v10;
        qword_14040E2F8 = (__int64)v10;
        goto LABEL_27;
      }
    }
    v4 = 0x100002601LL;
    goto LABEL_30;
  }
  return Entry;
}
