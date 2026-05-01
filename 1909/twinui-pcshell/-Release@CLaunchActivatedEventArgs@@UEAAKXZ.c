/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x18007D560
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1800E4610 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1800E4620 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1800E4630 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1800E4640 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x1800E4650 (-Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1800E4660 (-Release@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ @ 0x1800E4670 (-Release@CLaunchActivatedEventArgs@@WJA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ @ 0x1800E4680 (-Release@CLaunchActivatedEventArgs@@WMA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x1800E4690 (-Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1800E46A0 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ @ 0x1800E46B0 (-Release@CLaunchActivatedEventArgs@@WOA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x1800E46C0 (-Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::Release(this);
}
