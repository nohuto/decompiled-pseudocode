/*
 * XREFs of ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00096F4
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009500 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 28;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 249;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 56);
      *((_QWORD *)v4 + 2) = *((_QWORD *)this + 31);
      *((_DWORD *)v4 + 6) = (*((_BYTE *)this + 280) & 1) == 0;
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
