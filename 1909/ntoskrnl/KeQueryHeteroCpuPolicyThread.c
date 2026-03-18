/*
 * XREFs of KeQueryHeteroCpuPolicyThread @ 0x1402A4810
 * Callers:
 *     KeSetUserHeteroCpuPolicyThread @ 0x1402A494C (KeSetUserHeteroCpuPolicyThread.c)
 *     NtQueryInformationThread @ 0x1405E5C60 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryHeteroCpuPolicyThread(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return *(unsigned __int8 *)(a1 + 125);
  result = *(_BYTE *)(a1 + 126) & 0x7F;
  if ( (_DWORD)result == 8 )
    return (unsigned int)KiDefaultHeteroCpuPolicy;
  return result;
}
