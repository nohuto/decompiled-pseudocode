/*
 * XREFs of ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C0022DDC
 * Callers:
 *     DefSetText @ 0x1C0022B3C (DefSetText.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(a1 - 18);
  v3 = 0LL;
  if ( a2 )
    v3 = a2 + *(a1 - 17) - v2;
  *(_QWORD *)(v2 + 192) = v3;
  result = a2;
  *a1 = a2;
  return result;
}
