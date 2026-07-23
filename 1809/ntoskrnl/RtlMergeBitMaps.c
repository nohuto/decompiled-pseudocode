/*
 * XREFs of RtlMergeBitMaps @ 0x14000FA94
 * Callers:
 *     HvUnCOWReconciledPages @ 0x14000EEC0 (HvUnCOWReconciledPages.c)
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     MiSelectRelocationStartHint @ 0x140650D84 (MiSelectRelocationStartHint.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 *     HvFoldBackUnreconciledData @ 0x1407FBF28 (HvFoldBackUnreconciledData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r11

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v4 = 0LL;
  while ( v2 )
  {
    result = *((_QWORD *)a2 + 1);
    if ( v2 < 0x20 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) |= *(_DWORD *)(result + 4 * v4) & ((1LL << v2) - 1);
      v2 = 0;
    }
    else
    {
      v2 -= 32;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) |= *(_DWORD *)(result + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return result;
}
