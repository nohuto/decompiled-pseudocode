/*
 * XREFs of ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01C9CC4
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01CA07C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01CAE78 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01C9BAC (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 */

void __fastcall _TTUpdateBestTarget(
        struct tagPNTRWINDOWHITTTESTARGS *a1,
        struct tagWND *a2,
        int a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5,
        int a6,
        struct tagRECT *a7,
        __int16 a8)
{
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  const struct _D3DMATRIX *v13; // rcx

  *((_QWORD *)a1 + 7) = *(_QWORD *)a2;
  v9 = a5;
  *((_DWORD *)a1 + 16) = a3;
  if ( !a5 )
    v9 = (struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  v10 = (struct tagRECT *)((char *)a1 + 68);
  *(struct tagRECT *)((char *)a1 + 68) = *v9;
  if ( a4 )
    *((struct tagPOINT *)a1 + 6) = *a4;
  if ( a6 )
    *((_DWORD *)a1 + 44) |= 1u;
  else
    *((_DWORD *)a1 + 44) &= ~1u;
  v11 = *((_DWORD *)a1 + 44);
  if ( a8 == 3 )
    v12 = v11 | 2;
  else
    v12 = v11 & 0xFFFFFFFD;
  *((_DWORD *)a1 + 44) = v12;
  if ( !(unsigned int)IsCompositionInputWindow(a2) )
    IntersectRect(v10, &v10->left, &a7->left);
  if ( *((_DWORD *)a1 + 21) )
  {
    v13 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 12);
    if ( v13 )
    {
      *((_DWORD *)a1 + 12) = (int)(float)((float)*((int *)a1 + 12) * v13->_11);
      *((_DWORD *)a1 + 13) = (int)(float)((float)*((int *)a1 + 13) * v13->_22);
      TransformRect(v13, v10, 0);
    }
  }
}
