/*
 * XREFs of vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C0223470
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0221F34 (bComputeMaxGlyph.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustGrayStateAndBoldOptions__FONTCONTEXT(__int64 a1)
{
  int v2; // r9d
  BOOL v3; // ecx
  unsigned int v4; // r8d
  int v5; // r10d
  int v6; // eax

  v2 = 5;
  *(_DWORD *)(a1 + 120) = 5;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = 1;
  if ( (v4 & 0x2000) != 0 )
    v3 = (*(_BYTE *)(a1 + 116) & 3) != 0;
  if ( *(_DWORD *)(a1 + 84) || *(_DWORD *)(a1 + 92) || *(int *)(a1 + 80) <= 0 || *(int *)(a1 + 96) <= 0 )
    v5 = 0;
  if ( v3 )
  {
    v6 = 0;
    if ( *(int *)(a1 + 124) <= 50 )
      v6 = v5;
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0 )
      {
        if ( (v4 & 0x2000000) != 0 )
        {
          v4 |= 0x10000u;
          *(_DWORD *)(a1 + 120) = 7;
          *(_DWORD *)(a1 + 40) = v4;
        }
        if ( (v4 & 0x20000) != 0 )
        {
          *(_DWORD *)(a1 + 120) = 7;
          v4 = v4 & 0xFFFCFFFF | 0x10000;
          *(_DWORD *)(a1 + 40) = v4;
        }
        *(_DWORD *)(*(_QWORD *)a1 + 12LL) = v4;
        v2 = *(_DWORD *)(a1 + 120);
      }
      if ( (v2 & 4) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0
        && (*(_DWORD *)(a1 + 40) & 0x10000000) != 0 )
      {
        *(_DWORD *)(a1 + 120) = v2 | 8;
      }
    }
  }
}
