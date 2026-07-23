/*
 * XREFs of MiEmptyPte @ 0x1401400A0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiEmptyWorkingSetHelper @ 0x1401400E8 (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, unsigned __int64 a2, int a3)
{
  _BYTE *v3; // r9
  unsigned __int64 v4; // r11
  __int64 v5; // r10
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE **)(a1 + 168);
  v4 = a2;
  v5 = a1;
  if ( v3[1] )
  {
    if ( !a3 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        goto LABEL_3;
    }
  }
  else if ( !*v3 || !a3 )
  {
LABEL_3:
    MiEmptyWorkingSetHelper(*(_QWORD *)(v5 + 24), v4, v3 + 8);
  }
  return 0LL;
}
