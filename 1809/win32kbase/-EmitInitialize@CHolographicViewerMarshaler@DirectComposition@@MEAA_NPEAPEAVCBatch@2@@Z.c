/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0048810 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0048854 (CheckOrAcquireDwmStateLock.c)
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
  if ( v2 >= 0 && (v2 & 0x1F) == 0x1F && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x38uLL, &v14) )
  {
    v5 = CheckOrAcquireDwmStateLock();
    v6 = ReferenceDwmProcess();
    v7 = v6;
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 10);
      v9 = *((_QWORD *)this + 13);
      v13 = 0LL;
      v12 = 0;
      if ( (int)ObDuplicateObject(v9, v8, v6, &v13, 0, 0, 6, v12) >= 0 )
      {
        v10 = (char *)v14;
        v3 = 1;
        *(_DWORD *)v14 = 56;
        *((_DWORD *)v10 + 1) = 193;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        *((_DWORD *)v10 + 3) = *((_DWORD *)this + 12);
        *((_DWORD *)v10 + 4) = *((_DWORD *)this + 13);
        *(_QWORD *)(v10 + 20) = *(_QWORD *)((char *)this + 92);
        *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)this + 56);
        *(_QWORD *)(v10 + 44) = v13;
        *((_DWORD *)v10 + 13) = *((_DWORD *)this + 25);
        *((_DWORD *)this + 11) |= 0x80000000;
      }
      ObfDereferenceObject(v7);
    }
    if ( v5 )
      GreUnlockDwmState();
  }
  return v3;
}
