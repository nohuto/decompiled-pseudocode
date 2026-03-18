/*
 * XREFs of EtwpFreePmcData @ 0x1408F79A0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePmcData(__int64 a1)
{
  PVOID *v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // rsi

  v1 = *(PVOID **)(a1 + 1000);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v2 = v1 + 3;
    v3 = (unsigned int)KeNumberProcessors_0;
    do
    {
      if ( *v2 )
        off_140424520[0]();
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  if ( *v1 )
    ExFreePoolWithTag(*v1, 0);
  ExFreePoolWithTag(v1, 0);
}
