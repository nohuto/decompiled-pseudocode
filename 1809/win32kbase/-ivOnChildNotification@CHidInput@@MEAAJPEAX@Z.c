/*
 * XREFs of ?ivOnChildNotification@CHidInput@@MEAAJPEAX@Z @ 0x1C014D8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall CHidInput::ivOnChildNotification(CHidInput *this, void *a2)
{
  unsigned int v3; // esi
  struct DEVICEINFO *v5; // rbx
  unsigned int v6; // eax

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xBu,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  if ( a2 == (void *)1 )
  {
    v5 = CBaseInput::_spDevList;
    while ( v5 )
    {
      CBaseInput::ivRootPnpCreated(this, *((struct RawInputManagerDeviceObject **)v5 + 4));
      v6 = CBaseInput::ivRootPnp(this, v5, 2u);
      v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7);
      v3 = v6;
    }
    *((_BYTE *)this + 1072) = 1;
  }
  else if ( a2 == (void *)2 )
  {
    *((_BYTE *)this + 1072) = 0;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xCu,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  qword_1C01D0C68 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
