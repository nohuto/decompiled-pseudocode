/*
 * XREFs of EtwpFreeLbrData @ 0x14090684C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLbrData(__int64 a1)
{
  _DWORD *v2; // rcx

  if ( (*(_DWORD *)(a1 + 832) & 0x8000) != 0 )
    _InterlockedDecrement(&dword_14046B580);
  v2 = *(_DWORD **)(a1 + 1008);
  if ( v2 )
  {
    if ( *v2 )
    {
      ((void (__fastcall *)(_QWORD))off_1404246F8[0])((unsigned int)*v2);
      v2 = *(_DWORD **)(a1 + 1008);
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1008) = 0LL;
  }
}
