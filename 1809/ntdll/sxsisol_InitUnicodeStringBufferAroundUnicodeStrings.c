/*
 * XREFs of sxsisol_InitUnicodeStringBufferAroundUnicodeStrings @ 0x18000C084
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sxsisol_InitUnicodeStringBufferAroundUnicodeStrings(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // r11
  _WORD *v7; // rdx

  if ( a2 )
  {
    result = *(unsigned __int16 *)(a2 + 2);
    v7 = (_WORD *)(a1 + 48);
    v6 = (unsigned int)result;
    if ( result < 2 )
      v6 = 2LL;
    else
      v7 = *(_WORD **)(a2 + 8);
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 8) = v7;
    if ( v7 )
      *v7 = 0;
  }
  else
  {
    result = a1 + 48;
    *(_QWORD *)(a1 + 32) = 2LL;
    *(_QWORD *)(a1 + 16) = a1 + 48;
    *(_QWORD *)(a1 + 24) = a1 + 48;
    *(_QWORD *)(a1 + 40) = 2LL;
    *(_QWORD *)(a1 + 8) = a1 + 48;
    if ( a1 != -48 )
      *(_WORD *)result = 0;
    LOWORD(v6) = 2;
  }
  *(_WORD *)a1 = 0;
  *(_WORD *)(a1 + 2) = v6;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 72) = a4;
  *(_BYTE *)(a1 + 80) = 1;
  return result;
}
