/*
 * XREFs of ?GetThreadId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18008E970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetThreadId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 10);
  return 0LL;
}
