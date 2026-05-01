/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802DE428
 * Callers:
 *     shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802DE0E8 (shell--TaskScheduler--AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___.c)
 * Callees:
 *     ??0?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18010784C (--0-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Co.c)
 *     ??0CRunnableTask@@IEAA@W4RUN_TASK_FLAGS@@@Z @ 0x1802DE638 (--0CRunnableTask@@IEAA@W4RUN_TASK_FLAGS@@@Z.c)
 */

_QWORD *__fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___(
        _QWORD *a1,
        __int64 *a2)
{
  CRunnableTask::CRunnableTask();
  *a1 = &off_1803EDA58;
  a1[1] = &CRunnableTask::`vftable'{for `IServiceProvider'};
  a1[2] = &CRunnableTask::`vftable'{for `IQueryContinue'};
  a1[3] = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  a1[4] = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
    a1 + 9,
    a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
    a1 + 10,
    a2 + 1);
  return a1;
}
