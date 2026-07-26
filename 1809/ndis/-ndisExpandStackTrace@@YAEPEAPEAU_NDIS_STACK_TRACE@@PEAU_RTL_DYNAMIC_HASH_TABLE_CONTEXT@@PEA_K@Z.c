/*
 * XREFs of ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C0071A78
 * Callers:
 *     ndisCaptureStackTrace @ 0x1C0071B98 (ndisCaptureStackTrace.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

unsigned __int8 __fastcall ndisExpandStackTrace(
        _RTL_DYNAMIC_HASH_TABLE_ENTRY **a1,
        struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT *a2,
        unsigned __int64 *a3)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rsi
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v9; // rdi

  v3 = *a1;
  v7 = (LODWORD((*a1)[1].Linkage.Flink) >> 30) + 1;
  if ( LODWORD((*a1)[1].Linkage.Flink) >> 30 == 3
    || (PoolWithTag = ExAllocatePoolWithTag(
                        NonPagedPoolNx,
                        32 * ((LODWORD((*a1)[1].Linkage.Flink) >> 30) + 4),
                        0x6B73444Eu),
        (v9 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)PoolWithTag) == 0LL) )
  {
    byte_1C00A017A = 1;
    return 0;
  }
  else
  {
    PoolWithTag[6] ^= (PoolWithTag[6] ^ LODWORD(v3[1].Linkage.Flink)) & 0x3FFFFFFF;
    PoolWithTag[6] = (LODWORD(v3[1].Linkage.Flink) + 0x40000000) ^ (PoolWithTag[6] ^ LODWORD(v3[1].Linkage.Flink)) & 0x3FFFFFFF;
    *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)a3;
    *((_OWORD *)PoolWithTag + 3) = *((_OWORD *)a3 + 1);
    memmove(PoolWithTag + 16, &v3[1].Linkage.Blink, 32LL * v7);
    RtlRemoveEntryHashTable(&HashTable, v3, a2);
    RtlInsertEntryHashTable(&HashTable, v9, v3->Signature, a2);
    *a1 = v9;
    ExFreePoolWithTag(v3, 0);
    return 1;
  }
}
