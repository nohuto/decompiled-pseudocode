/*
 * XREFs of ??_ESnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x18021A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180160954 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEve.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
    (__int64)this,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
