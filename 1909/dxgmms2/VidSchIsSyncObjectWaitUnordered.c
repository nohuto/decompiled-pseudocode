/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1C007FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v3; // edx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax

  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 44);
  if ( (unsigned int)(v3 - 4) > 1 )
  {
    if ( v3 != 2 )
      return 0;
    v5 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL) : *(_QWORD *)(a1 + 64);
    if ( v5 >= a2 )
      return 0;
  }
  return 1;
}
