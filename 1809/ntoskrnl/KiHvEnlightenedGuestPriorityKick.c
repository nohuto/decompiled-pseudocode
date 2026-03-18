/*
 * XREFs of KiHvEnlightenedGuestPriorityKick @ 0x1400CFD78
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEC0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF620 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E4C (KiApplyForegroundBoostThread.c)
 *     KeSetTimer2 @ 0x1400FC150 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400FC7E0 (KiInsertTimer2.c)
 * Callees:
 *     KiSetVpThreadSystemWork @ 0x140299660 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  char v7; // r8
  int v8; // edx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = (unsigned int)KiVelocityFlags;
  v5 = a2;
  if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(a2 + 25016) && *(_QWORD *)(a1 + 25016) && a1 != a2 && a3 >= 8 )
  {
    LOBYTE(a2) = 1;
    result = KiSetVpThreadSystemWork(a1, a2);
    v7 = result;
    v8 = **(_DWORD **)(v5 + 25016);
    if ( (v8 & 0x40000) != 0 && (unsigned __int8)v8 < a3 )
    {
      v9 = HvlpVirtualProcessorsIdentityMapped == 0;
      v10 = *(_QWORD *)(a1 + 25016);
      *(_DWORD *)(v10 + 12) = 2;
      v11 = *(unsigned int *)(v5 + 36);
      if ( v9 )
        LODWORD(v11) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v11 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v11] << 6);
      *(_DWORD *)(v10 + 8) = v11;
      result = (unsigned int)v11;
      __writemsr(0x400000C2u, (unsigned int)v11);
    }
    if ( v7 )
      return KiSetVpThreadSystemWork(a1, 0LL);
  }
  return result;
}
