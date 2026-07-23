/*
 * XREFs of RtlULongLongAdd @ 0x1400FC040
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rax
  ULONGLONG v4; // rdx
  NTSTATUS result; // eax

  v3 = ullAugend + ullAddend;
  v4 = -1LL;
  if ( v3 >= ullAugend )
    v4 = v3;
  result = v3 < ullAugend ? 0xC0000095 : 0;
  *pullResult = v4;
  return result;
}
