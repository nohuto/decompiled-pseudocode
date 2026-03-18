/*
 * XREFs of ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C00F5904
 * Callers:
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
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

  v2 = *(a1 - 16);
  v3 = 0LL;
  if ( a2 )
    v3 = a2 + *(a1 - 15) - v2;
  *(_QWORD *)(v2 + 192) = v3;
  result = a2;
  *a1 = a2;
  return result;
}
