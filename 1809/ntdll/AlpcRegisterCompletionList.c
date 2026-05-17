/*
 * XREFs of AlpcRegisterCompletionList @ 0x180089220
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcRegisterCompletionList(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]

  v9 = a4;
  v7 = a2;
  v8 = a3;
  v10 = a5;
  result = NtAlpcSetInformation(a1, 6LL, &v7);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 320) = 0LL;
    return 0LL;
  }
  return result;
}
