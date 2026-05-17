/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180078640
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18007874C @ 0x18007874C (sub_18007874C.c)
 *     ZwAlpcQueryInformation @ 0x18009D7B0 (ZwAlpcQueryInformation.c)
 */

__int64 __fastcall TpWaitForAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = sub_18007874C(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 280);
    if ( v4 )
      ZwAlpcQueryInformation(*(_QWORD *)(a1 + 272), 11LL, &v4);
    return sub_180066BBC((volatile signed __int64 *)(a1 + 128), 0, 1uLL, v3);
  }
  return result;
}
