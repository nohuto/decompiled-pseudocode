/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007074
 * Callers:
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006E68 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  DirectComposition::CTelemetryInfo *v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  while ( 1 )
  {
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v9) )
      break;
    v6 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this
      || (v7 = *(_QWORD *)v6, *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v6 + 8LL) != v6) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v7;
    *(_QWORD *)(v7 + 8) = this;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 52;
    *((_DWORD *)v8 + 1) = 359;
    *(_OWORD *)(v8 + 12) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 28) = *((_OWORD *)v6 + 2);
    *(_QWORD *)(v8 + 44) = *((_QWORD *)v6 + 6);
    Win32FreePool(v6);
  }
  if ( *(DirectComposition::CTelemetryInfo **)this == this )
    return 1;
  return v4;
}
