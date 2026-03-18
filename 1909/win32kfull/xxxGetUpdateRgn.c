/*
 * XREFs of xxxGetUpdateRgn @ 0x1C00EC440
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C00EC370 (NtUserGetUpdateRgn.c)
 * Callees:
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     IntersectWithParents @ 0x1C0065B14 (IntersectWithParents.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     MirrorRegion @ 0x1C00EC7A8 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF

  v13 = 0uLL;
  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, a1, 0x120u, 1);
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v5 + 136) )
  {
    v13 = *(_OWORD *)(v5 + 104);
    v6 = IntersectWithParents(a1, &v13);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL) == 1LL )
    {
      if ( v6 )
      {
        v7 = 2;
        if ( a1 != GetDesktopWindow(a1) )
        {
          v10 = *(_DWORD *)(v9 + 104);
          v11 = -*(_DWORD *)(v9 + 108);
          HIDWORD(v13) -= *(_DWORD *)(v9 + 108);
          v12 = -v10;
          LODWORD(v13) = v12 + v13;
          DWORD2(v13) += v12;
          DWORD1(v13) += v11;
        }
        SetRectRgnIndirect(a2, &v13);
        goto LABEL_8;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v13);
      v7 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL), 1LL);
      if ( v7 > 1 )
      {
        if ( a1 != GetDesktopWindow(a1) )
          GreOffsetRgn(a2, (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL));
LABEL_8:
        MirrorRegion(a1, a2, 1LL);
        return v7;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
