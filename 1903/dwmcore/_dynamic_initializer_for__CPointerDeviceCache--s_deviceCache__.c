/*
 * XREFs of _dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__ @ 0x1800033E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800D7A04 (--0-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEVICE_INFO@@@std@@@3@@st.c)
 */

int dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__()
{
  std::map<void *,DEVICE_INFO>::map<void *,DEVICE_INFO>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__);
}
