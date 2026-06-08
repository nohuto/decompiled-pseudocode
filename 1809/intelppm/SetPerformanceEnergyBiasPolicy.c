/*
 * XREFs of SetPerformanceEnergyBiasPolicy @ 0x1C00018E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetPerformanceEnergyBiasPolicy(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = (1500 - 15 * a2) / 0x64u;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 78LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1C001A678)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             432LL,
             -16LL,
             v2 & 0xF);
  v4 = __readmsr(0x1B0u);
  result = ((unsigned __int8)v2 ^ (unsigned __int8)v4) & 0xF ^ v4;
  __writemsr(0x1B0u, result);
  return result;
}
