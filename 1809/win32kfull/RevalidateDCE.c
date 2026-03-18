/*
 * XREFs of RevalidateDCE @ 0x1C000EC80
 * Callers:
 *     DeleteHrgnClip @ 0x1C000BF70 (DeleteHrgnClip.c)
 *     UpdateRedirectedDCE @ 0x1C000E950 (UpdateRedirectedDCE.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0230F98 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x1C000EDA4 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C000EE10 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r9
  unsigned int v6; // ecx
  bool v7; // zf
  __int64 v9; // r9
  unsigned __int8 v10; // cl

  v1 = *(unsigned int *)(a1 + 64);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 24);
    if ( (int)v1 >= 0 )
    {
      v1 = (unsigned int)v1 & 0xFFFFFFE7;
      *(_DWORD *)(a1 + 64) = v1;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v3 + 112) + 8LL) + 8LL) >= 0
        || (v9 = *(_QWORD *)(v3 + 40), (*(_BYTE *)(v9 + 21) & 1) == 0)
        && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 2) != 0
        || (v10 = *(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL), ((v10 ^ *(_BYTE *)(v9 + 31)) & 0x10) != 0) )
      {
        v5 = *(_QWORD *)(v3 + 40);
        v6 = v1;
        if ( (*(_BYTE *)(v5 + 31) & 0x22) == 2 )
        {
          v6 = v1 | 8;
          *(_DWORD *)(a1 + 64) = v1 | 8;
          v5 = *(_QWORD *)(v3 + 40);
        }
        v7 = (*(_BYTE *)(v5 + 31) & 4) == 0;
        v1 = v6;
      }
      else
      {
        v7 = (v10 & 4) == 0;
      }
      if ( !v7 )
      {
        v1 = (unsigned int)v1 | 0x10;
        *(_DWORD *)(a1 + 64) = v1;
      }
    }
    LODWORD(v1) = v1 | 0x2000;
    *(_DWORD *)(a1 + 64) = v1;
    return UserSetDCVisRgn(a1, v1, v3);
  }
  else
  {
    SpbCheckDce();
    return InvalidateDCE(a1);
  }
}
