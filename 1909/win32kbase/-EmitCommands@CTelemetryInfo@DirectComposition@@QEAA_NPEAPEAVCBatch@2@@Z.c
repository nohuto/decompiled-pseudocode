/*
 * XREFs of ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006E68
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000B4F0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006F34 (-EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006FBC (-EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007074 (-EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdi
  char v5; // si
  char *v6; // rbx
  __int64 v8; // rax
  char *v9; // rax
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(char **)v3;
    if ( *(char **)v3 == v3 )
      goto LABEL_3;
    if ( *((char **)v6 + 1) != v3 )
      goto LABEL_12;
    v8 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_12;
    *(_QWORD *)v3 = v8;
    *(_QWORD *)(v8 + 8) = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v6 + 4), &v10) )
      break;
    memmove(v10, v6 + 20, *((unsigned int *)v6 + 4));
    Win32FreePool(v6);
  }
  v9 = *(char **)v3;
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
LABEL_12:
    __fastfail(3u);
  *(_QWORD *)v6 = v9;
  *((_QWORD *)v6 + 1) = v3;
  *((_QWORD *)v9 + 1) = v6;
  *(_QWORD *)v3 = v6;
  if ( v6 == v3 )
  {
LABEL_3:
    if ( DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(this, a2)
      && DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(this, a2)
      && DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(this, a2) )
    {
      return 1;
    }
  }
  return v5;
}
