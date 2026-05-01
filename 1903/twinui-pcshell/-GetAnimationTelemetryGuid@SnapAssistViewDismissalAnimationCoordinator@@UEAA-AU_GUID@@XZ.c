/*
 * XREFs of ?GetAnimationTelemetryGuid@SnapAssistViewDismissalAnimationCoordinator@@UEAA?AU_GUID@@XZ @ 0x180085880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall SnapAssistViewDismissalAnimationCoordinator::GetAnimationTelemetryGuid(
        SnapAssistViewDismissalAnimationCoordinator *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_1804B5A90;
  return result;
}
