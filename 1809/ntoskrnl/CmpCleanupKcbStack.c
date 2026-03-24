/*
 * XREFs of CmpCleanupKcbStack @ 0x140643FB0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407307B8 (CmpStartSiloRegistryNamespace.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A18 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
