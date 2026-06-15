/*
 * XREFs of ?GetBackgroundTaskId@CProcess@@UEAA?AU_GUID@@XZ @ 0x18001B070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CProcess::GetBackgroundTaskId(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[33];
  return result;
}
