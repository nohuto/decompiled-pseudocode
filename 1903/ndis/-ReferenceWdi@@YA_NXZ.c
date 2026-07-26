/*
 * XREFs of ?ReferenceWdi@@YA_NXZ @ 0x1C0127D54
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0128010 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C007DD3C (WPP_RECORDER_SF_Zd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C0119408 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

char ReferenceWdi(void)
{
  bool v0; // di
  char v1; // bl
  unsigned int v2; // eax
  NTSTATUS Driver; // eax
  int v4; // edx
  KLockHolder v6; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)&g_WdiLoadLock;
  v6.m_Region.m_Entered = 0;
  v1 = 1;
  while ( 1 )
  {
    KLockHolder::AcquireExclusive(&v6);
    if ( g_WdiLoadState == 3 )
      goto LABEL_6;
    v2 = g_WdiRefCount + 1;
    g_WdiRefCount = v2;
    if ( v2 == 1 )
      break;
    if ( g_WdiLoadState == 2 )
      goto LABEL_19;
    g_WdiRefCount = v2 - 1;
LABEL_6:
    KLockHolder::ReleaseExclusive(&v6);
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&g_WdiLoadInProgress);
  }
  KeClearEvent(&g_WdiLoadInProgress);
  g_WdiLoadState = 1;
  KLockHolder::ReleaseExclusive(&v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids,
      &DriverServiceName.Length);
  Driver = ZwLoadDriver((PUNICODE_STRING)&DriverServiceName);
  if ( Driver == -1073741554 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        1,
        11,
        (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids);
    }
    goto LABEL_18;
  }
  if ( Driver >= 0 )
  {
    v0 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Z(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids,
        &DriverServiceName.Length);
LABEL_18:
    KLockHolder::AcquireExclusive(&v6);
    g_WdiLoadState = 2;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
    g_WdiLoadedByNdis = v0;
    KLockHolder::ReleaseExclusive(&v6);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_ca1578668c823507ab018ed94525a77c_Traceguids,
        &DriverServiceName.Length,
        Driver);
    KLockHolder::AcquireExclusive(&v6);
    --g_WdiRefCount;
    g_WdiLoadState = 0;
    KeSetEvent(&g_WdiLoadInProgress, 0, 0);
    KLockHolder::ReleaseExclusive(&v6);
    v1 = 0;
  }
LABEL_19:
  KLockHolder::~KLockHolder(&v6);
  return v1;
}
