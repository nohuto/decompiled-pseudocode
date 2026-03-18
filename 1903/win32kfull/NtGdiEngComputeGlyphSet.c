/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C02AB570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     EngComputeGlyphSet @ 0x1C0080520 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C0080AE8 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, __int64 nFirstChar, __int64 cChars, __int64 a4)
{
  INT v5; // esi
  INT v6; // ebp
  __int64 v7; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  FD_GLYPHSET *v11; // rax
  __int64 v12; // r9
  struct _FD_GLYPHSET *v13; // rsi
  ULONG cjThis; // ebp
  __int64 v15; // rax

  v5 = cChars;
  v6 = nFirstChar;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             nFirstChar,
                                             cChars,
                                             a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v11 = EngComputeGlyphSet(nCodePage, v6, v5);
    v13 = v11;
    if ( v11 )
    {
      cjThis = v11->cjThis;
      if ( v11->cjThis )
      {
        v15 = (__int64)UMPDOBJ::_AllocUserMem(v10, cjThis, 0LL, v12);
        v7 = v15;
        if ( v15 )
          v7 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v15, v13, cjThis) != 0) & v15;
      }
      EngFreeMem(v13);
    }
    if ( v10 )
      --*((_DWORD *)v10 + 105);
  }
  return v7;
}
