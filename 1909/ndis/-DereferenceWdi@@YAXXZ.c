/*
 * XREFs of ?DereferenceWdi@@YAXXZ @ 0x1C0127BD8
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C0127FA0 (NdisMDeregisterWdiMiniportDriver.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0128010 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void DereferenceWdi(void)
{
  int v0; // edx
  bool v1; // al
  KLockHolder v2; // [rsp+30h] [rbp-28h] BYREF

  v2.m_State = Unlocked;
  v2.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v2.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v2);
  if ( !--g_WdiRefCount )
  {
    g_WdiLoadState = 3;
    KeClearEvent(&g_WdiLoadInProgress);
    v1 = g_WdiLoadedByNdis;
    g_WdiLoadedByNdis = 0;
    if ( v1 )
    {
      KLockHolder::ReleaseExclusive(&v2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids,
          &DriverServiceName.Length);
      ZwUnloadDriver((PUNICODE_STRING)&DriverServiceName);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids,
          &DriverServiceName.Length);
      KLockHolder::AcquireExclusive(&v2);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v0,
        1,
        16,
        (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids);
    }
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
  }
  KLockHolder::~KLockHolder(&v2);
}
