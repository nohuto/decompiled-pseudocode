/*
 * XREFs of fsSelectionTTFD @ 0x1C021B954
 * Callers:
 *     bComputeIFISIZE @ 0x1C0218418 (bComputeIFISIZE.c)
 *     vFill_IFIMETRICS @ 0x1C021C0F0 (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall fsSelectionTTFD(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int16 result; // ax
  char v5; // dl

  v2 = *(unsigned int *)(a2 + 64);
  if ( (_DWORD)v2 )
    v3 = a1 + v2;
  else
    v3 = 0LL;
  if ( v3 )
    return __ROR2__(*(_WORD *)(v3 + 62), 8);
  v5 = __ROR2__(*(_WORD *)(*(unsigned int *)(a2 + 16) + a1 + 44), 8);
  result = (32 * (v5 & 1)) | 1;
  if ( (v5 & 2) == 0 )
    return 32 * (v5 & 1);
  return result;
}
