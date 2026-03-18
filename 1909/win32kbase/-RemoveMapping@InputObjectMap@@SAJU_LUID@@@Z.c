/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z @ 0x1C01C6260
 * Callers:
 *     NtUserRemoveVisualIdentifier @ 0x1C01192B0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0037310 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z @ 0x1C01C60EC (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID a1, struct _EX_PUSH_LOCK *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct InputObjectMapEntry *Entry; // rbx
  struct InputObjectMapEntry *i; // rdx
  unsigned int v8; // ebx
  __int64 v9; // [rsp+38h] [rbp+10h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, a2);
  Entry = InputObjectMap::FindEntry(a1);
  if ( !Entry )
  {
    v8 = -1073741275;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(*((_QWORD *)Entry + 3) + 64LL) != PsGetCurrentProcess(v4, v3) )
  {
    v8 = -1073741790;
LABEL_11:
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    return v8;
  }
  v9 = *((_QWORD *)Entry + 1) & (-1LL << (dword_1C02157CC & 0x1F));
  for ( i = (struct InputObjectMapEntry *)((char *)qword_1C02157D0
                                         + 8
                                         * ((37
                                           * (BYTE6(v9)
                                            + 37
                                            * (BYTE5(v9)
                                             + 37
                                             * (BYTE4(v9)
                                              + 37
                                              * (BYTE3(v9)
                                               + 37
                                               * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                                           + HIBYTE(v9)) & (((unsigned int)dword_1C02157CC >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct InputObjectMapEntry **)i )
  {
    if ( *(struct InputObjectMapEntry **)i == Entry )
    {
      *(_QWORD *)i = *(_QWORD *)Entry;
      --InputObjectMap::s_hashTable;
      *(_QWORD *)Entry |= 0x8000000000000002uLL;
      break;
    }
  }
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)Entry + 3));
  ExFreePoolWithTag(Entry, 0);
  return 0LL;
}
