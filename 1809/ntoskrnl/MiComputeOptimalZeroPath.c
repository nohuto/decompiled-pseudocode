/*
 * XREFs of MiComputeOptimalZeroPath @ 0x1409BD284
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiComputeOptimalZeroPath()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  int *v6; // r15
  __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 *v15; // rdi
  ULONG_PTR v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  int *v21; // r15
  unsigned __int64 v22; // kr00_8
  unsigned __int64 v23; // r14
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned __int8 v28; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int8 v32; // r15
  struct _KPRCB *v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 *v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  ULONG_PTR v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+40h] [rbp-38h]
  ULONG_PTR v39[6]; // [rsp+48h] [rbp-30h]
  int v40; // [rsp+C0h] [rbp+48h] BYREF
  int v41; // [rsp+C4h] [rbp+4Ch]
  __int64 v42; // [rsp+C8h] [rbp+50h]
  __int64 v43; // [rsp+D0h] [rbp+58h]
  int *v44; // [rsp+D8h] [rbp+60h]

  v40 = 0;
  v0 = (unsigned int *)&v40;
  v1 = 0;
  v41 = 2;
  for ( i = 0LL; ; ++i )
  {
    result = MiGetPage((__int64)&MiSystemPartition, v1, 0);
    v39[i + 2] = result;
    if ( result == -1 )
      break;
    v4 = *v0;
    v5 = 48 * result - 0x58000000000LL;
    v39[i] = v5;
    if ( *(unsigned __int8 *)(v5 + 34) >> 6 != v4 )
      MiChangePageAttribute(v5, v4, 0);
    ++v1;
    ++v0;
    if ( v1 >= 2 )
    {
      v36 = 2LL;
      v6 = &v40;
      v35 = (unsigned __int64 *)&unk_14043B228;
      v7 = 0LL;
      v44 = &v40;
      v43 = 0LL;
      do
      {
        v8 = *(ULONG_PTR *)((char *)&v39[2] + v7);
        v9 = 0LL;
        v10 = *v6;
        v37 = v8;
        v11 = 3LL;
        do
        {
          v12 = __rdtsc();
          _InterlockedOr(v34, 0);
          MiZeroPhysicalPage(v8, 3, v10);
          _InterlockedOr(v34, 0);
          v13 = __rdtsc();
          v9 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
          --v11;
        }
        while ( v11 );
        v14 = *(ULONG_PTR *)((char *)v39 + v7);
        v15 = v35;
        v16 = v37;
        v42 = 3LL;
        v38 = v9 / 3;
        v17 = 0LL;
        do
        {
          v18 = __rdtsc();
          _InterlockedOr(v34, 0);
          MiChangePageAttribute(v14, 1u, 0);
          MiZeroPhysicalPage(v16, 3, v10);
          MiChangePageAttribute(v14, v10, 0);
          _InterlockedOr(v34, 0);
          v19 = __rdtsc();
          v17 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v18;
          --v42;
        }
        while ( v42 );
        v20 = v43;
        v21 = v44;
        v22 = v17;
        v23 = v38;
        if ( v22 / 3 < 9 * (v38 / 0xA) )
          dword_14043B1DC[4 * v10] = 1;
        v7 = v20 + 8;
        *(v15 - 1) = v23;
        v6 = v21 + 1;
        *v15 = v22 / 3;
        v43 = v7;
        v24 = v36-- == 1;
        v44 = v6;
        v35 = v15 + 2;
      }
      while ( !v24 );
      v25 = 0LL;
      v26 = 2LL;
      do
      {
        v27 = v39[v25];
        v28 = MiLockPageInline(v27);
        MiInsertPageInFreeOrZeroedList(v39[v25 + 2], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v28;
        __writecr8(v28);
        ++v25;
        --v26;
      }
      while ( v26 );
      return result;
    }
  }
  if ( v1 )
  {
    v30 = v1;
    do
    {
      --v30;
      --v1;
      v31 = v39[v30];
      v32 = MiLockPageInline(v31);
      MiInsertPageInFreeOrZeroedList(v39[v30 + 2], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
      {
        v33 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
      result = v32;
      __writecr8(v32);
    }
    while ( v1 );
  }
  return result;
}
