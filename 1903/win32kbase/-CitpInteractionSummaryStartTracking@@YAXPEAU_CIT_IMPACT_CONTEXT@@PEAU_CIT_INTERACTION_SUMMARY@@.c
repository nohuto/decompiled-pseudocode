/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C009591C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0037848 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0086CB8 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  unsigned __int64 v4; // rcx
  __int16 v5; // ax
  struct _CIT_IMPACT_CONTEXT **v6; // rcx

  if ( (*((_BYTE *)a2 + 88) & 2) != 0 )
  {
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_WORD *)a2 + 30) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
    *(_QWORD *)((char *)a2 + 90) = 0LL;
    *(_DWORD *)((char *)a2 + 98) = 0;
    *((_WORD *)a2 + 51) = 0;
    *((_QWORD *)a2 + 15) = 0LL;
    *((_QWORD *)a2 + 16) = 0LL;
    *((_QWORD *)a2 + 17) = 0LL;
    memset(*((void **)a2 + 18), 0, *((_QWORD *)a2 + 19));
    *((_DWORD *)a2 + 26) &= 0xFF000000;
    *((_DWORD *)a2 + 28) &= 0xFF000000;
    v5 = *((_WORD *)a2 + 44);
  }
  else
  {
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_WORD *)a2 + 44) |= 2u;
    v5 = *((_WORD *)a2 + 44);
    *((_DWORD *)a2 + 20) = v4;
  }
  if ( (v5 & 1) == 0 )
    *((_QWORD *)a2 + 2) = **((_QWORD **)a2 + 3);
  v6 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 102);
  if ( *v6 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 808) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 808;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  *((_QWORD *)a1 + 102) = a2;
}
