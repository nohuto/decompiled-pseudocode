/*
 * XREFs of ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x1C028B6D4
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C028B968 (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bFindPrintKView(__int64 a1, int a2, struct _FONTFILE_PRINTKVIEW **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 i; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = ghsemPrintKView;
  v10 = ghsemPrintKView;
  *a3 = 0LL;
  GreAcquireSemaphore(v5);
  for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_QWORD *)i == a1 && *(_DWORD *)(i + 8) == a2 )
    {
      *a3 = (struct _FONTFILE_PRINTKVIEW *)i;
      v4 = 1;
      break;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v4;
}
