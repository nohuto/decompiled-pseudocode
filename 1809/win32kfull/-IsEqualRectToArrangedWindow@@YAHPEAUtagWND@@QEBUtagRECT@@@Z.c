/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01E51C8
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

__int64 __fastcall IsEqualRectToArrangedWindow(struct tagWND *a1, const struct tagRECT *const a2)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF
  __int16 v10; // [rsp+32h] [rbp+Ah]
  __int16 v11; // [rsp+34h] [rbp+Ch]
  __int16 v12; // [rsp+36h] [rbp+Eh]

  v2 = *((_QWORD *)a1 + 5);
  v5 = *(_QWORD *)&a2->left - *(_QWORD *)(v2 + 88);
  if ( !v5 )
    v5 = *(_QWORD *)&a2->right - *(_QWORD *)(v2 + 96);
  v6 = 0;
  if ( !v5 )
    return 1;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v9) )
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( a2->top - v11 == v7[23] && a2->left - v9 == v7[22] && a2->right + v10 == v7[24] && a2->bottom + v12 == v7[25] )
      return 1;
  }
  return v6;
}
