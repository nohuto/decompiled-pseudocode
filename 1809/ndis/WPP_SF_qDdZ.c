/*
 * XREFs of WPP_SF_qDdZ @ 0x1C00616F4
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDdZ(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int16 *a6)
{
  const wchar_t *v6; // rax
  __int64 v7; // rdx
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  int v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v6 = a6;
  if ( a6 )
    v7 = *a6;
  else
    v7 = 8LL;
  if ( a6 && *a6 )
    v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
  else
    v8 = L"NULL";
  if ( !a6 )
    v6 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
    0x56u,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v6,
    2LL,
    v8,
    v7,
    0LL);
}
