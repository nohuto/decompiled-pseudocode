/*
 * XREFs of ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14014F098
 * Callers:
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 *     MiStoreWriteIssue @ 0x14014D6D0 (MiStoreWriteIssue.c)
 *     SmPageRead @ 0x14014F88C (SmPageRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKeyConvert(union _MM_STORE_KEY *a1, union _SM_PAGE_KEY *a2)
{
  unsigned __int64 EntireKey; // r8
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  EntireKey = a1->EntireKey;
  v3 = a1->EntireKey >> 60;
  if ( v3 == 15 || (EntireKey & 0xFFFFFFFFFFFFFFFLL) > 0xFFFFFFF )
  {
    result = 3221226537LL;
    if ( v3 != 15 )
      return 3221226124LL;
  }
  else
  {
    *(_DWORD *)a2 = EntireKey & 0xFFFFFFF | ((_DWORD)v3 << 28);
    return 0LL;
  }
  return result;
}
