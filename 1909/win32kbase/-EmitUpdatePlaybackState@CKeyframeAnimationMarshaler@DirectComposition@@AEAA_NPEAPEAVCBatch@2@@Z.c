/*
 * XREFs of ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007308
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BD6A0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rax
  char *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 36;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x20uLL);
      *(_DWORD *)v5 = 252;
      *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 56);
      *((_QWORD *)v5 + 2) = *((_QWORD *)this + 31);
      v5[24] = (*((_BYTE *)this + 280) & 1) == 0;
      *((_DWORD *)this + 4) |= 0x800u;
      *((_BYTE *)this + 280) |= 1u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
