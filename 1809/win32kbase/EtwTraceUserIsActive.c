/*
 * XREFs of EtwTraceUserIsActive @ 0x1C00361A0
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     McTemplateK0qqm @ 0x1C00EA774 (McTemplateK0qqm.c)
 */

__int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, LONGLONG *a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // r8
  __int64 v8; // rax
  int v9; // ebx
  LONGLONG TimeQuadPart; // rax
  LONGLONG v11; // [rsp+50h] [rbp+18h] BYREF
  LONGLONG v12; // [rsp+58h] [rbp+20h]

  v12 = 0LL;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)v6 - W32kEtwUserActiveLastEventLogMs < 0xEA60 )
    return 0LL;
  W32kEtwUserActiveLastEventLogMs = v6;
  if ( !gptiForeground )
  {
    v9 = 0;
    v11 = 0LL;
LABEL_13:
    TimeQuadPart = v12;
    goto LABEL_6;
  }
  v8 = *((_QWORD *)gptiForeground + 53);
  v9 = *(_DWORD *)(v8 + 56);
  if ( !*(_QWORD *)v8 )
  {
    v11 = 0LL;
    goto LABEL_13;
  }
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v8);
  v11 = TimeQuadPart;
LABEL_6:
  if ( a1 )
    *a1 = v9;
  if ( a2 )
    *a2 = TimeQuadPart;
  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
    && (qword_1C01C3310 & 0x8000000000020000uLL) != 0
    && (qword_1C01C3318 & 0x8000000000020000uLL) == qword_1C01C3318
    && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    McTemplateK0qqm((unsigned int)&v11, (_DWORD)a2, 0x20000, a4, v9, (__int64)&v11);
  }
  return 1LL;
}
