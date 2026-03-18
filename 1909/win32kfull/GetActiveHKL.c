/*
 * XREFs of GetActiveHKL @ 0x1C0055404
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0055358 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     EditionGetActiveHKL @ 0x1C00553F0 (EditionGetActiveHKL.c)
 *     EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0057BC0 (EditionFinalizeKoreanImeCompStrOnMouseClick.c)
 * Callees:
 *     <none>
 */

__int64 GetActiveHKL()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gpqForeground
    && ((v0 = *(_QWORD *)(gpqForeground + 120LL)) != 0
     && (v1 = *(_QWORD *)(v0 + 16)) != 0
     && (v2 = *(_QWORD *)(v1 + 432)) != 0
     || (v4 = *(_QWORD *)(gpqForeground + 128LL)) != 0
     && (v5 = *(_QWORD *)(v4 + 16)) != 0
     && (v2 = *(_QWORD *)(v5 + 432)) != 0) )
  {
    return *(_QWORD *)(v2 + 40);
  }
  else
  {
    return _GetKeyboardLayout(0LL);
  }
}
