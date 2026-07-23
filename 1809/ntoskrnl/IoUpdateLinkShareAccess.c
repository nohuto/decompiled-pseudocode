/*
 * XREFs of IoUpdateLinkShareAccess @ 0x1405FB5C0
 * Callers:
 *     IoUpdateShareAccess @ 0x140703A30 (IoUpdateShareAccess.c)
 * Callees:
 *     <none>
 */

char __fastcall IoUpdateLinkShareAccess(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rax
  bool v4; // zf

  v3 = *(_DWORD **)(a1 + 208);
  if ( !v3 || (v4 = (*v3 & 1) == 0, LOBYTE(v3) = 1, v4) )
    LOBYTE(v3) = 0;
  if ( (*(_BYTE *)(a1 + 74) || *(_BYTE *)(a1 + 75) || *(_BYTE *)(a1 + 76)) && !(_BYTE)v3 )
  {
    ++*a2;
    a2[1] += *(unsigned __int8 *)(a1 + 74);
    a2[2] += *(unsigned __int8 *)(a1 + 75);
    a2[4] += *(unsigned __int8 *)(a1 + 77);
    a2[5] += *(unsigned __int8 *)(a1 + 78);
    if ( a3 )
    {
      ++*a3;
      a3[1] += *(unsigned __int8 *)(a1 + 76);
      LODWORD(v3) = *(unsigned __int8 *)(a1 + 79);
      a3[2] += (_DWORD)v3;
    }
    else
    {
      a2[3] += *(unsigned __int8 *)(a1 + 76);
      LODWORD(v3) = *(unsigned __int8 *)(a1 + 79);
      a2[6] += (_DWORD)v3;
    }
  }
  return (char)v3;
}
