/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0018D30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0025650 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 216;
  v7 = *(unsigned int *)(v2 + 80);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v8 >= (unsigned int)v7 || *(_DWORD *)(v2 + 24) <= 0xD8u) && (v8 <= 0xD8 || *(_DWORD *)(v2 + 24) > 0xD8u) )
  {
    memmove((void *)(v4 + 80), (const void *)(v2 + 80), v7 - 80);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)a2
                                        - 104
                                        + *(_QWORD *)this
                                        + 104LL;
    return 1LL;
  }
  if ( (unsigned int)v7 > 0xD8 )
    v6 = *(_DWORD *)(v2 + 80);
  v11 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, v6);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
  if ( v10 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v10, a2);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    return 1LL;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return 0LL;
}
