/*
 * XREFs of LdrpComputeTlsSizeAndAlignment @ 0x1800368DC
 * Callers:
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpComputeTlsSizeAndAlignment(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  bool v4; // zf
  char v5; // cl
  unsigned int v6; // r8d
  int v7; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v3 = (*(_DWORD *)(a1 + 52) >> 20) & 0xF;
  v4 = (*(_DWORD *)(a1 + 52) & 0xF00000) == 0;
  v5 = v3 - 1;
  if ( v4 )
    v5 = v3;
  v6 = 1 << v5;
  v7 = 16;
  *a2 = v6;
  if ( v6 >= 0x10 )
    v7 = v6;
  else
    *a2 = 16;
  result = v2;
  *a2 = v7 - 1;
  return result;
}
