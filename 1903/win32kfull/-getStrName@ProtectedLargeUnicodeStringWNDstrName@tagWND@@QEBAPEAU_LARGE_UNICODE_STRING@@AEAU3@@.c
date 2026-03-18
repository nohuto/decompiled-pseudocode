/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0020520
 * Callers:
 *     NtUserInternalGetWindowText @ 0x1C00203E0 (NtUserInternalGetWindowText.c)
 *     DefSetText @ 0x1C0022B3C (DefSetText.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C01F4DB4 (_GetAltTabInfo.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  struct _LARGE_UNICODE_STRING *result; // rax

  *((_QWORD *)a2 + 1) = *(_QWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this - 18) + 184LL);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  result = a2;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_QWORD *)this - 18) + 188LL) ^ (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  return result;
}
