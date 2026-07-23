/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x140126D20
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x140126F50 (IopProcessIrpStackProfiler.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x1401C7840 (KiCustomAccessRoutine2.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall IopIrpStackProfilerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  unsigned __int64 v4; // rdi
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  int v9; // edx
  __int64 j; // rcx
  ULONG k; // ebx
  __int64 v12; // rax
  _DWORD v13[32]; // [rsp+0h] [rbp-208h] BYREF
  __int64 v14; // [rsp+83h] [rbp-185h]
  __int64 v15; // [rsp+ABh] [rbp-15Dh]
  unsigned __int64 v16; // [rsp+C3h] [rbp-145h]
  _DWORD *v17; // [rsp+138h] [rbp-D0h]
  _QWORD v18[20]; // [rsp+150h] [rbp-B8h] BYREF

  v17 = v13;
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v13[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v16 = SystemArgument1;
    v14 = __ROL8__(DeferredContext, SystemArgument1);
    v15 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine2(DeferredContext);
  }
  memset(v18, 0, sizeof(v18));
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v4 += (unsigned int)(*(_DWORD *)(Prcb + 25872) - *(_DWORD *)(Prcb + 25956));
      v7 = 0LL;
      v8 = (_DWORD *)(Prcb + 25792);
      do
      {
        v18[v7++] += (unsigned int)(*v8 - v8[21]);
        ++v8;
      }
      while ( v7 < 20 );
    }
  }
  v9 = 20;
  if ( v4 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v9 = 0;
    for ( j = 0LL; j < 20; ++j )
    {
      if ( v18[j] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v9;
    }
  }
  if ( v9 != 20 )
  {
    IopProcessIrpStackProfiler(v18);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
    {
      v12 = KeGetPrcb(k);
      if ( v12 )
      {
        *(_OWORD *)(v12 + 25876) = *(_OWORD *)(v12 + 25792);
        *(_OWORD *)(v12 + 25892) = *(_OWORD *)(v12 + 25808);
        *(_OWORD *)(v12 + 25908) = *(_OWORD *)(v12 + 25824);
        *(_OWORD *)(v12 + 25924) = *(_OWORD *)(v12 + 25840);
        *(_OWORD *)(v12 + 25940) = *(_OWORD *)(v12 + 25856);
        *(_DWORD *)(v12 + 25956) = *(_DWORD *)(v12 + 25872);
      }
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
}
