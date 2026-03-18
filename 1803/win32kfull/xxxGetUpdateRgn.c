/*
 * XREFs of xxxGetUpdateRgn @ 0x1C00F5B38
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C00F5AA0 (NtUserGetUpdateRgn.c)
 * Callees:
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     IntersectWithParents @ 0x1C002B4F4 (IntersectWithParents.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     MirrorRegion @ 0x1C00F5E18 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, a1, 288, 1);
  v7 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v7 + 136) )
  {
    v15 = *(_OWORD *)(v7 + 104);
    v8 = IntersectWithParents(a1, &v15);
    v5 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v5 + 136) == 1LL )
    {
      if ( v8 )
      {
        v9 = 2;
        if ( a1 != GetDesktopWindow(a1) )
        {
          v11 = *(_DWORD *)(v10 + 104);
          v12 = -*(_DWORD *)(v10 + 108);
          HIDWORD(v15) -= *(_DWORD *)(v10 + 108);
          v13 = -v11;
          LODWORD(v15) = v13 + v15;
          DWORD2(v15) += v13;
          DWORD1(v15) += v12;
        }
        SetRectRgnIndirect(a2, &v15);
LABEL_9:
        MirrorRegion(a1, a2, 1LL);
        return v9;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v15);
      v9 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL), 1LL);
      if ( v9 > 1 )
      {
        if ( a1 != GetDesktopWindow(a1) )
          GreOffsetRgn(
            a2,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL));
        goto LABEL_9;
      }
    }
  }
  SetEmptyRgn(a2, v5, v6);
  return 1LL;
}
