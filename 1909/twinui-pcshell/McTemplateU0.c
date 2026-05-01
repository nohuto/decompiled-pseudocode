/*
 * XREFs of McTemplateU0 @ 0x180068744
 * Callers:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800686D4 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801384F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1803F5370 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x1803F54F0 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1803F6A98 (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1803F7390 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1803F8350 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1803F85C0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?Show@CDragVisual@@UEAAXXZ @ 0x1803F8890 (-Show@CDragVisual@@UEAAXXZ.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1803F9EB8 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x18003AA0C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(MICROSOFT_TWINUI_PUBLISHER_Context, a2, a3, 1u, &v4);
}
