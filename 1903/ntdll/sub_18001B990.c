/*
 * XREFs of sub_18001B990 @ 0x18001B990
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCharToInteger @ 0x18006F1E0 (RtlCharToInteger.c)
 *     strrchr @ 0x1800918A0 (strrchr.c)
 */

__int64 __fastcall sub_18001B990(char *Str, __int64 a2, __int64 a3, char **a4)
{
  int v4; // r15d
  char *v7; // rax
  __int16 v8; // bx
  char *v9; // rdi
  __int64 v10; // r14
  int v11; // eax
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
      v10 = qword_1801653A0;
      v16 = qword_1801653A0;
    }
    else
    {
      v15 = sub_180023170(&SourceString, (__int64)&v16, (__int64)&v17);
      v12 = v15;
      if ( v15 < 0 || v15 == 259 )
        goto LABEL_16;
      v10 = v16;
    }
    v11 = sub_18001C2B0(*(_QWORD *)(v10 + 48), v9, Value, a4);
    v12 = v11;
    if ( v11 != -1073741267 )
      break;
    if ( ++v4 == 32 )
      goto LABEL_27;
    Str = *a4;
  }
  if ( v11 >= 0 )
  {
    v13 = *(char **)(v10 + 48);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      if ( (unsigned __int64)v13 < *((_QWORD *)&xmmword_18017A4E0 + 1)
        || (unsigned __int64)v13 >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18017A4F0 )
      {
        sub_18001E620(v13, &SourceString);
      }
      else
      {
        SourceString = (STRING)xmmword_18017A4E0;
      }
      if ( SourceString.Buffer != v13 )
        __fastfail(0x18u);
    }
  }
LABEL_16:
  if ( v17 )
    RtlFreeHeap(qword_180165420, 0LL, v17);
  return v12;
}
