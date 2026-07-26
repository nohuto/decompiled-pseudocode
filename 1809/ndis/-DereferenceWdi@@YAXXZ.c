/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1C0107808
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C0107B00 (NdisMDeregisterWdiMiniportDriver.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0107B70 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void DereferenceWdi(void)
{
  bool v0; // al
  KLockHolder v1; // [rsp+20h] [rbp-28h] BYREF

  v1.m_State = Unlocked;
  v1.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v1.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v1);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent(&g_WdiLoadInProgress);
    v0 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v0 )
    {
      KLockHolder::ReleaseExclusive(&v1);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xEu, &WPP_ca1578668c823507ab018ed94525a77c_Traceguids, &DriverServiceName.Length);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_Z(0xFu, &WPP_ca1578668c823507ab018ed94525a77c_Traceguids, &DriverServiceName.Length);
      KLockHolder::AcquireExclusive(&v1);
    }
    else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_(0x10u, &WPP_ca1578668c823507ab018ed94525a77c_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
  }
  KLockHolder::~KLockHolder(&v1);
}
