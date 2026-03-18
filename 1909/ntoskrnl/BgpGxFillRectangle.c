/*
 * XREFs of BgpGxFillRectangle @ 0x140179804
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     RaspAntiAlias @ 0x1401854C0 (RaspAntiAlias.c)
 *     BgpClearScreen @ 0x1403489D0 (BgpClearScreen.c)
 *     BgpTxtAdjustStaticRegion @ 0x140348D54 (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BgpGxFillRectangle(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rax

  result = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
  v3 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    do
    {
      *(_WORD *)(v3 + 1) = a2 >> 8;
      *(_BYTE *)v3 = a2;
      v5 = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)v5 == 32 )
      {
        *(_BYTE *)(v3 + 3) = HIBYTE(a2);
        v5 = *(unsigned int *)(a1 + 8);
      }
      result = v5 >> 3;
      v3 += result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
