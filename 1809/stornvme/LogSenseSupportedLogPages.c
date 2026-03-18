/*
 * XREFs of LogSenseSupportedLogPages @ 0x1C0011AB8
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0013CE4 (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseSupportedLogPages(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  if ( v4 && (v6 = *(_DWORD *)(a2 + v5), v6 >= 7) )
  {
    NVMeZeroMemory(v4, v6);
    *v4 = 50331648;
    result = 0LL;
    *((_WORD *)v4 + 2) = 3328;
    *((_BYTE *)v4 + 6) = 47;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(a2, 6, a3, 36);
    return 3238002694LL;
  }
  return result;
}
