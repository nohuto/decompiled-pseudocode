/*
 * XREFs of vFindTAndB @ 0x1C0226FF4
 * Callers:
 *     vComputeSimulatedGLYPHDATA @ 0x1C022796C (vComputeSimulatedGLYPHDATA.c)
 * Callees:
 *     bNonZeroRow @ 0x1C022638C (bNonZeroRow.c)
 */

void __fastcall vFindTAndB(_BYTE *a1, int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  unsigned int v8; // r8d
  _BYTE *v9; // rbx
  _BYTE *v10; // r10
  _BYTE *i; // r10
  __int64 v12; // r10

  *a4 = 0;
  v6 = (unsigned __int64)a1;
  v7 = a3;
  v8 = (unsigned int)(a2 + 7) >> 3;
  *a5 = 0;
  if ( a1 )
  {
    v9 = &a1[v7];
    v10 = a1;
    if ( a1 < &a1[v7] )
    {
      while ( !(unsigned int)bNonZeroRow(v10, v7, v8) )
      {
        if ( ++v10 >= v9 )
          goto LABEL_7;
      }
      *a4 = (_DWORD)v10 - v6;
    }
LABEL_7:
    if ( v10 != v9 )
    {
      for ( i = (_BYTE *)(v6 + (unsigned int)(v7 - 1)); (unsigned __int64)i >= v6; i = (_BYTE *)(v12 - 1) )
      {
        if ( (unsigned int)bNonZeroRow(i, v7, v8) )
        {
          *a5 = v12 - v6 + 1;
          return;
        }
      }
    }
  }
}
