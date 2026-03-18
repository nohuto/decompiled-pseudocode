/*
 * XREFs of ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A831C
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A8610 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v4; // si
  _DWORD *v5; // rbx
  int v6; // ebx
  _DWORD *v7; // r14
  __int64 v8; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v4 = 1;
  if ( (v2 & 0x200) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x94uLL, &v10) )
    {
      v5 = (char *)v10 + 4;
      *(_DWORD *)v10 = 148;
      memset(v5, 0, 0x90uLL);
      *v5 = 272;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *(_DWORD *)(*((_QWORD *)this + 38) + 24LL);
      memmove(v5 + 4, (char *)this + 136, *((unsigned int *)this + 33));
      v5[3] = *((_DWORD *)this + 33);
      *((_DWORD *)this + 4) &= ~0x200u;
      return v4;
    }
    return 0;
  }
  if ( (v2 & 0x100) == 0 )
    return v4;
  v6 = 0;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v10) )
    return 0;
  v7 = (char *)v10 + 4;
  *(_DWORD *)v10 = 52;
  memset(v7, 0, 0x30uLL);
  *v7 = 271;
  v7[1] = *((_DWORD *)this + 6);
  *(_OWORD *)(v7 + 2) = *(_OWORD *)((char *)this + 264);
  *(_OWORD *)(v7 + 6) = *(_OWORD *)((char *)this + 280);
  *((_QWORD *)v7 + 5) = *((_QWORD *)this + 37);
  v8 = *((_QWORD *)this + 38);
  if ( v8 )
    v6 = *(_DWORD *)(v8 + 24);
  v7[5] = v6;
  *((_DWORD *)this + 4) &= ~0x100u;
  return v4;
}
