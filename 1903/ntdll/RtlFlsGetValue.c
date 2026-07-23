/*
 * XREFs of RtlFlsGetValue @ 0x18005E410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsGetValue(ULONG FlsIndex, PVOID *FlsData)
{
  _QWORD *v2; // r8
  ULONG v3; // r10d
  __int64 v4; // r11
  PVOID *v5; // rax
  NTSTATUS result; // eax

  v2 = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE || !v2 )
    return -1073741811;
  v3 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  v4 = v2[FlsIndex - 2];
  if ( v4 && (v5 = (PVOID *)(v4 + 8 * (((unsigned int)(1 << FlsIndex) ^ (unsigned __int64)v3) + 1))) != 0LL )
  {
    *FlsData = *v5;
    return 0;
  }
  else
  {
    result = 0;
    *FlsData = 0LL;
  }
  return result;
}
