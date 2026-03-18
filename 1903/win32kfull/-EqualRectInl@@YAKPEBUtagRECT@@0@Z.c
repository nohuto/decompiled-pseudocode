/*
 * XREFs of ?EqualRectInl@@YAKPEBUtagRECT@@0@Z @ 0x1C0028DB8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EqualRectInl(const struct tagRECT *a1, const struct tagRECT *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)&a1->left - *(_QWORD *)&a2->left;
  if ( *(_QWORD *)&a1->left == *(_QWORD *)&a2->left )
    v2 = *(_QWORD *)&a1->right - *(_QWORD *)&a2->right;
  return v2 == 0;
}
