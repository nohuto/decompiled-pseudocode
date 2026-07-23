/*
 * XREFs of KiVerifyXcpt11 @ 0x1409D0E10
 * Callers:
 *     <none>
 * Callees:
 *     KiVerifyXcptFilter @ 0x1409D0F7C (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt11(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    LODWORD(result) = *(_DWORD *)(a1 + 12) + 12;
    *(_DWORD *)(a1 + 12) = result;
    if ( (_DWORD)result == 36 )
    {
      KiVerifyXcptFilter(a1);
      LODWORD(result) = *(_DWORD *)(v1 + 12);
    }
  }
  else
  {
    LODWORD(result) = -1;
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = (int)result;
  *(_QWORD *)(v1 + 24) += (int)result;
  return result;
}
