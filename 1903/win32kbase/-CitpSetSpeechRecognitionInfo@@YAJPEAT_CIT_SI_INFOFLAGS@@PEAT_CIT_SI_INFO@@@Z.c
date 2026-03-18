/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C9E38
 * Callers:
 *     CitSetInfo @ 0x1C0037DF0 (CitSetInfo.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003771C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0037740 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0037848 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  struct _CIT_PROCESS **CurrentProcessWin32Process; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int v11; // r8d
  int v12; // eax
  __int16 v13; // di
  unsigned int v14; // r10d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int16 v17; // ax
  __int64 v18; // rsi
  __int64 v19; // rax
  struct tagPROCESSINFO **v20; // rax
  struct _CIT_INTERACTION_SUMMARY *v21; // rax

  v2 = qword_1C0218810;
  if ( (unsigned int)dword_1C020FCDC < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C020FCD0);
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    CurrentProcessWin32Process = (struct _CIT_PROCESS **)*((_QWORD *)v2 + 15);
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  v7 = *(_QWORD *)a1 >> 24;
  if ( (unsigned __int16)v7 >= 0x40u )
    LOWORD(v7) = 64;
  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( v8 >= 0x3E800000000LL )
    LODWORD(v9) = -1;
  else
    v9 = v8 / 0x3E8;
  v10 = v9;
  if ( (unsigned __int16)v7 <= (unsigned int)v9 )
    v10 = v7;
  if ( (unsigned int)v9 >= 0x40 )
  {
    v11 = *((_DWORD *)v2 + 212);
    v12 = v9 - 63;
    if ( (int)v9 - 63 > v11 )
    {
      *((_DWORD *)v2 + 212) = v12;
      if ( v12 - v11 < 0x40 )
        *((_QWORD *)v2 + 105) >>= (unsigned __int8)v12 - (unsigned __int8)v11;
      else
        *((_QWORD *)v2 + 105) = 0LL;
    }
  }
  v13 = 0;
  if ( (unsigned int)v9 > 0x40 )
    LODWORD(v9) = 64;
  v14 = 64 - v10;
  if ( v14 < (unsigned int)v9 )
  {
    v15 = *((_QWORD *)v2 + 105);
    do
    {
      v16 = v15;
      v17 = v13;
      v18 = (1LL << v14) & v15;
      ++v13;
      if ( v18 )
        v13 = v17;
      v19 = v18;
      v15 = (1LL << v14) | v16;
      if ( v19 )
        v15 = v16;
      ++v14;
    }
    while ( v14 < (unsigned int)v9 );
    *((_QWORD *)v2 + 105) = v15;
    if ( v13 )
    {
      v20 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
      if ( v20 )
      {
        v21 = CitpInteractionSummaryEnsure(v2, v20, 1);
        if ( v21 )
          CitpStatIncrement((unsigned __int16 *)v21 + 46, v13);
      }
    }
  }
  return 0LL;
}
