/*
 * XREFs of ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x180079698
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectHeight(const struct tagRECT *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = a1->bottom - a1->top;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  return result;
}
