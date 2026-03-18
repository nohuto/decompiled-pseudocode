/*
 * XREFs of XilDeviceSlot_PrepareHardware @ 0x1C0016444
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0015D88 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0048368 (XilCoreDeviceSlot_AllocateResources.c)
 */

__int64 __fastcall XilDeviceSlot_PrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  bool v3; // zf
  __int64 *v4; // rcx
  unsigned int Resources; // edi
  int v6; // r9d
  const char *v7; // rcx
  PVOID PoolWithTag; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1 + 16;
  v3 = *(_BYTE *)(a1 + 80) == 0;
  v4 = (__int64 *)(a1 + 16);
  if ( v3 )
  {
    Resources = XilCoreDeviceSlot_AllocateResources((__int64)v4);
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 16);
    return Resources;
  }
  Resources = XilDeviceSlot_AllocateSecureResources(v4);
  if ( (Resources & 0x80000000) == 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                    8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1),
                    0x49434858u);
    *(_QWORD *)(v2 + 8) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1));
      return Resources;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        2u,
        0xAu,
        0x10u,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        Resources);
    v6 = 281;
    v7 = "Allocation for LocalUsbDeviceHandleArray failed";
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        2u,
        0xAu,
        0xFu,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        Resources);
    v6 = 262;
    v7 = "XilDeviceSlot_AllocateSecureResources failed";
  }
  Debug_FreAssertMsg((__int64)v7, 0, (int)&Context.EnableKeyWords + 4, v6);
  return Resources;
}
