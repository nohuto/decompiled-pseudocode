/*
 * XREFs of ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1801A99C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801A88F4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBounceParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm0_4
  void (__fastcall **v7)(__int64); // rax
  void (__fastcall *v8)(__int64); // rax
  float v9; // xmm1_4

  CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
  v5 = *((_QWORD *)this + 50);
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = *((float *)a3 + 2);
  v7 = *(void (__fastcall ***)(__int64))v5;
  *(float *)(v5 + 28) = v6;
  v8 = v7[1];
  *(float *)(v5 + 32) = v6 / 0.0099999998;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm);
  *(float *)(v5 + 36) = v9;
  *(float *)(v5 + 40) = (float)((float)(v9 + 1.0) * -1.0) / 0.0099999998;
  v8(v5);
  return 0LL;
}
