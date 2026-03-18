/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00099A8
 * Callers:
 *     ?EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009854 (-EmitCommands@CTelemetryInfo@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rbx
  bool v4; // zf
  __int64 *v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 16;
  while ( 1 )
  {
    v4 = *(_QWORD *)v3 == (_QWORD)v3;
    if ( *(char **)v3 == v3 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x64uLL, &v9) )
      return *(_QWORD *)v3 == (_QWORD)v3;
    v6 = *(__int64 **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(__int64 **)(*v6 + 8) != v6) )
      __fastfail(3u);
    *(_QWORD *)v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 100;
    *((_DWORD *)v8 + 1) = 361;
    *(_OWORD *)(v8 + 12) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 28) = *((_OWORD *)v6 + 2);
    *(_OWORD *)(v8 + 44) = *((_OWORD *)v6 + 3);
    *(_OWORD *)(v8 + 60) = *((_OWORD *)v6 + 4);
    *(_OWORD *)(v8 + 76) = *((_OWORD *)v6 + 5);
    *(_QWORD *)(v8 + 92) = v6[12];
    Win32FreePool(v6);
  }
  return v4;
}
