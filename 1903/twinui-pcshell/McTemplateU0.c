/*
 * XREFs of McTemplateU0 @ 0x180066634
 * Callers:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800665C4 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801190B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1803D5D70 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x1803D5EF0 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1803D7498 (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1803D7D90 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1803D8D50 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1803D8FC0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?Show@CDragVisual@@UEAAXXZ @ 0x1803D9290 (-Show@CDragVisual@@UEAAXXZ.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1803DA8B8 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x180031FDC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite(MICROSOFT_TWINUI_PUBLISHER_Context, a2, a3, 1u, &v4);
}
