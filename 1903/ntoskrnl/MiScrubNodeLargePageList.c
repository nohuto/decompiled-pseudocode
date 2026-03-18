/*
 * XREFs of MiScrubNodeLargePageList @ 0x1402E6DC0
 * Callers:
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiPageListCollision @ 0x1401194A4 (MiPageListCollision.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiRemoveFaultNode @ 0x14013809C (MiRemoveFaultNode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubPage @ 0x1402ECD28 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // r9
  ULONG_PTR v17; // rax
  __int64 v19; // r11
  __int64 v20; // rcx
  int v21; // r10d
  _QWORD *v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int8 CurrentIrql; // r12
  unsigned int v27; // r10d
  unsigned int v28; // r15d
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v32; // rcx
  unsigned __int8 v33; // r12
  _BYTE *v34; // rcx
  struct _KPRCB *v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 UltraMapping; // r15
  int i; // ecx
  int v39; // r8d
  int v40; // edx
  __int64 v41; // r11
  unsigned __int64 v42; // r12
  __int64 v43; // rdx
  int v44; // r8d
  char v45; // r11
  struct _KPRCB *v46; // rcx
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  int v50; // r15d
  unsigned __int8 v51; // cl
  char v52; // r12
  struct _KPRCB *v53; // rcx
  bool v54; // zf
  struct _KPRCB *v55; // rcx
  int v56; // edx
  unsigned __int8 v57; // r15
  struct _KPRCB *v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 v60; // r11
  ULONG_PTR v61; // rax
  unsigned __int8 v62; // [rsp+40h] [rbp-208h]
  unsigned __int8 v63; // [rsp+40h] [rbp-208h]
  unsigned int v65; // [rsp+48h] [rbp-200h]
  _BYTE *v66; // [rsp+50h] [rbp-1F8h]
  int v67; // [rsp+58h] [rbp-1F0h]
  int v68; // [rsp+5Ch] [rbp-1ECh]
  __int64 v69; // [rsp+60h] [rbp-1E8h]
  __int64 v71; // [rsp+88h] [rbp-1C0h]
  __int64 v72; // [rsp+90h] [rbp-1B8h]
  unsigned int v74; // [rsp+9Ch] [rbp-1ACh]
  unsigned int v75; // [rsp+A4h] [rbp-1A4h]
  char v76; // [rsp+A8h] [rbp-1A0h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-198h]
  __int64 v78; // [rsp+B8h] [rbp-190h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-188h]
  _DWORD v80[8]; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 *v81; // [rsp+E8h] [rbp-160h]
  _QWORD *v82; // [rsp+F0h] [rbp-158h]
  _QWORD *v83; // [rsp+F8h] [rbp-150h]
  __int64 v84; // [rsp+100h] [rbp-148h]
  __int64 v85; // [rsp+110h] [rbp-138h]
  __int64 v86; // [rsp+120h] [rbp-128h]
  unsigned __int64 v87; // [rsp+128h] [rbp-120h]
  unsigned __int64 v88; // [rsp+130h] [rbp-118h]
  __int64 v89; // [rsp+138h] [rbp-110h] BYREF
  __int64 v90; // [rsp+140h] [rbp-108h] BYREF
  unsigned __int64 v91; // [rsp+148h] [rbp-100h]
  _QWORD *v92; // [rsp+150h] [rbp-F8h]
  struct _KTHREAD *v93; // [rsp+158h] [rbp-F0h]
  __int64 v94; // [rsp+160h] [rbp-E8h]
  __int64 v95; // [rsp+168h] [rbp-E0h]
  __int64 v96; // [rsp+170h] [rbp-D8h]
  unsigned __int64 v97; // [rsp+178h] [rbp-D0h]
  volatile signed __int64 *v98; // [rsp+180h] [rbp-C8h]
  unsigned __int64 v99; // [rsp+188h] [rbp-C0h]
  unsigned __int64 v100; // [rsp+190h] [rbp-B8h]
  _BYTE v101[80]; // [rsp+1A0h] [rbp-A8h] BYREF
  _QWORD v102[2]; // [rsp+1F0h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a3;
  v12 = a2;
  v96 = a1;
  v80[4] = a2;
  v80[6] = a3;
  v81 = a7;
  v84 = a8;
  v85 = a10;
  memset(v101, 0, 0x48uLL);
  v102[0] = 0LL;
  v102[1] = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v93 = CurrentThread;
  v71 = 0LL;
  v14 = 0LL;
  v67 = 0;
  v15 = MiLargePageSizes[v11];
  v69 = v15;
  v94 = v15;
  if ( a5 )
  {
    v16 = v101;
    v66 = v101;
    v101[71] = 1;
    LOBYTE(v14) = (unsigned int)v11 <= 1;
    if ( (unsigned int)v11 > 1 )
    {
      v17 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v15);
      v14 = v17;
      if ( !v17 )
        return 1LL;
      v71 = (__int64)(v17 << 25) >> 16;
      v16 = v101;
      CurrentThread = v93;
    }
  }
  else
  {
    v16 = 0LL;
    v66 = 0LL;
  }
  v19 = a1;
  v20 = *(_QWORD *)(a1 + 16) + 1984 * v12;
  v65 = 1;
  v80[1] = 1;
  v76 = 17;
  v88 = *v81;
  v97 = v88;
  v100 = v88;
  v99 = v88;
  *v81 = 0LL;
  v77 = 0LL;
  v91 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v74 = dword_140465B40[v11];
  v80[2] = v74;
  v21 = a5;
  v22 = *(_QWORD **)(v20 + 272LL * (unsigned int)v11 + 8 * (a6 + 4 * (a5 + 2 * v10)) + 144);
  v23 = 0;
LABEL_8:
  v75 = v23;
  v92 = v22;
  v83 = v22;
  if ( v23 >= v74 )
  {
LABEL_128:
    v28 = v69;
    goto LABEL_129;
  }
  v24 = v22[2];
  v72 = v24;
  v25 = v22;
  v82 = v22;
  CurrentIrql = v76;
  while ( 1 )
  {
    if ( !v24 || (_QWORD *)*v25 == v25 )
      goto LABEL_32;
    if ( *(_DWORD *)(a9 + 4) )
    {
      v27 = 0;
      v65 = 0;
      v28 = v69;
      goto LABEL_130;
    }
    if ( v21 )
    {
      v67 &= ~4u;
    }
    else
    {
      v67 |= 4u;
      CurrentIrql = KeGetCurrentIrql();
      v76 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    if ( v16 )
      *((_QWORD *)v16 + 4) = 0LL;
    v29 = MiUnlinkNodeLargePage(v19, (unsigned int)v11, v12, a6, (__int64)v102, v67, (__int64)v16);
    v30 = v29;
    v86 = v29;
    if ( !v29 )
    {
      v21 = a5;
      if ( !a5 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v21 = 0;
        }
        __writecr8(CurrentIrql);
      }
      v19 = a1;
      LODWORD(v11) = a3;
LABEL_32:
      v23 = v75 + 1;
      v22 = v83 + 3;
      v16 = v66;
      goto LABEL_8;
    }
    if ( a5 )
      break;
    v80[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v80);
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    *(_BYTE *)(v30 + 34) = *(_BYTE *)(v30 + 34) & 0xF8 | 1;
    MiInsertLargePageInNodeList((__int64)(v30 + 0x58000000000LL) / 48, 1, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v32 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v32);
    }
    __writecr8(CurrentIrql);
    v16 = v66;
    LODWORD(v11) = a3;
LABEL_43:
    v21 = a5;
    v25 = v82;
    v24 = v72;
    v19 = a1;
  }
  v33 = MiLockPageInline(v29);
  v62 = v33;
  v34 = v66;
  if ( v66[69] == 1 )
  {
    MiRemoveFaultNode((__int64)v66);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
    __writecr8(v33);
    v16 = v66;
    LODWORD(v11) = a3;
LABEL_51:
    CurrentIrql = v76;
    goto LABEL_43;
  }
  v36 = a3;
  if ( a3 > 1 )
  {
    UltraMapping = v71;
  }
  else
  {
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v85 + 32LL * a3), a3, MiLargePageSizes[a3], 0);
    v71 = UltraMapping;
    v14 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    for ( i = a3; !i; i = 1 )
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = v66;
    v36 = a3;
  }
  *((_QWORD *)v34 + 4) = v14;
  *((_DWORD *)v34 + 16) = v36;
  *((_QWORD *)v34 + 5) = UltraMapping;
  *((_QWORD *)v34 + 6) = UltraMapping + (v69 << 12) - 1;
  v39 = -1543503868;
  if ( a3 > 1 )
    v39 = -1610612732;
  MiMakeValidPte(v14, (__int64)(v30 + 0x58000000000LL) / 48, v39);
  if ( a3 <= 1 )
  {
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v40 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
LABEL_66:
          if ( (v41 & 1) != 0 )
            v41 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        goto LABEL_66;
      }
    }
    *(_QWORD *)v14 = v41;
    if ( v40 )
      MiWritePteShadow(v14);
    goto LABEL_83;
  }
  v42 = 8 * v69 + v14;
  while ( v14 < v42 )
  {
    if ( !MiPteInShadowRange(v14) )
      goto LABEL_79;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v44 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_79;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_79;
    }
    if ( (v45 & 1) != 0 )
      v43 |= 0x8000000000000000uLL;
LABEL_79:
    *(_QWORD *)v14 = v43;
    if ( v44 )
      MiWritePteShadow(v14);
    v14 += 8LL;
  }
  v14 -= 8 * v69;
  UltraMapping = v71;
  v33 = v62;
LABEL_83:
  v98 = (volatile signed __int64 *)(v30 + 24);
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v46);
  }
  __writecr8(v33);
  v95 = --v72;
  v68 = 0;
  v47 = v30;
  v78 = v30;
  v48 = v30 + 48 * v69;
  v79 = v48;
  v49 = UltraMapping;
  while ( 1 )
  {
    v87 = v49;
    if ( v30 >= v48 )
    {
      v56 = 0;
      goto LABEL_109;
    }
    v50 = MiScrubPage(v84, v30, v49, 0LL);
    v51 = MiLockPageInline(v47);
    v63 = v51;
    v52 = v66[69];
    if ( v66[70] == 1 )
      v50 = 0;
    v68 = v50;
    if ( v52 == 1 || v50 < 0 )
      break;
    v47 = v78;
    _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v51 < 2u )
    {
      v53 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v53);
      v51 = v63;
    }
    __writecr8(v51);
    v30 += 48LL;
    v86 = v30;
    v49 = v87 + 4096;
    v48 = v79;
  }
  MiRemoveFaultNode((__int64)v66);
  v54 = v52 == 0;
  v47 = v78;
  if ( v54 )
    MiPageListCollision(v78);
  _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v63 < 2u )
  {
    v55 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v55);
  }
  __writecr8(v63);
  v56 = 1;
LABEL_109:
  if ( !v56 )
  {
    v57 = MiLockPageInline(v47);
    MiRemoveFaultNode((__int64)v66);
    if ( !v66[69] )
      MiPageListCollision(v47);
    _InterlockedAnd64(v98, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v57 < 2u )
    {
      v58 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v58);
    }
    __writecr8(v57);
  }
  v59 = (__int64)(v30 - v47) / 48;
  v60 = v88;
  if ( v59 + v77 <= v99 )
    v60 = v59 + v77;
  v77 = v60;
  *v81 = v60;
  if ( v68 < 0 )
  {
    v90 = ((__int64)(v30 + 0x58000000000LL) / 48) << 12;
    v89 = 4096LL;
    MmMarkPhysicalMemoryAsBad(&v90, &v89);
    v60 = v77;
  }
  LODWORD(v11) = a3;
  if ( v60 >= v100 )
    goto LABEL_128;
  if ( a3 <= 1 )
  {
    v16 = v66;
LABEL_127:
    v91 = v60;
    goto LABEL_51;
  }
  v28 = v69;
  MiReleasePtes((__int64)&qword_1404669C0, v14, v69);
  v61 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v69);
  v14 = v61;
  if ( v61 )
  {
    v71 = (__int64)(v61 << 25) >> 16;
    v16 = v66;
    *((_QWORD *)v66 + 4) = v61;
    v60 = v77;
    goto LABEL_127;
  }
LABEL_129:
  v27 = 1;
LABEL_130:
  *((_DWORD *)&v93[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 )
  {
    if ( (unsigned int)v11 <= 1 )
      return v27;
    if ( v14 )
      MiReleasePtes((__int64)&qword_1404669C0, v14, v28);
  }
  return v65;
}
