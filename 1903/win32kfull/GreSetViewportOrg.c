/*
 * XREFs of GreSetViewportOrg @ 0x1C00F9D68
 * Callers:
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  if ( v10[0] )
  {
    v6 = *(_QWORD *)(v10[0] + 976LL);
    v7 = -a2;
    v8 = 1;
    if ( (*(_DWORD *)(v6 + 108) & 1) == 0 )
      v7 = a2;
    if ( (unsigned int)(v7 + 134217726) > 0xFFFFFFC || (unsigned int)(a3 + 134217726) > 0xFFFFFFC )
    {
      v8 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 152) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 0x402u);
        if ( v11[0] )
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)v11,
            (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 976LL) + 8LL),
            (struct _POINTL *)(*(_QWORD *)(v10[0] + 976LL) + 216LL),
            1uLL);
        *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) &= ~0x100u;
        v5 = v10[0];
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 976) + 152LL) |= 0x200u;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x80000204);
      *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 340LL) |= 0x2010u;
      *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 324LL) = v7;
      *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 328LL) = a3;
      EXFORMOBJ::vInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, 0x402u, 0);
      v5 = v10[0];
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  else
  {
    return 0;
  }
  return v8;
}
