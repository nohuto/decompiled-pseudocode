/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x1405FE9C0
 * Callers:
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14063AD8C (CmpCaptureKeyValueArray.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 * Callees:
 *     CmpIsBufferGloballyVisible @ 0x14066CA08 (CmpIsBufferGloballyVisible.c)
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, __int64 a2)
{
  return a1 || qword_140463868 && !(unsigned __int8)CmpIsBufferGloballyVisible(a2);
}
