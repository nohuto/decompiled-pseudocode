/*
 * XREFs of ?EmitScreenCursor@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00926E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitScreenCursor(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // al
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  v4 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8);
  v5 = 0;
  if ( v4 )
  {
    v6 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 144;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      v5 = *(_DWORD *)(v7 + 24);
    *((_DWORD *)v6 + 3) = v5;
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
