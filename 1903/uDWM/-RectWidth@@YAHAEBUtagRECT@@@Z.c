/*
 * XREFs of ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x1800796B0
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectWidth(const struct tagRECT *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = a1->right - a1->left;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  return result;
}
