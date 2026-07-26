/*
 * XREFs of NdisInitializeWrapper @ 0x1C00F0B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v7; // rbp
  PVOID *PoolWithTag; // rax
  PVOID *v9; // rbx
  unsigned int v10; // r9d

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xAu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids);
  *NdisWrapperHandle = 0LL;
  v7 = *(unsigned __int16 *)SystemSpecific2;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 26, 0x6877444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *NdisWrapperHandle = PoolWithTag;
    memset(PoolWithTag, 0, v7 + 26);
    *v9 = SystemSpecific1;
    v9[2] = v9 + 3;
    v10 = *(unsigned __int16 *)SystemSpecific2;
    *((_WORD *)v9 + 4) = v10;
    *((_WORD *)v9 + 5) = v10 + 2;
    memmove(v9 + 3, *((const void **)SystemSpecific2 + 1), v10);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids);
}
