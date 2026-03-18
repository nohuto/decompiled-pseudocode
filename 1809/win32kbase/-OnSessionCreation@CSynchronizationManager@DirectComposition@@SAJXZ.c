/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C005D208
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C005D120 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  struct _RTL_GENERIC_TABLE *v0; // rax
  struct _RTL_GENERIC_TABLE *v1; // rdi
  NTSTATUS v2; // ebx
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rsi

  v0 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL, 0x65734344u);
  v1 = v0;
  if ( v0 )
    RtlInitializeGenericTable(
      v0,
      DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
      DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry,
      DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
  else
    v1 = 0LL;
  v2 = v1 == 0LL ? 0xC0000017 : 0;
  if ( v1 )
  {
    v3 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v4 = v3;
    if ( v3 )
      memset(v3, 0, sizeof(struct _ERESOURCE));
    else
      v4 = 0LL;
    if ( !v4 )
      v2 = -1073741801;
    if ( v2 < 0 )
      goto LABEL_16;
    v2 = ExInitializeResourceLite(v4);
    if ( v2 >= 0 )
    {
LABEL_10:
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 0LL;
      DirectComposition::CSynchronizationManager::s_pSyncTable = v1;
      DirectComposition::CSynchronizationManager::s_pSyncTableLock = v4;
      return (unsigned int)v2;
    }
    Win32FreePool((__int64)v4);
  }
  v4 = 0LL;
  if ( v2 >= 0 )
    goto LABEL_10;
LABEL_16:
  if ( v1 )
    Win32FreePool((__int64)v1);
  return (unsigned int)v2;
}
