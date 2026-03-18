/*
 * XREFs of DCompositionSessionUninitialize @ 0x1C0059620
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RemoveAnyObject@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@QEAAPEAUMaterialProperty@@XZ @ 0x1C005CCFC (-RemoveAnyObject@-$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@Direct.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C005CD5C (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 */

void __fastcall DCompositionSessionUninitialize(__int64 a1, unsigned int a2)
{
  MaterialProperty *v2; // rax
  unsigned int v3; // edx

  if ( Table )
  {
    while ( 1 )
    {
      v2 = (MaterialProperty *)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject();
      if ( !v2 )
        break;
      MaterialProperty::`scalar deleting destructor'(v2, v3);
    }
    Win32FreePool((__int64)Table);
    Table = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)Resource);
    Resource = 0LL;
  }
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      a2);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool((__int64)DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
}
