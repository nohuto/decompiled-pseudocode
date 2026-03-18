/*
 * XREFs of PopSaveHiberContext @ 0x14056A060
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1401C51C0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14000F420 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x14000F710 (RtlCopyBitMap.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     PopResetRangeEnum @ 0x14013BB84 (PopResetRangeEnum.c)
 *     IoNotifyDump @ 0x1401445DC (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x140144684 (IoInitializeDumpStack.c)
 *     IoGetDumpHiberRanges @ 0x1401446B8 (IoGetDumpHiberRanges.c)
 *     IoDumpStackResumeCapable @ 0x1401599C0 (IoDumpStackResumeCapable.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x140270AA8 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x140270AD4 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x14027683C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14027689C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140276BE0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140276CF8 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14027B7DC (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x14028C0E0 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x1402D3224 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1402D3638 (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x1402DBFBC (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1402EC91C (DbgUnLoadImageSymbols.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     PopWriteHeaderPages @ 0x140569A20 (PopWriteHeaderPages.c)
 *     PopCreateDumpMdl @ 0x14056A410 (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x14056A4C8 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x14056AB70 (PopCompressHiberBlocks.c)
 *     PopMarkComponentsBootPhase @ 0x14056B53C (PopMarkComponentsBootPhase.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x14057C8FC (PopSetMemoryOverwriteRequestAction.c)
 *     PopWriteChecksumPages @ 0x14057D6A8 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x14057D740 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x14057DFB4 (PopNotifyShutdownListener.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 Number; // rdi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // r13
  struct _RTL_BITMAP *v8; // rsi
  unsigned int v9; // r8d
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  struct _RTL_BITMAP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  char *v21; // rsi
  _QWORD *v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rdx
  int v25; // edi
  unsigned int v26; // r12d
  ULONG v27; // eax
  _DWORD *v28; // rsi
  int v29; // ebp
  __int64 v30; // rdi
  __int64 v31; // r14
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  ULONG v40; // eax
  _DWORD *v41; // rsi
  int v42; // ebp
  __int64 v43; // rdi
  unsigned __int64 v44; // r14
  char v46; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-2A0h]
  __int128 v48; // [rsp+40h] [rbp-298h]
  __int128 v49; // [rsp+50h] [rbp-288h]
  __int128 v50; // [rsp+60h] [rbp-278h]
  _OWORD v51[5]; // [rsp+90h] [rbp-248h] BYREF
  _OWORD v52[5]; // [rsp+E0h] [rbp-1F8h] BYREF
  char v53; // [rsp+130h] [rbp-1A8h] BYREF
  _BYTE v54[24]; // [rsp+150h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-170h]
  size_t Size; // [rsp+178h] [rbp-160h]
  int v57; // [rsp+2D0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
      while ( *(_DWORD *)(BugCheckParameter3 + 20) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
      while ( *(_DWORD *)(BugCheckParameter3 + 24) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(0x13u);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return 0;
  if ( !(_DWORD)Number )
  {
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v57 & 0x200) != 0 )
      PopInternalError(0xA18B6uLL);
    if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
    {
      v46 = 0;
    }
    else
    {
      v46 = IoDumpStackResumeCapable();
      if ( v46 )
        goto LABEL_12;
    }
    dword_140417AE8 |= 4u;
    byte_140417A61 = 1;
LABEL_12:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140417AE8 |= 8u;
      byte_140417A61 = 1;
    }
    if ( !(unsigned __int8)off_1403FE590[0]() )
    {
      dword_140417AE8 |= 1u;
      byte_140417A61 = 1;
    }
    v6 = HvlHypervisorConnected == 0;
    v7 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = &v53;
    *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v6 )
    {
      HvlDisableEnlightenment(0);
      off_1403FE4E0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v48 = qword_1404DA298;
        *((_QWORD *)&v48 + 1) = qword_1404DA238;
        *(_QWORD *)&v49 = qword_1404DA240;
        *((_QWORD *)&v49 + 1) = qword_1404DA230;
        *(_QWORD *)&v50 = qword_1404DA250;
        *((_QWORD *)&v50 + 1) = qword_1404DA248;
        if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        {
          v51[0] = v48;
          v51[2] = v50;
          v51[1] = v49;
          v51[4] = xmmword_1404DA288;
          v51[3] = xmmword_1404DA278;
          v33 = HvlPrepareForSecureHibernate(v51);
        }
        else
        {
          v52[0] = v48;
          v52[2] = v50;
          v52[1] = v49;
          v52[4] = xmmword_1404DA288;
          v52[3] = xmmword_1404DA278;
          v33 = HvlPrepareForHibernate(
                  v52,
                  (_QWORD *)(v7 + 872),
                  (_QWORD *)(v7 + 880),
                  (_QWORD *)(v7 + 888),
                  (_QWORD *)(v7 + 896));
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
    ++*(_DWORD *)v7;
    v8 = (struct _RTL_BITMAP *)(BugCheckParameter3 + 48);
    v9 = 0;
    v10 = *(_DWORD **)(BugCheckParameter3 + 56);
    v11 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v9;
        *v10++ |= *v11++;
      }
      while ( v9 < v8->SizeOfBitMap >> 5 );
    }
    if ( byte_140417A61 )
    {
      v12 = (struct _RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((unsigned int *)(BugCheckParameter3 + 48), BugCheckParameter3 + 32, 0);
      v12 = (struct _RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v12);
    v13 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    IoGetDumpHiberRanges(v14, v13);
    if ( !byte_140417A61 )
      IoNotifyDump(1);
    v15 = __rdtsc();
    v16 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
    v17 = __rdtsc();
    qword_140417BA8 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
    if ( (v16 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(0x14u);
      PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
    v18 = *(_QWORD **)(BugCheckParameter3 + 64);
    PoHiberInProgress = 1;
    if ( v18 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v19 = v18[4];
        v20 = v18[3];
        v21 = (char *)v18[5];
        v18 = (_QWORD *)*v18;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v19 - v20;
              v20 < v19;
              v20 += (unsigned __int64)(unsigned int)Size >> 12 )
        {
          PopCreateDumpMdl(BugCheckParameter3, v54, v20, v19);
          memmove(v21, Src, (unsigned int)Size);
          v21 += (unsigned int)Size;
        }
      }
      while ( v18 != (_QWORD *)(BugCheckParameter3 + 64) );
      v8 = (struct _RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    PopResetRangeEnum((_QWORD *)BugCheckParameter3);
    v22 = *(_QWORD **)(BugCheckParameter3 + 160);
    v23 = qword_140417A38;
    *v22 = qword_140417A38;
    v22[1] = v23;
    v22[2] = 0LL;
    v47 = __rdtsc();
    v25 = PopWriteHeaderPages(BugCheckParameter3, v7);
    if ( v25 >= 0 )
    {
      v26 = *(_DWORD *)(v7 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
      {
        v35 = (unsigned int)PopHiberScratchPages;
        v36 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v7 + 96) = v36 + ((unsigned __int64)(4 * v35 + 4095) >> 12);
        PopWriteSecurePages(BugCheckParameter3);
        qword_140417D30 = *(unsigned int *)(BugCheckParameter3 + 252);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v8;
      v27 = RtlNumberOfClearBits(v8);
      v28 = qword_140417AB8;
      v29 = *(_DWORD *)(BugCheckParameter3 + 280);
      v30 = *(_QWORD *)(BugCheckParameter3 + 272);
      v31 = (v27 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_140417AB8, 0, 0x40uLL);
      v28[6] = 0;
      *(_QWORD *)v28 = v30;
      v28[2] = v29;
      *((_QWORD *)v28 + 2) = v31;
      qword_140417D38 = 0LL;
      qword_140417D40 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( v46 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      v32 = *(unsigned int *)(BugCheckParameter3 + 252)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
      *(_QWORD *)(v7 + 104) = v32;
      *(_QWORD *)(BugCheckParameter3 + 376) = v32 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      PopWriteHiberImage(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( 1 )
      {
        v37 = *(_DWORD *)(BugCheckParameter3 + 256);
        if ( *(_DWORD *)(BugCheckParameter3 + 12) == v37 )
          break;
        _mm_pause();
      }
      v38 = 0;
      if ( v37 )
      {
        do
        {
          v39 = v38++;
          v39 <<= 7;
          qword_140417D38 += *(_QWORD *)(v39 + *(_QWORD *)(BugCheckParameter3 + 264) + 56);
          *(_QWORD *)(v39 + *(_QWORD *)(BugCheckParameter3 + 264) + 56) = 0LL;
        }
        while ( v38 < *(_DWORD *)(BugCheckParameter3 + 256) );
      }
      qword_140417D48 = qword_140417D68;
      qword_140417D58 = (unsigned int)dword_140417D70;
      qword_140417D68 = 0LL;
      dword_140417D70 = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v40 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
      v41 = qword_140417AB8;
      v42 = *(_DWORD *)(BugCheckParameter3 + 280);
      v43 = *(_QWORD *)(BugCheckParameter3 + 272);
      v44 = (unsigned __int64)v40 << 12;
      memset(qword_140417AB8, 0, 0x40uLL);
      v41[6] = 0;
      *(_QWORD *)v41 = v43;
      v41[2] = v42;
      *((_QWORD *)v41 + 2) = v44;
      *(_QWORD *)(v7 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 376) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      PopWriteHiberImage(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      PopWriteChecksumPages(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      PopWriteImageHeader(BugCheckParameter3, v7, v26, v47);
      v25 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v25 >= 0 )
      {
        if ( dword_140417720 == dword_140417728 )
        {
          if ( (PopSimulate & 0x8000) == 0 )
            DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
          VslNotifyShutdown(1u);
        }
        if ( (PopSimulate & 0x1000) != 0 )
        {
          v25 = -1073741632;
        }
        else
        {
          v25 = 0;
          if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
          {
            v25 = 1073742484;
LABEL_85:
            PopCheckpointSystemSleep(0x18u);
            off_1403FE608[0]();
            return (unsigned int)v25;
          }
        }
      }
    }
    KdPowerTransition(4LL, v24);
    if ( v25 >= 0 && dword_140417720 == 5 )
    {
      PopNotifyShutdownListener();
      HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
    goto LABEL_85;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  LOBYTE(a3) = 1;
  v5 = Number << 7;
  PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), a3);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
  while ( *(_DWORD *)(BugCheckParameter3 + 12) )
    _mm_pause();
  return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), 0LL);
}
