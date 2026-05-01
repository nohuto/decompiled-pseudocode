/*
 * XREFs of ?SstpHandlePoEnergySaverStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800473D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandlePoEnergySaverStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  result = 0LL;
  a4[5] ^= (a4[5] ^ (4 * *a5)) & 8;
  return result;
}
