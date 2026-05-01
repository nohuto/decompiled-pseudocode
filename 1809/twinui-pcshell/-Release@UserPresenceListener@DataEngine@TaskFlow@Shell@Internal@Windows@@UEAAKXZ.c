/*
 * XREFs of ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x1801AE710
 * Callers:
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ @ 0x1800A0330 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ @ 0x1800A0340 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x1800A0350 (-Release@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(this);
}
