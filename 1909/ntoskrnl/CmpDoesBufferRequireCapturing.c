/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1406003F0
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14063DE1C (CmpCaptureKeyValueArray.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x140651798 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || qword_140463548 && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
