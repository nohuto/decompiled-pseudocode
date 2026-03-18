/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x140135940
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1400021D0 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1401359D0 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  char *v6; // rbx
  char *v7; // rsi
  char *v8; // rbp
  __int64 v9; // rax
  char *v11; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  if ( (unsigned int)FindNodeOrParent((__int64)Table, (__int64)Buffer, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = (char *)v9;
  }
  while ( v9 && Table->CompareRoutine(Table, Buffer, (void *)(v9 + 32)) == GenericEqual );
  *RestartKey = v8;
  return v7 + 32;
}
