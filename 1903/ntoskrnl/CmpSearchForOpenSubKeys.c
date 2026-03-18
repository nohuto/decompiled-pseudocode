/*
 * XREFs of CmpSearchForOpenSubKeys @ 0x14069A650
 * Callers:
 *     CmpFreezeHive @ 0x14069A5DC (CmpFreezeHive.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083D32C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14069B484 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDumpKeyBodyList @ 0x14082B050 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(); // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  v8 = a1;
  v9[0] = 0LL;
  v9[1] = a3;
  if ( a2 )
  {
    v5 = (unsigned int)(a2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
        __fastfail(5u);
      v6 = CmpSearchAndTagNoDelayCloseWorker;
    }
    else
    {
      v6 = CmpSearchAndRehashWorker;
    }
  }
  else
  {
    v3 = 1;
    v6 = CmpSearchAndCountWorker;
    CmpDumpKeyBodyList(a1, v9);
  }
  LOBYTE(v5) = v3;
  ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    v5,
    v6,
    &v8);
  return LODWORD(v9[0]);
}
