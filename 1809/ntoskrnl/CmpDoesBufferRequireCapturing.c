/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1405CE49C
 * Callers:
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405CE130 (CmpCaptureKeyValueArray.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1405E0288 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || qword_140438CE8 && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
