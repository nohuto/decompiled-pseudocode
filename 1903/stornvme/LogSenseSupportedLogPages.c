/*
 * XREFs of LogSenseSupportedLogPages @ 0x1C001081C
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0012F4C (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseSupportedLogPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v6 = 16LL;
  }
  if ( v5 && (a2 = *(unsigned int *)(a2 + v6), (unsigned int)a2 >= 7) )
  {
    NVMeZeroMemory(v5, a2);
    *v5 = 50331648;
    result = 0LL;
    *((_WORD *)v5 + 2) = 3328;
    *((_BYTE *)v5 + 6) = 47;
    *(_BYTE *)(v4 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
  return result;
}
