/*
 * XREFs of KeAddTriageDumpDataBlock @ 0x140291260
 * Callers:
 *     <none>
 * Callees:
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     KiValidateTriageDumpDataArray @ 0x140293200 (KiValidateTriageDumpDataArray.c)
 */

NTSTATUS __stdcall KeAddTriageDumpDataBlock(
        PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
        ULONG MaxDataSize,
        PVOID Address,
        SIZE_T Size)
{
  ULONG v4; // edi
  ULONG VirtMemSize; // r10d
  ULONG NumBlocksUsed; // r9d
  char *v11; // rdx
  char *v12; // r8
  unsigned __int64 v13; // rcx
  SIZE_T v15; // rdx

  v4 = 0;
  if ( KtriageDumpDataArray
    && (unsigned __int8)KiValidateTriageDumpDataArray(KtriageDumpDataArray, MaxDataSize, 0LL)
    && KiIsAddressRangeValid((__int64)Address, Size) )
  {
    if ( !Size )
      return 0;
    VirtMemSize = KtriageDumpDataArray->VirtMemSize;
    if ( VirtMemSize < MaxDataSize )
    {
      NumBlocksUsed = KtriageDumpDataArray->NumBlocksUsed;
      v11 = (char *)Address + Size;
      if ( NumBlocksUsed )
      {
        do
        {
          v12 = (char *)KtriageDumpDataArray->Blocks[v4].Address;
          v13 = (unsigned __int64)&v12[KtriageDumpDataArray->Blocks[v4].Size];
          if ( (unsigned __int64)Address < v13 && v11 > v12 )
          {
            if ( Address < v12 )
            {
              if ( (unsigned __int64)v11 <= v13 )
                v11 = (char *)KtriageDumpDataArray->Blocks[v4].Address;
            }
            else
            {
              if ( (unsigned __int64)v11 <= v13 )
                return 0;
              Address = &v12[KtriageDumpDataArray->Blocks[v4].Size];
            }
          }
          ++v4;
        }
        while ( v4 < NumBlocksUsed );
      }
      if ( NumBlocksUsed == KtriageDumpDataArray->NumBlocksTotal )
        return -1073741789;
      v15 = v11 - (_BYTE *)Address;
      if ( v15 > MaxDataSize - VirtMemSize )
        return -1073741670;
      KtriageDumpDataArray->Blocks[v4].Address = Address;
      KtriageDumpDataArray->Blocks[v4].Size = v15;
      ++KtriageDumpDataArray->NumBlocksUsed;
      KtriageDumpDataArray->VirtMemSize += v15;
      return 0;
    }
  }
  return -1073741811;
}
