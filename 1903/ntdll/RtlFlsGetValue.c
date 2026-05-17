/*
 * XREFs of RtlFlsGetValue @ 0x18005E410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsGetValue(int a1, _QWORD *a2)
{
  _QWORD *FlsData; // r8
  unsigned int v3; // r10d
  __int64 v4; // r11
  _QWORD *v5; // rax
  __int64 result; // rax

  FlsData = NtCurrentTeb()->FlsData;
  if ( (unsigned int)(a1 - 1) > 0xFEE || !FlsData )
    return 3221225485LL;
  v3 = a1 + 16;
  _BitScanReverse((unsigned int *)&a1, a1 + 16);
  v4 = FlsData[(unsigned int)(a1 - 4) + 2];
  if ( v4 && (v5 = (_QWORD *)(v4 + 8 * (((unsigned int)(1 << a1) ^ (unsigned __int64)v3) + 1))) != 0LL )
  {
    *a2 = *v5;
    return 0LL;
  }
  else
  {
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
