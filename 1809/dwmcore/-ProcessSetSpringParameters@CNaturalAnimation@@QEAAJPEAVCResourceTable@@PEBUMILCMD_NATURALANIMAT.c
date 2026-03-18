/*
 * XREFs of ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x1801A9B0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCSpringAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCSpringAccelerator@@@12@@Z @ 0x1801A800C (--$-4VCSpringAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCSp.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801A88F4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetSpringParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_NATURALANIMATION_SETSPRINGPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

  v9 = (__int64 (__fastcall ***)(_QWORD))a2;
  CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
  v5 = *((_QWORD *)this + 50);
  v9 = (__int64 (__fastcall ***)(_QWORD))v5;
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = 1.0 / *((float *)a3 + 3);
  v7 = *((float *)a3 + 2);
  *(float *)(v5 + 36) = v7;
  *(float *)(v5 + 40) = v6;
  *(float *)(v5 + 28) = v6 * v6;
  *(float *)(v5 + 32) = (float)(v7 + v7) * v6;
  Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>((__int64 *)this + 50, &v9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
