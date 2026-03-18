/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00FACBC (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00FC2F0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C001FAB0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0024550 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
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
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (int)(*(_DWORD *)(*(_QWORD *)a2 + 40LL) - *(_QWORD *)a2 - 104)
                                        + *(_QWORD *)this
                                        + 104LL;
    return 1LL;
  }
  if ( (unsigned int)v7 > 0xD8 )
    v6 = *(_DWORD *)(v2 + 80);
  v10 = 0LL;
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
