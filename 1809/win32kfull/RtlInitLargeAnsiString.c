/*
 * XREFs of RtlInitLargeAnsiString @ 0x1C00B06D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00B03C0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C00B04A0 (NtUserfnINLPCREATESTRUCT.c)
 *     NtUserfnINSTRING @ 0x1C0109130 (NtUserfnINSTRING.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02113A0 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C021FEC0 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeAnsiString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) |= 0x80000000;
  if ( a2 )
  {
    result = -1LL;
    do
      ++result;
    while ( *(_BYTE *)(a2 + result) );
    v3 = (result + 1) | 0x80000000;
  }
  else
  {
    v3 = 0x80000000;
    result = 0LL;
  }
  *(_DWORD *)a1 = result;
  *(_DWORD *)(a1 + 4) = v3;
  return result;
}
