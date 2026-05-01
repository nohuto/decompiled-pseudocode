/*
 * XREFs of ?OnPackageInstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationModel@Windows@@PEAUIPackageInstallingEventArgs@34@@Z @ 0x1801BDB20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::OnPackageInstalling(
        CortanaStoreAppExperienceManager *this,
        struct Windows::ApplicationModel::IPackageCatalog *a2,
        struct Windows::ApplicationModel::IPackageInstallingEventArgs *a3)
{
  CortanaStoreAppExperienceManager::CheckThread(this);
  return 0LL;
}
