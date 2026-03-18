/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C02AB0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C011EED0 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     EngComputeGlyphSet @ 0x1C011F030 (EngComputeGlyphSet.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, __int64 nFirstChar, __int64 cChars)
{
  INT v4; // esi
  INT v5; // ebp
  __int64 v6; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v9; // rbx
  FD_GLYPHSET *v10; // rax
  struct _FD_GLYPHSET *v11; // rsi
  unsigned int cjThis; // ebp
  __int64 v13; // rax

  v4 = cChars;
  v5 = nFirstChar;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), nFirstChar, cChars);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v10 = EngComputeGlyphSet(nCodePage, v5, v4);
    v11 = v10;
    if ( v10 )
    {
      cjThis = v10->cjThis;
      if ( v10->cjThis )
      {
        v13 = (__int64)UMPDOBJ::_AllocUserMem(v9, cjThis, 0);
        v6 = v13;
        if ( v13 )
          v6 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v13, v11, cjThis) != 0) & v13;
      }
      EngFreeMem(v11);
    }
    if ( v9 )
      --*((_DWORD *)v9 + 105);
  }
  return v6;
}
