/*
 * XREFs of sub_180076994 @ 0x180076994
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 */

__int64 __fastcall sub_180076994(unsigned __int16 *a1)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
  int v2; // eax
  __int64 v3; // r11
  int v4; // eax
  __int64 result; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = sub_18002891C(a1) - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v7 = v4 - 1;
      if ( !v7 )
        return 3221225485LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225485LL;
      v9 = v8 - 1;
      if ( !v9 || (unsigned int)(v9 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = sub_180076A04(v3, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v10);
  if ( (int)result >= 0 )
  {
    v6 = v10;
    qword_180165B70 = v10;
    ProcessParameters->CurrentDirectory.Handle = (HANDLE)v10[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (PWCH)v6[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v6 + 12);
    return 0LL;
  }
  return result;
}
