/*
 * XREFs of OffsetWindow @ 0x1C006F138
 * Callers:
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C010A8A0 (DwmAsyncChildClipRgnChange.c)
 *     FindSpb @ 0x1C01F2BF4 (FindSpb.c)
 */

char __fastcall OffsetWindow(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 Spb; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rax
  struct tagPOINT v17; // [rsp+70h] [rbp+8h] BYREF

  v7 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 92LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 100LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) += a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) += a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) += a3;
  Spb = *(_QWORD *)(a1 + 40);
  v9 = Spb;
  v10 = *(_QWORD *)(Spb + 136);
  if ( v10 > 1 )
  {
    LOBYTE(Spb) = *(_BYTE *)(Spb + 21);
    if ( (Spb & 8) == 0 )
    {
      LOBYTE(Spb) = GreOffsetRgn(v10, a2, a3);
      v9 = *(_QWORD *)(a1 + 40);
    }
  }
  v11 = *(_QWORD *)(v9 + 168);
  if ( v11 )
  {
    LOBYTE(Spb) = GreOffsetRgn(v11, a2, v7);
    v9 = *(_QWORD *)(a1 + 40);
  }
  if ( *(char *)(v9 + 16) < 0 )
  {
    Spb = FindSpb(a1);
    *(_DWORD *)(Spb + 24) += a2;
    *(_DWORD *)(Spb + 32) += a2;
    *(_DWORD *)(Spb + 36) += v7;
    *(_DWORD *)(Spb + 28) += v7;
  }
  if ( a4 )
  {
    LODWORD(Spb) = IsWindowDesktopComposed(a1);
    if ( (_DWORD)Spb )
    {
      DwmChildRectChange(a1);
      v15 = (void *)ReferenceDwmApiPort(v14, v13);
      LOBYTE(Spb) = DwmAsyncChildClipRgnChange(v15);
    }
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
  {
    v17 = *(struct tagPOINT *)(v12 + 88);
    LOBYTE(Spb) = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, &v17, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
  }
  return Spb;
}
