/*
 * XREFs of ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00934A8
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BF740 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v5; // rax
  char *v6; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 && *((_QWORD *)this + 33) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 36;
      v6 = v5 + 4;
      memset(v5 + 4, 0, 0x20uLL);
      *(_DWORD *)v6 = 251;
      *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
      *((_QWORD *)v6 + 1) = *((_QWORD *)this + 33);
      *((_QWORD *)v6 + 2) = *((_QWORD *)this + 34);
      v6[24] = (*((_BYTE *)this + 280) & 2) == 0;
      *((_DWORD *)this + 4) |= 0x1000u;
      *((_BYTE *)this + 280) |= 2u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
