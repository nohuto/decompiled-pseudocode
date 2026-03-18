/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BDB48
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BDC70 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     GreUnlockDwmState @ 0x1C002CA60 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C003F730 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // si
  char v5; // bp
  PVOID v6; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rcx
  char v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  void *v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 11);
  v3 = 0;
  if ( v2 >= 0 && (v2 & 0x3F) == 0x3F && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v14) )
  {
    v5 = CheckOrAcquireDwmStateLock();
    v6 = ReferenceDwmProcess();
    v7 = v6;
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 11);
      v9 = *((_QWORD *)this + 14);
      v13 = 0LL;
      v12 = 0;
      if ( (int)ObDuplicateObject(v9, v8, v6, &v13, 0, 0, 6, v12) >= 0 )
      {
        v10 = (char *)v14;
        v3 = 1;
        *(_DWORD *)v14 = 68;
        *((_DWORD *)v10 + 1) = 198;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v10 + 3) = *((_DWORD *)this + 12);
        *((_DWORD *)v10 + 4) = *((_DWORD *)this + 13);
        *(_QWORD *)(v10 + 20) = *(_QWORD *)((char *)this + 100);
        *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)this + 60);
        *((_DWORD *)v10 + 11) = *((_DWORD *)this + 14);
        *(_QWORD *)(v10 + 52) = v13;
        *((_DWORD *)v10 + 15) = *((_DWORD *)this + 27);
        *((_DWORD *)this + 11) |= 0x80000000;
      }
      ObfDereferenceObject(v7);
    }
    if ( v5 )
      GreUnlockDwmState();
  }
  return v3;
}
