/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000E484
 * Callers:
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000E28C (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CTelemetryInfo *v4; // rbx
  bool v5; // zf
  __int64 v7; // rax
  DirectComposition::CTelemetryInfo *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = *(DirectComposition::CTelemetryInfo **)this;
    v5 = *(_QWORD *)this == (_QWORD)this;
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return v5;
    if ( *((DirectComposition::CTelemetryInfo **)v4 + 1) != this )
      goto LABEL_7;
    v7 = *(_QWORD *)v4;
    if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_7;
    *(_QWORD *)this = v7;
    *(_QWORD *)(v7 + 8) = this;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v4 + 4), &v9) )
    {
      v8 = *(DirectComposition::CTelemetryInfo **)this;
      if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this )
LABEL_7:
        __fastfail(3u);
      *(_QWORD *)v4 = v8;
      v5 = v4 == this;
      *((_QWORD *)v4 + 1) = this;
      *((_QWORD *)v8 + 1) = v4;
      *(_QWORD *)this = v4;
      return v5;
    }
    memmove(v9, (char *)v4 + 20, *((unsigned int *)v4 + 4));
    Win32FreePool(v4);
  }
}
