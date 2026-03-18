/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C0282C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngComputeGlyphSet @ 0x1C00DE770 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00DEC38 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, __int64 nFirstChar, INT cChars)
{
  INT v5; // ebp
  __int64 v6; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v9; // rbx
  FD_GLYPHSET *v10; // rax
  struct _FD_GLYPHSET *v11; // rsi
  unsigned int cjThis; // ebp
  __int64 v13; // rax

  v5 = nFirstChar;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), nFirstChar);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v10 = EngComputeGlyphSet(nCodePage, v5, cChars);
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
