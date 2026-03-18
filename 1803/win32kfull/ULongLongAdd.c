/*
 * XREFs of ULongLongAdd @ 0x1C012208C
 * Callers:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rax
  ULONGLONG v4; // rdx
  HRESULT result; // eax

  v3 = ullAugend + ullAddend;
  v4 = -1LL;
  if ( v3 >= ullAugend )
    v4 = v3;
  result = v3 < ullAugend ? 0x80070216 : 0;
  *pullResult = v4;
  return result;
}
