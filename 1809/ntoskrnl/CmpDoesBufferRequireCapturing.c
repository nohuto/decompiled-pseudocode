/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1405CD49C
 * Callers:
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1405CD130 (CmpCaptureKeyValueArray.c)
 *     NtRenameKey @ 0x1407E9BA0 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x1405DF288 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || qword_140437C28 && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
