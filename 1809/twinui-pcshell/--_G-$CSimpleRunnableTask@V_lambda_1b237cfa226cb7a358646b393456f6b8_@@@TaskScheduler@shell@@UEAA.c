/*
 * XREFs of ??_G?$CSimpleRunnableTask@V_lambda_1b237cfa226cb7a358646b393456f6b8_@@@TaskScheduler@shell@@UEAAPEAXI@Z @ 0x1802DEB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x1802DE92C (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall shell::TaskScheduler::CSimpleRunnableTask<_lambda_1b237cfa226cb7a358646b393456f6b8_>::`scalar deleting destructor'(
        CRunnableTask *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)this + 9);
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
