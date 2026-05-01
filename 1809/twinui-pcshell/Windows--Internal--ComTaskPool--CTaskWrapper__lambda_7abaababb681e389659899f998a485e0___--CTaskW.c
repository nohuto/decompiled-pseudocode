/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7abaababb681e389659899f998a485e0___::CTaskWrapper__lambda_7abaababb681e389659899f998a485e0_____lambda_7abaababb681e389659899f998a485e0___ @ 0x1801CDD4C
 * Callers:
 *     ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1801DA760 (-DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7abaababb681e389659899f998a485e0___::CTaskWrapper__lambda_7abaababb681e389659899f998a485e0_____lambda_7abaababb681e389659899f998a485e0___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2[1];
  a2[1] = 0LL;
  a1[3] = v4;
  a1[4] = a2[2];
  *a1 = off_1803DDE18;
  return a1;
}
