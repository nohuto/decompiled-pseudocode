/*
 * XREFs of ndisIfFindInterfaceByInterfaceGuid @ 0x1C003EAAC
 * Callers:
 *     ndisIfAliasChange @ 0x1C0067820 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C009CDB4 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterfaceByInterfaceGuid(struct _GUID *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rdi

  Flink = ndisIfList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfList )
  {
    if ( !(unsigned int)ndisCompareGuid(a1, (const struct _GUID *)((char *)&Flink[-44].Blink + 4)) )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v3;
}
