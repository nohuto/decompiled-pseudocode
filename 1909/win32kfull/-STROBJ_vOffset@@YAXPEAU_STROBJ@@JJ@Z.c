/*
 * XREFs of ?STROBJ_vOffset@@YAXPEAU_STROBJ@@JJ@Z @ 0x1C02C0D30
 * Callers:
 *     OffTextOut @ 0x1C02C1344 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall STROBJ_vOffset(struct _STROBJ *a1, int a2, int a3)
{
  int pwszOrg; // ecx
  int v5; // r10d
  int v6; // r11d
  __int64 v7; // rax
  ULONG cGlyphs; // edx
  _DWORD *v9; // r8
  _DWORD *v10; // rcx
  ULONG v11; // ecx
  _DWORD *v12; // rax

  if ( a2 || a3 )
  {
    a1->rclBkGround.left += a2;
    a1->rclBkGround.right += a2;
    a1->rclBkGround.top += a3;
    a1->rclBkGround.bottom += a3;
    pwszOrg = (int)a1[4].pwszOrg;
    v5 = 16 * a2;
    if ( (pwszOrg & 0x100) == 0 )
      v5 = a2;
    v6 = 16 * a3;
    v7 = *(_QWORD *)&a1[1].rclBkGround.top;
    if ( (pwszOrg & 0x100) == 0 )
      v6 = a3;
    if ( (pwszOrg & 0x1400) != 0 )
    {
      cGlyphs = a1->cGlyphs;
      v9 = *(_DWORD **)&a1[4].rclBkGround.top;
      if ( a1->cGlyphs )
      {
        v10 = (_DWORD *)(v7 + 20);
        do
        {
          if ( *v9 == HIDWORD(a1[4].pwszOrg) )
          {
            *(v10 - 1) += v5;
            --cGlyphs;
            *v10 += v6;
          }
          v10 += 6;
          ++v9;
        }
        while ( cGlyphs );
      }
    }
    else if ( a1->ulCharInc )
    {
      *(_DWORD *)(v7 + 16) += v5;
      *(_DWORD *)(v7 + 20) += v6;
    }
    else
    {
      v11 = a1->cGlyphs;
      if ( a1->cGlyphs )
      {
        v12 = (_DWORD *)(v7 + 20);
        do
        {
          *(v12 - 1) += v5;
          *v12 += v6;
          v12 += 6;
          --v11;
        }
        while ( v11 );
      }
    }
  }
}
