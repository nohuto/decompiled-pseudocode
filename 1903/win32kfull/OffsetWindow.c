/*
 * XREFs of OffsetWindow @ 0x1C0025CA0
 * Callers:
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00ED4B0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C0114134 (DwmAsyncChildClipRgnChange.c)
 *     FindSpb @ 0x1C0208EA4 (FindSpb.c)
 */

char __fastcall OffsetWindow(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v7; // edi
  __int64 Spb; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rax
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+74h] [rbp+Ch]

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
      LOBYTE(Spb) = GreOffsetRgn(v10, a2);
      v9 = *(_QWORD *)(a1 + 40);
    }
  }
  v11 = *(_QWORD *)(v9 + 168);
  if ( v11 )
  {
    LOBYTE(Spb) = GreOffsetRgn(v11, a2);
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
      v16 = (void *)ReferenceDwmApiPort(v14, v13, v15);
      LOBYTE(Spb) = DwmAsyncChildClipRgnChange(v16);
    }
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
  {
    v18 = *(_DWORD *)(v12 + 88);
    v19 = *(_DWORD *)(v12 + 92);
    LOBYTE(Spb) = UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, a3, 0LL, &v18, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
  }
  return Spb;
}
