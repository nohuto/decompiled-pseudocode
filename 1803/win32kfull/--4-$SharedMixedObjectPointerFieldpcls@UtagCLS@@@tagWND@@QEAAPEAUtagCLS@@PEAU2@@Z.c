/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F05FC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ReferenceClass @ 0x1C00F03B0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(*(a1 - 9) + 128LL) = v2;
  result = a2;
  *a1 = a2;
  return result;
}
