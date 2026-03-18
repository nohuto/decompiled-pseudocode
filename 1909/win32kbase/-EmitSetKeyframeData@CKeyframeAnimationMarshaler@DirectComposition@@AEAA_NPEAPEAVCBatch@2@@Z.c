/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006BAC
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BD6A0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 && *((_QWORD *)this + 14) && *((_QWORD *)this + 16) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, &v10) )
    {
      v4 = (char *)v10;
      *(_DWORD *)v10 = 72;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x44uLL);
      *v5 = 246;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *((_DWORD *)this + 34);
      v5[3] = *(_DWORD *)(*((_QWORD *)this + 14) + 24LL);
      v5[4] = *((_DWORD *)this + 30);
      v5[5] = *((_DWORD *)this + 32);
      v5[6] = *((_DWORD *)this + 52);
      v5[7] = *((_DWORD *)this + 53);
      v5[8] = *((_DWORD *)this + 55);
      v5[16] = *((_DWORD *)this + 57);
      v5[9] = *((_DWORD *)this + 58);
      v5[10] = *((_DWORD *)this + 60);
      v6 = *((_QWORD *)this + 36);
      if ( v6 )
        LODWORD(v6) = *(_DWORD *)(v6 + 40);
      v5[11] = v6;
      v7 = *((_QWORD *)this + 18);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 24);
      else
        v8 = 0;
      v5[12] = v8;
      v5[13] = *((_DWORD *)this + 40);
      v5[14] = *((_DWORD *)this + 38);
      v5[15] = *((_DWORD *)this + 42);
      *((_DWORD *)this + 42) = 0;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
