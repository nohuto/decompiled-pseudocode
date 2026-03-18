/*
 * XREFs of ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C029E0E8
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C028B608 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1C029EC80 (-vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C029EEC4 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C02AD6F4 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumStartLine(XCLIPOBJ *this, int a2)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = a2 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x200000;
  result = DDA_CLIPLINE::bInit(
             (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
             (struct _POINTFIX *)(*((_QWORD *)this + 18) + 4LL),
             *(struct _POINTFIX **)(*((_QWORD *)this + 18) + 16LL));
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (_DWORD)result )
  {
    v4[28] = v4[24];
    *(_DWORD *)(*((_QWORD *)this + 18) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 100LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 104LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 108LL);
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 112LL),
      (int *)(*((_QWORD *)this + 18) + 116LL));
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL),
      (int *)(*((_QWORD *)this + 18) + 120LL),
      (int *)(*((_QWORD *)this + 18) + 124LL));
    v5 = *((_QWORD *)this + 18);
    if ( (*(_DWORD *)(v5 + 24) & 1) != 0 )
    {
      *(_QWORD *)(v5 + 204) = *(_QWORD *)(v5 + 4);
      v5 = *((_QWORD *)this + 18);
    }
    if ( *(int *)(v5 + 180) > 0 )
    {
      *(_DWORD *)(v5 + 172) = *(_DWORD *)(v5 + 176);
      v6 = *((_QWORD *)this + 18);
      if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
        *(_DWORD *)(v6 + 172) = 0;
      XCLIPOBJ::vUpdateStyleState(this);
    }
    return 1LL;
  }
  else
  {
    v4[6] |= 0x10000u;
  }
  return result;
}
