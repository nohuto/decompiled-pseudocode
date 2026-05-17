/*
 * XREFs of LdrpResolveForwarder @ 0x18001B990
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCharToInteger @ 0x18006F430 (RtlCharToInteger.c)
 *     strrchr @ 0x180091F40 (strrchr.c)
 */

__int64 __fastcall LdrpResolveForwarder(char *Str, __int64 a2, __int64 a3, char **a4)
{
  int v4; // r15d
  char *v7; // rax
  __int16 v8; // bx
  char *v9; // rdi
  __int64 v10; // r14
  int ProcedureAddress; // eax
  unsigned int v12; // ebx
  char *v13; // rdi
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v7 = strrchr(Str, 46);
    if ( !v7 || (v8 = (_WORD)v7 - (_WORD)Str, (unsigned __int64)(v7 - Str) > 0xFFFF) )
    {
LABEL_27:
      v12 = -1073741701;
      goto LABEL_16;
    }
    v9 = v7 + 1;
    SourceString.Buffer = Str;
    SourceString.Length = (_WORD)v7 - (_WORD)Str;
    SourceString.MaximumLength = (_WORD)v7 - (_WORD)Str;
    if ( v7[1] == 35 )
    {
      if ( RtlCharToInteger(v7 + 2, 0, &Value) < 0 )
        goto LABEL_27;
      v9 = 0LL;
    }
    if ( v8 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      v10 = LdrpNtDllDataTableEntry;
      v16 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v15 = LdrpLoadDependentModule(&SourceString, (__int64)&v16, (__int64)&v17);
      v12 = v15;
      if ( v15 < 0 || v15 == 259 )
        goto LABEL_16;
      v10 = v16;
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v10 + 48), v9, Value, a4);
    v12 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    if ( ++v4 == 32 )
      goto LABEL_27;
    Str = *a4;
  }
  if ( ProcedureAddress >= 0 )
  {
    v13 = *(char **)(v10 + 48);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      if ( (unsigned __int64)v13 < *((_QWORD *)&xmmword_18017A500 + 1)
        || (unsigned __int64)v13 >= *((_QWORD *)&xmmword_18017A500 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18017A510 )
      {
        RtlpxLookupFunctionTable(v13, &SourceString);
      }
      else
      {
        SourceString = (STRING)xmmword_18017A500;
      }
      if ( SourceString.Buffer != v13 )
        __fastfail(0x18u);
    }
  }
LABEL_16:
  if ( v17 )
    RtlFreeHeap(LdrpHeap, 0LL, v17);
  return v12;
}
