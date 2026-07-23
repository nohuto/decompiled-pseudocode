/*
 * XREFs of LdrpParseForwarderDescription @ 0x180079F3C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CF57C (LdrpEnclaveAddForwarderModules.c)
 * Callees:
 *     RtlCharToInteger @ 0x180079FE0 (RtlCharToInteger.c)
 *     strrchr @ 0x180095010 (strrchr.c)
 */

__int64 __fastcall LdrpParseForwarderDescription(const char *a1, __int64 a2, char **a3, ULONG *a4)
{
  char *v8; // rax
  char *v9; // rbx
  __int16 v10; // r10

  v8 = strrchr(a1, 46);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = (_WORD)v8 - (_WORD)a1;
    if ( (unsigned __int64)(v8 - a1) <= 0xFFFF )
    {
      *(_QWORD *)(a2 + 8) = a1;
      *(_WORD *)a2 = v10;
      *(_WORD *)(a2 + 2) = v10;
      if ( v8[1] != 35 )
      {
        v9 = v8 + 1;
LABEL_5:
        *a3 = v9;
        return 0LL;
      }
      if ( RtlCharToInteger(v8 + 2, 0, a4) >= 0 )
        goto LABEL_5;
    }
  }
  return 3221225595LL;
}
