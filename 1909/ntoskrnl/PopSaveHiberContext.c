/*
 * XREFs of PopSaveHiberContext @ 0x140599620
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1401CC380 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140083DD0 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x1400840D0 (RtlCopyBitMap.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     PopResetRangeEnum @ 0x14013DCD8 (PopResetRangeEnum.c)
 *     IoNotifyDump @ 0x14015FD50 (IoNotifyDump.c)
 *     IoGetDumpHiberRanges @ 0x14015FDCC (IoGetDumpHiberRanges.c)
 *     IoDumpStackResumeCapable @ 0x140169BA0 (IoDumpStackResumeCapable.c)
 *     IoInitializeDumpStack @ 0x140169BD0 (IoInitializeDumpStack.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140284608 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x140284634 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x14028A8E8 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028A948 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x14028AC9C (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14028ADD0 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14028FD60 (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x1402A1FD0 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x1402ED674 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1402EDAB4 (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x1402F7658 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x14030AC9C (DbgUnLoadImageSymbols.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PopCreateDumpMdl @ 0x140599A34 (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x140599AEC (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x140599C08 (PopCompressHiberBlocks.c)
 *     PopWriteHeaderPages @ 0x14059AB18 (PopWriteHeaderPages.c)
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1405AC78C (PopSetMemoryOverwriteRequestAction.c)
 *     PopWriteChecksumPages @ 0x1405AD548 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1405AD5E0 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x1405ADE7C (PopNotifyShutdownListener.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8
  __int64 Number; // rdi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // r13
  _RTL_BITMAP *v7; // rsi
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  _RTL_BITMAP *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  ULONG_PTR v15; // rbp
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbp
  char *v20; // rsi
  _QWORD *v21; // rcx
  PVOID v22; // rax
  __int64 v23; // rdx
  int v24; // edi
  unsigned int v25; // r12d
  ULONG v26; // eax
  _DWORD *v27; // rsi
  int v28; // ebp
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  int i; // ecx
  int v33; // eax
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rdx
  ULONG v39; // eax
  _DWORD *v40; // rsi
  int v41; // ebp
  __int64 v42; // rdi
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r9
  char v46; // [rsp+30h] [rbp-2B8h]
  _OWORD v47[5]; // [rsp+40h] [rbp-2A8h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-250h]
  _QWORD v49[3]; // [rsp+A0h] [rbp-248h] BYREF
  _OWORD v50[5]; // [rsp+C0h] [rbp-228h] BYREF
  _OWORD v51[5]; // [rsp+110h] [rbp-1D8h] BYREF
  void *v52[40]; // [rsp+160h] [rbp-188h] BYREF
  int v53; // [rsp+2E0h] [rbp-8h]

  memset(v49, 0, sizeof(v49));
  memset(v52, 0, 0x138uLL);
  memset(v47, 0, sizeof(v47));
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20)) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(BugCheckParameter3 + 20) );
      }
      if ( PoResumeFromHibernate )
        return 1073742484;
      if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24)) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(BugCheckParameter3 + 24) );
      }
    }
  }
  else
  {
    PopCheckpointSystemSleep(19);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return 0;
  if ( !(_DWORD)Number )
  {
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v53 & 0x200) != 0 )
      PopInternalError(0xA199AuLL);
    if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
    {
      v46 = 0;
    }
    else
    {
      v46 = IoDumpStackResumeCapable();
      if ( v46 )
        goto LABEL_13;
    }
    dword_140443448 |= 4u;
    byte_1404433C1 = 1;
LABEL_13:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140443448 |= 8u;
      byte_1404433C1 = 1;
    }
    if ( !(unsigned __int8)off_140424590[0]() )
    {
      dword_140443448 |= 1u;
      byte_1404433C1 = 1;
    }
    v5 = HvlHypervisorConnected == 0;
    v6 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = v49;
    *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v5 )
    {
      HvlDisableEnlightenment(0);
      off_1404244E0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v47[0] = qword_140504438;
        *((_QWORD *)&v47[0] + 1) = qword_1405043D8;
        *(_QWORD *)&v47[1] = qword_1405043E0;
        *((_QWORD *)&v47[1] + 1) = qword_1405043D0;
        *(_QWORD *)&v47[2] = qword_1405043F0;
        *((_QWORD *)&v47[2] + 1) = qword_1405043E8;
        v47[3] = xmmword_140504418;
        v47[4] = xmmword_140504428;
        if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        {
          v50[0] = v47[0];
          v50[2] = v47[2];
          v50[1] = v47[1];
          v50[4] = v47[4];
          v50[3] = v47[3];
          v33 = HvlPrepareForSecureHibernate(v50);
        }
        else
        {
          v51[0] = v47[0];
          v51[2] = v47[2];
          v51[1] = v47[1];
          v51[4] = v47[4];
          v51[3] = v47[3];
          v33 = HvlPrepareForHibernate(
                  v51,
                  (_QWORD *)(v6 + 872),
                  (_QWORD *)(v6 + 880),
                  (_QWORD *)(v6 + 888),
                  (_QWORD *)(v6 + 896));
        }
        v34 = v33;
        if ( v33 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v34, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        *(_DWORD *)(BugCheckParameter3 + 20) = 0;
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
        while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_DWORD *)(BugCheckParameter3 + 20) = KeNumberProcessors_0;
        *(_DWORD *)(BugCheckParameter3 + 24) = 0;
      }
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
      else
        HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
    }
    ++*(_DWORD *)v6;
    v7 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    v8 = 0;
    v9 = *(_DWORD **)(BugCheckParameter3 + 56);
    v10 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v8;
        *v9++ |= *v10++;
      }
      while ( v8 < v7->SizeOfBitMap >> 5 );
    }
    if ( byte_1404433C1 )
    {
      v11 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 48), (PRTL_BITMAP)(BugCheckParameter3 + 32), 0);
      v11 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v11);
    v12 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    IoGetDumpHiberRanges(v13, v12);
    if ( !byte_1404433C1 )
      IoNotifyDump(1);
    v14 = __rdtsc();
    v15 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
    v16 = __rdtsc();
    qword_1404434E8 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v14;
    if ( (v15 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20);
      PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v15, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
    v17 = *(_QWORD **)(BugCheckParameter3 + 64);
    PoHiberInProgress = 1;
    if ( v17 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v18 = v17[4];
        v19 = v17[3];
        v20 = (char *)v17[5];
        v17 = (_QWORD *)*v17;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v18 - v19; v19 < v18; v19 += (unsigned __int64)LODWORD(v52[5]) >> 12 )
        {
          PopCreateDumpMdl(BugCheckParameter3, v52, v19, v18);
          memmove(v20, v52[3], LODWORD(v52[5]));
          v20 += LODWORD(v52[5]);
        }
      }
      while ( v17 != (_QWORD *)(BugCheckParameter3 + 64) );
      v7 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    PopResetRangeEnum((_QWORD *)BugCheckParameter3);
    v21 = *(_QWORD **)(BugCheckParameter3 + 160);
    v22 = qword_140443398;
    *v21 = qword_140443398;
    v21[1] = v22;
    v21[2] = 0LL;
    v48 = __rdtsc();
    v24 = PopWriteHeaderPages(BugCheckParameter3, v6);
    if ( v24 >= 0 )
    {
      v25 = *(_DWORD *)(v6 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
      {
        v35 = (unsigned int)PopHiberScratchPages;
        v36 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v6 + 96) = v36 + ((unsigned __int64)(4 * v35 + 4095) >> 12);
        PopWriteSecurePages(BugCheckParameter3);
        qword_140443670 = *(unsigned int *)(BugCheckParameter3 + 252);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v7;
      v26 = RtlNumberOfClearBits(v7);
      v27 = qword_140443418;
      v28 = *(_DWORD *)(BugCheckParameter3 + 280);
      v29 = *(_QWORD *)(BugCheckParameter3 + 272);
      v30 = (v26 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_140443418, 0, 0x40uLL);
      v27[6] = 0;
      *(_QWORD *)v27 = v29;
      v27[2] = v28;
      *((_QWORD *)v27 + 2) = v30;
      qword_140443678 = 0LL;
      qword_140443680 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( v46 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      v31 = *(unsigned int *)(BugCheckParameter3 + 252)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
      *(_QWORD *)(v6 + 104) = v31;
      *(_QWORD *)(BugCheckParameter3 + 376) = v31 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      PopWriteHiberImage(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      for ( i = *(_DWORD *)(BugCheckParameter3 + 256);
            *(_DWORD *)(BugCheckParameter3 + 12) != i;
            i = *(_DWORD *)(BugCheckParameter3 + 256) )
      {
        _mm_pause();
      }
      v37 = 0;
      if ( i )
      {
        do
        {
          v38 = v37++;
          v38 <<= 7;
          qword_140443678 += *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 264) + 56);
          *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 264) + 56) = 0LL;
        }
        while ( v37 < *(_DWORD *)(BugCheckParameter3 + 256) );
      }
      qword_140443688 = qword_1404436A8;
      qword_140443698 = (unsigned int)dword_1404436B0;
      qword_1404436A8 = 0LL;
      dword_1404436B0 = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v39 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
      v40 = qword_140443418;
      v41 = *(_DWORD *)(BugCheckParameter3 + 280);
      v42 = *(_QWORD *)(BugCheckParameter3 + 272);
      v43 = (unsigned __int64)v39 << 12;
      memset(qword_140443418, 0, 0x40uLL);
      v40[6] = 0;
      *(_QWORD *)v40 = v42;
      v40[2] = v41;
      *((_QWORD *)v40 + 2) = v43;
      *(_QWORD *)(v6 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 376) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      PopWriteHiberImage(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      PopWriteChecksumPages(BugCheckParameter3);
      v44 = v48;
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      PopWriteImageHeader(BugCheckParameter3, v6, v25, v44);
      v24 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v24 >= 0 )
      {
        if ( dword_140442FE0 == dword_140442FE8 )
        {
          if ( (PopSimulate & 0x8000) == 0 )
            DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
          VslNotifyShutdown(1u);
        }
        if ( (PopSimulate & 0x1000) != 0 )
        {
          v24 = -1073741632;
        }
        else
        {
          v24 = 0;
          if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
          {
            v24 = 1073742484;
LABEL_82:
            PopCheckpointSystemSleep(24);
            off_140424608[0]();
            return (unsigned int)v24;
          }
        }
      }
    }
    KdPowerTransition(4LL, v23);
    if ( v24 >= 0 && dword_140442FE0 == 5 )
    {
      PopNotifyShutdownListener();
      HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
    goto LABEL_82;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  LOBYTE(v2) = 1;
  v4 = Number << 7;
  PopCompressHiberBlocks(BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 264), v2);
  if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12)) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(BugCheckParameter3 + 12) );
  }
  return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 264), 0LL);
}
