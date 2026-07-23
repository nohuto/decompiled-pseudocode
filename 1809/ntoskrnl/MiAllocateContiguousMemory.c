/*
 * XREFs of MiAllocateContiguousMemory @ 0x1400E659C
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x1400E6500 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1402A95D0 (MmAllocateContiguousMemory.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 *     ExInsertPoolTag @ 0x1400E6A34 (ExInsertPoolTag.c)
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     MiFindContiguousMemoryInPool @ 0x1401626D4 (MiFindContiguousMemoryInPool.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogGetDurationSince @ 0x1402A949C (MiLogGetDurationSince.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  LARGE_INTEGER v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned int v13; // eax
  int v14; // r9d
  unsigned __int64 v15; // r10
  int v16; // r8d
  unsigned int v17; // r11d
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rsi
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rax
  int v23; // r14d
  unsigned __int16 *v24; // rsi
  int i; // eax
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // r13
  unsigned __int8 v32; // al
  char v33; // r12
  int v34; // r14d
  SIZE_T v36; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG64 v38; // r8
  const struct _TlgProvider_t *v39; // r9
  __int64 v40; // r10
  const GUID *pActivityId; // [rsp+20h] [rbp-E0h]
  int pActivityIda; // [rsp+20h] [rbp-E0h]
  const GUID *pRelatedActivityId; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v44; // [rsp+61h] [rbp-9Fh]
  char v45; // [rsp+62h] [rbp-9Eh] BYREF
  int v46; // [rsp+64h] [rbp-9Ch]
  __int64 v47; // [rsp+68h] [rbp-98h]
  unsigned __int64 v48; // [rsp+70h] [rbp-90h]
  unsigned int v49; // [rsp+78h] [rbp-88h]
  BOOL v50; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int16 *v56; // [rsp+A0h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v61; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v62; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v63; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  char *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  __int64 *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]

  v6 = a5;
  v53 = a1;
  v8 = a4;
  v47 = a4;
  v51 = a3;
  v9 = a2;
  v48 = a2;
  v52 = -1LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = PerformanceCounter;
  v11 = 0LL;
  v50 = MmProtectFreedNonPagedPool == 1;
  v12 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v6 = a5 & 0xFFFFFFFD;
  if ( v8 && v12 > v8 || v9 > v51 || v9 + v12 <= v9 || v9 + v12 - 1 > v51 )
  {
    v34 = a6;
    v33 = 0;
    goto LABEL_38;
  }
  v13 = MiProtectionToCacheAttribute(v6);
  v16 = a6;
  v17 = v13;
  v49 = v13;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    v16 = 0;
  v46 = v16;
  if ( v16 == 0x80000000 )
    v18 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  else
    v18 = v16;
  v54 = v18;
  v19 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * v18 * (unsigned __int16)KeNumberNodes);
  if ( v16 == 0x80000000 )
    v20 = (unsigned __int16)KeNumberNodes;
  else
    v20 = 1LL;
  v21 = 512;
  v56 = &v19[v20];
  if ( (v6 & 2) != 0 )
  {
    v21 = 0;
  }
  else if ( !v14 && v17 == 1 && !MmProtectFreedNonPagedPool && v12 <= 0x200 )
  {
    while ( 1 )
    {
      pActivityIda = *v19;
      v22 = (unsigned int)ExpHeapBackedPoolEnabledState < 2
          ? MiFindContiguousMemoryInPool(v48, v15, v47, v53, pActivityIda)
          : ExAllocateContiguousHeapPool(v48, v15, v47, v53, pActivityIda);
      v11 = v22;
      if ( v22 )
        break;
      v15 = v51;
      if ( ++v19 == v56 )
      {
        v17 = v49;
        goto LABEL_22;
      }
    }
    v33 = 1;
    if ( (unsigned int)ExpHeapBackedPoolEnabledState < 2 && !(unsigned int)ExInsertPoolTag(1953394499, v22, v53, 512, 0) )
    {
      MiFreePoolPages(v11, v53, 1953394499LL);
      v11 = 0LL;
      v33 = 0;
    }
    goto LABEL_36;
  }
LABEL_22:
  v23 = 135266304;
  v24 = (unsigned __int16 *)((char *)qword_14043B110 + 2 * v54 * (unsigned __int16)KeNumberNodes);
  for ( i = MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              v48,
              v15,
              v47,
              v12,
              v17,
              *v24,
              0x80000000,
              135266304,
              0LL,
              &v52);
        i < 0;
        i = MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              v48,
              v51,
              v47,
              v12,
              v49,
              *v24,
              0x80000000,
              v23,
              0LL,
              &v52) )
  {
    if ( ++v24 == v56 )
      goto LABEL_51;
    v23 &= ~0x8000000u;
  }
  v26 = v52;
  v27 = MiMapContiguousMemory(v52 << 12, v12 << 12, v6, v50);
  v11 = v27;
  if ( v27 && !(unsigned int)ExInsertPoolTag(1416523587, v27, (_DWORD)v12 << 12, v21, 2 * v50 + 1) )
  {
    v36 = (v12 << 12) + 4096;
    if ( !v50 )
      v36 = v12 << 12;
    MmUnmapIoSpace((PVOID)v11, v36);
    v11 = 0LL;
  }
  v28 = 48 * v26 - 0x58000000000LL;
  v29 = v28 + 48 * v12;
  if ( v11 )
    v30 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  else
    v30 = 0LL;
  do
  {
    v31 = v30;
    *(_QWORD *)(v28 + 40) = *(_QWORD *)(v28 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    v32 = MiLockPageInline(v28);
    v44 = v32;
    *(_QWORD *)(v28 + 8) = v30;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v32 = v44;
    }
    __writecr8(v32);
    v30 += 8LL;
    v28 += 48LL;
    if ( !v31 )
      v30 = 0LL;
  }
  while ( v28 < v29 );
  v10 = PerformanceCounter;
  if ( !v11 )
  {
LABEL_51:
    v33 = 0;
    goto LABEL_63;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v11, 0LL, 13LL, v12);
  v33 = 0;
LABEL_36:
  if ( !v11 )
  {
LABEL_63:
    if ( v52 != -1 )
      MiFreeContiguousPages(&MiSystemPartition, v52, v12);
  }
  v9 = v48;
  v34 = v46;
  v8 = v47;
LABEL_38:
  if ( hProvider )
  {
    if ( TraceLoggingProviderEnabled(hProvider, 0, 0x40uLL) )
    {
      ((void (__fastcall *)(_QWORD))MiLogGetDurationSince)((LARGE_INTEGER)v10.QuadPart);
      if ( hProvider->LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(hProvider, 0x40uLL) )
        {
          v61 = v51 << 12;
          v63 = v53;
          v65 = &v58;
          v67 = &v59;
          v69 = &v60;
          v71 = &v61;
          v73 = &v62;
          v75 = &v45;
          v77 = &v55;
          v79 = (__int64 *)&v63;
          v58 = v40;
          v59 = v11;
          v60 = v9 << 12;
          v62 = v8 << 12;
          v45 = v33;
          v55 = v34;
          v66 = 8LL;
          v68 = 8LL;
          v70 = 8LL;
          v72 = 8LL;
          v74 = 8LL;
          v76 = 1LL;
          v78 = 4LL;
          v80 = 8LL;
          TlgWriteEx(v39, &unk_14036EB5B, v38, (ULONG)v39, pActivityId, pRelatedActivityId, 0xAu, &pData);
        }
      }
    }
  }
  return v11;
}
