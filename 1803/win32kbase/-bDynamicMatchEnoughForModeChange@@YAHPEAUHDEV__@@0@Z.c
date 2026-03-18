/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006E02C
 * Callers:
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00C85AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00C85E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  _QWORD *v12; // rbx
  int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // eax
  _DWORD *v16; // [rsp+50h] [rbp+30h] BYREF
  _DWORD *v17; // [rsp+58h] [rbp+38h] BYREF

  v16 = a2;
  v3 = 1;
  v17 = a1;
  if ( a1[525] == 1 || a2[525] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[454] ^ a1[454]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17)
      || (v11 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16), v11 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17)) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v12[3] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v12[4] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
      v12[5] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      v12[6] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
      WdLogEvent5_WdError(v12);
      LODWORD(v12) = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
      v13 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v14 = (_DWORD)v12 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16) << 16);
      v15 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
      DrvDxgkLogCodePointPacket(95LL, v13 + (v15 << 16), v14);
    }
  }
  if ( *((_QWORD *)a2 + 361)
    || *((_QWORD *)a2 + 379)
    || *((_QWORD *)a2 + 380)
    || *((_QWORD *)a2 + 386)
    || *((_QWORD *)a2 + 372) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 361)
    || *((_QWORD *)a1 + 379)
    || *((_QWORD *)a1 + 380)
    || *((_QWORD *)a1 + 386)
    || *((_QWORD *)a1 + 372) )
  {
    return 0;
  }
  return v5;
}
