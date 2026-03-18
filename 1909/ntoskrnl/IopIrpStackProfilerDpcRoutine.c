/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x140101190
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x1401013DC (IopProcessIrpStackProfiler.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x1401CE830 (KiCustomAccessRoutine2.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall IopIrpStackProfilerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  unsigned __int64 v8; // rdi
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 j; // rcx
  ULONG k; // ebx
  __int64 v16; // rax
  _DWORD v17[82]; // [rsp+0h] [rbp-228h] BYREF
  _DWORD *v18; // [rsp+148h] [rbp-E0h]
  _QWORD v19[20]; // [rsp+160h] [rbp-C8h] BYREF

  v18 = v17;
  memset(&v17[32], 0, 0x5BuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v17[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v17[52] + 3) = SystemArgument1;
    *(_QWORD *)((char *)&v17[36] + 3) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v17[46] + 3) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine2(DeferredContext);
  }
  memset(v19, 0, sizeof(v19));
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v8 += (unsigned int)(*(_DWORD *)(Prcb + 25872) - *(_DWORD *)(Prcb + 25956));
      v11 = 0LL;
      v12 = (_DWORD *)(Prcb + 25792);
      do
      {
        v19[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  if ( v8 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v13 = 0;
    for ( j = 0LL; j < 20; ++j )
    {
      if ( v19[j] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v13;
    }
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v19);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
    {
      v16 = KeGetPrcb(k);
      if ( v16 )
      {
        *(_OWORD *)(v16 + 25876) = *(_OWORD *)(v16 + 25792);
        *(_OWORD *)(v16 + 25892) = *(_OWORD *)(v16 + 25808);
        *(_OWORD *)(v16 + 25908) = *(_OWORD *)(v16 + 25824);
        *(_OWORD *)(v16 + 25924) = *(_OWORD *)(v16 + 25840);
        *(_OWORD *)(v16 + 25940) = *(_OWORD *)(v16 + 25856);
        *(_DWORD *)(v16 + 25956) = *(_DWORD *)(v16 + 25872);
      }
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
}
