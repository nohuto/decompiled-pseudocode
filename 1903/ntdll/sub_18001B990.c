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
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  PCHAR v12; // rdi
  int v13; // eax
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  v16 = 0LL;
  BaseAddress = 0LL;
  while ( 1 )
  {
    v7 = strrchr(Str, 46);
    if ( !v7
      || (v8 = (_WORD)v7 - (_WORD)Str, (unsigned __int64)(v7 - Str) > 0xFFFF)
      || (SourceString.Buffer = Str,
          SourceString.Length = (_WORD)v7 - (_WORD)Str,
          SourceString.MaximumLength = (_WORD)v7 - (_WORD)Str,
          v7[1] == 35)
      && RtlCharToInteger(v7 + 2, 0, &Value) < 0 )
    {
LABEL_27:
      v11 = -1073741701;
      goto LABEL_16;
    }
    if ( v8 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      v9 = qword_1801653A0;
      v16 = qword_1801653A0;
    }
    else
    {
      v15 = sub_180023170(&SourceString, (__int64)&v16, (__int64)&BaseAddress);
      v11 = v15;
      if ( v15 < 0 || v15 == 259 )
        goto LABEL_16;
      v9 = v16;
    }
    v10 = sub_18001C2B0(*(_QWORD *)(v9 + 48));
    v11 = v10;
    if ( v10 != -1073741267 )
      break;
    if ( ++v4 == 32 )
      goto LABEL_27;
    Str = *a4;
  }
  if ( v10 >= 0 )
  {
    v12 = *(PCHAR *)(v9 + 48);
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    if ( v13 )
    {
      if ( (unsigned __int64)v12 < *((_QWORD *)&xmmword_18017A4E0 + 1)
        || (unsigned __int64)v12 >= *((_QWORD *)&xmmword_18017A4E0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18017A4F0 )
      {
        sub_18001E620(v12);
      }
      else
      {
        SourceString = (ANSI_STRING)xmmword_18017A4E0;
      }
      if ( SourceString.Buffer != v12 )
        __fastfail(0x18u);
    }
  }
LABEL_16:
  if ( BaseAddress )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
  return v11;
}
