/*
 * XREFs of ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C00185C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DxgkReferenceCompositionObject(void *a1, ACCESS_MASK a2, int a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = DxgkCompositionObject::ResolveHandle(a1, a2, a4, a3, v6);
  if ( (int)result >= 0 )
    *a5 = v6[0];
  return result;
}
