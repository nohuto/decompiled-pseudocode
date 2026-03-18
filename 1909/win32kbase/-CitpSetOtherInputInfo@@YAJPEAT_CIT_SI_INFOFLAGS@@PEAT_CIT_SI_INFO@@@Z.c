/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C7E14
 * Callers:
 *     CitSetInfo @ 0x1C0036D80 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0038708 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v3 = qword_1C0215810;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *((_QWORD *)qword_1C0215810 + 15);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process != *((_QWORD *)v3 + 15) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_WORD *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
