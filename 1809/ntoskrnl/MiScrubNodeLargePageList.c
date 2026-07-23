/*
 * XREFs of MiScrubNodeLargePageList @ 0x1402CCD80
 * Callers:
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiRemoveFaultNode @ 0x1400F9744 (MiRemoveFaultNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiPageListCollision @ 0x140121394 (MiPageListCollision.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
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
  unsigned int v11; // r10d
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v13; // rsi
  int v14; // ebx
  __int64 v15; // r15
  _BYTE *v16; // r9
  ULONG_PTR v17; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // r12d
  unsigned int v23; // r11d
  _QWORD *v24; // r15
  unsigned int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int v29; // ebx
  unsigned int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v35; // rdx
  struct _KPRCB *v36; // rcx
  unsigned __int8 v37; // r15
  _BYTE *v38; // rcx
  struct _KPRCB *v39; // rcx
  unsigned int v40; // eax
  int i; // ecx
  int v42; // r8d
  int v43; // edx
  __int64 v44; // r11
  unsigned __int64 v45; // r13
  __int64 v46; // rdx
  int v47; // r8d
  char v48; // r11
  struct _KPRCB *v49; // rcx
  __int64 v50; // r13
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  int v53; // r15d
  unsigned __int8 v54; // cl
  char v55; // r12
  struct _KPRCB *v56; // rcx
  struct _KPRCB *v57; // rcx
  int v58; // edx
  unsigned __int8 v59; // r15
  struct _KPRCB *v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v62; // r11
  ULONG_PTR v63; // rax
  unsigned __int8 v64; // [rsp+40h] [rbp-208h]
  _BYTE *v66; // [rsp+58h] [rbp-1F0h]
  int v67; // [rsp+60h] [rbp-1E8h]
  unsigned __int8 v68; // [rsp+68h] [rbp-1E0h]
  __int64 v69; // [rsp+70h] [rbp-1D8h]
  unsigned __int64 v71; // [rsp+88h] [rbp-1C0h]
  __int64 v72; // [rsp+90h] [rbp-1B8h]
  unsigned int v74; // [rsp+A0h] [rbp-1A8h]
  unsigned int v75; // [rsp+A8h] [rbp-1A0h]
  __int64 v76; // [rsp+B0h] [rbp-198h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-190h]
  _DWORD v78[6]; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-170h]
  unsigned __int64 *v80; // [rsp+E0h] [rbp-168h]
  _QWORD *v81; // [rsp+E8h] [rbp-160h]
  _QWORD *v82; // [rsp+F0h] [rbp-158h]
  __int64 v83; // [rsp+100h] [rbp-148h]
  __int64 v84; // [rsp+110h] [rbp-138h]
  unsigned __int64 v85; // [rsp+120h] [rbp-128h]
  unsigned __int64 v86; // [rsp+128h] [rbp-120h]
  unsigned __int64 v87; // [rsp+130h] [rbp-118h]
  unsigned __int64 v88; // [rsp+138h] [rbp-110h]
  _QWORD *v89; // [rsp+140h] [rbp-108h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-100h]
  __int64 v91; // [rsp+150h] [rbp-F8h]
  __int64 v92; // [rsp+158h] [rbp-F0h]
  unsigned __int64 v93; // [rsp+160h] [rbp-E8h]
  __int64 v94; // [rsp+168h] [rbp-E0h]
  unsigned __int64 v95; // [rsp+170h] [rbp-D8h]
  volatile signed __int64 *v96; // [rsp+178h] [rbp-D0h]
  unsigned __int64 v97; // [rsp+180h] [rbp-C8h]
  __int64 v98; // [rsp+188h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+190h] [rbp-B8h] BYREF
  unsigned __int64 v100; // [rsp+198h] [rbp-B0h]
  _BYTE v101[80]; // [rsp+1A0h] [rbp-A8h] BYREF
  _QWORD v102[2]; // [rsp+1F0h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a3;
  v79 = a1;
  v94 = a1;
  v78[2] = a2;
  v78[4] = a3;
  v80 = a7;
  v83 = a8;
  v84 = a10;
  v102[0] = 0LL;
  v102[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  UltraMapping = 0LL;
  v71 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = a3;
  v69 = MiLargePageSizes[a3];
  v91 = v69;
  if ( a5 )
  {
    v66 = v101;
    memset(v101, 0, 0x48uLL);
    v101[71] = 1;
    LOBYTE(v13) = a3 <= 1;
    v11 = a3;
    if ( a3 > 1 )
    {
      v17 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v69);
      v13 = v17;
      if ( !v17 )
        return 1LL;
      UltraMapping = (__int64)(v17 << 25) >> 16;
      v71 = UltraMapping;
      v11 = a3;
    }
    v16 = v101;
  }
  else
  {
    v16 = 0LL;
    v66 = 0LL;
  }
  v19 = *(_QWORD *)(v79 + 16) + 1984LL * a2;
  v68 = 17;
  v87 = *v80;
  v95 = v87;
  v100 = v87;
  v97 = v87;
  *v80 = 0LL;
  v77 = 0LL;
  v88 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v74 = dword_14043B1C0[v15];
  v78[1] = v74;
  v20 = v19 + 272 * v15;
  v21 = v10;
  v22 = a5;
  v23 = a6;
  v24 = *(_QWORD **)(v20 + 8 * (a6 + 4 * (a5 + 2 * v21)) + 144);
  v25 = 0;
LABEL_9:
  v75 = v25;
  v89 = v24;
  v82 = v24;
  if ( v25 >= v74 )
  {
LABEL_128:
    v30 = v69;
    goto LABEL_129;
  }
  v26 = v24[2];
  v72 = v26;
  v27 = v24;
  v81 = v24;
  CurrentIrql = v68;
  while ( 1 )
  {
    if ( !v26 || (_QWORD *)*v27 == v27 )
      goto LABEL_33;
    if ( *(_DWORD *)(a9 + 4) )
    {
      v29 = 0;
      v30 = v69;
      goto LABEL_130;
    }
    if ( v22 )
    {
      v14 &= ~4u;
    }
    else
    {
      v14 |= 4u;
      CurrentIrql = KeGetCurrentIrql();
      v68 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    if ( v16 )
      *((_QWORD *)v16 + 4) = 0LL;
    v31 = MiUnlinkNodeLargePage(v79, v11, a2, v23, (__int64)v102, v14, (__int64)v16);
    v33 = v31;
    v76 = v31;
    if ( !v31 )
    {
      v22 = a5;
      if ( !a5 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      v23 = a6;
LABEL_33:
      v25 = v75 + 1;
      v24 = v82 + 3;
      v16 = v66;
      v11 = a3;
      goto LABEL_9;
    }
    if ( a5 )
      break;
    v35 = (unsigned __int128)((v31 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v78[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v78, v35, v32);
      while ( *(__int64 *)(v33 + 24) < 0 );
    }
    *(_BYTE *)(v33 + 34) = *(_BYTE *)(v33 + 34) & 0xF8 | 1;
    MiInsertLargePageInNodeListHelper((__int64)(v33 + 0x58000000000LL) / 48, MiLargePageSizes[a3], 1, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    CurrentIrql = v68;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v68 < 2u )
    {
      v36 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v36);
    }
    __writecr8(v68);
    v16 = v66;
    v11 = a3;
LABEL_44:
    v22 = a5;
    v27 = v81;
    v26 = v72;
    v23 = a6;
  }
  v37 = MiLockPageInline(v31);
  v38 = v66;
  if ( v66[69] == 1 )
  {
    MiRemoveFaultNode((__int64)v66);
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
    {
      v39 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v39);
    }
    __writecr8(v37);
    v16 = v66;
    v11 = a3;
LABEL_52:
    CurrentIrql = v68;
    goto LABEL_44;
  }
  v40 = a3;
  if ( a3 <= 1 )
  {
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v84 + 32LL * a3), a3, MiLargePageSizes[a3], 0);
    v71 = UltraMapping;
    v13 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    for ( i = a3; !i; i = 1 )
      v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = v66;
    v40 = a3;
  }
  *((_QWORD *)v38 + 4) = v13;
  *((_DWORD *)v38 + 16) = v40;
  *((_QWORD *)v38 + 5) = UltraMapping;
  *((_QWORD *)v38 + 6) = UltraMapping + (v69 << 12) - 1;
  v42 = -1543503868;
  if ( a3 > 1 )
    v42 = -1610612732;
  MiMakeValidPte(v13, (__int64)(v33 + 0x58000000000LL) / 48, v42);
  if ( a3 <= 1 )
  {
    if ( MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v43 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
LABEL_66:
          if ( (v44 & 1) != 0 )
            v44 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        goto LABEL_66;
      }
    }
    *(_QWORD *)v13 = v44;
    if ( v43 )
      MiWritePteShadow(v13, v44);
    goto LABEL_83;
  }
  v45 = 8 * v69 + v13;
  while ( v13 < v45 )
  {
    if ( !MiPteInShadowRange(v13) )
      goto LABEL_79;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v47 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_79;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_79;
    }
    if ( (v48 & 1) != 0 )
      v46 |= 0x8000000000000000uLL;
LABEL_79:
    *(_QWORD *)v13 = v46;
    if ( v47 )
      MiWritePteShadow(v13, v46);
    v13 += 8LL;
  }
  v13 -= 8 * v69;
  v33 = v76;
LABEL_83:
  v96 = (volatile signed __int64 *)(v33 + 24);
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
  {
    v49 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v49);
  }
  __writecr8(v37);
  v92 = --v72;
  v67 = 0;
  v50 = v33;
  v93 = v33;
  v51 = v33 + 48 * v69;
  v86 = v51;
  v52 = v71;
  while ( 1 )
  {
    v85 = v52;
    if ( v33 >= v51 )
    {
      v58 = 0;
      goto LABEL_109;
    }
    v53 = MiScrubPage(v83, v33, v52, 0LL);
    v54 = MiLockPageInline(v50);
    v64 = v54;
    v55 = v66[69];
    if ( v66[70] == 1 )
      v53 = 0;
    v67 = v53;
    if ( v55 == 1 || v53 < 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
    {
      v56 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v56);
      v54 = v64;
    }
    __writecr8(v54);
    v33 = v76 + 48;
    v76 += 48LL;
    v52 = v85 + 4096;
    v51 = v86;
  }
  MiRemoveFaultNode((__int64)v66);
  if ( !v55 )
    MiPageListCollision(v50);
  _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v64 < 2u )
  {
    v57 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v57);
  }
  __writecr8(v64);
  v58 = 1;
  v33 = v76;
LABEL_109:
  if ( !v58 )
  {
    v59 = MiLockPageInline(v50);
    MiRemoveFaultNode((__int64)v66);
    if ( !v66[69] )
      MiPageListCollision(v50);
    _InterlockedAnd64(v96, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v59 < 2u )
    {
      v60 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v60);
    }
    __writecr8(v59);
  }
  v61 = (__int64)(v33 - v50) / 48;
  v62 = v87;
  if ( v61 + v77 <= v97 )
    v62 = v61 + v77;
  v77 = v62;
  *v80 = v62;
  if ( v67 < 0 )
  {
    v99 = ((__int64)(v33 + 0x58000000000LL) / 48) << 12;
    v98 = 4096LL;
    MmMarkPhysicalMemoryAsBad(&v99, &v98);
    v62 = v77;
  }
  if ( v62 >= v100 )
    goto LABEL_128;
  v11 = a3;
  if ( a3 <= 1 )
  {
    UltraMapping = v71;
    v16 = v66;
LABEL_127:
    v88 = v62;
    goto LABEL_52;
  }
  v30 = v69;
  MiReleasePtes((__int64)&qword_14043C060, v13, v69);
  v63 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v69);
  v13 = v63;
  if ( v63 )
  {
    UltraMapping = (__int64)(v63 << 25) >> 16;
    v71 = UltraMapping;
    v16 = v66;
    *((_QWORD *)v66 + 4) = v63;
    v11 = a3;
    v62 = v77;
    goto LABEL_127;
  }
LABEL_129:
  v29 = 1;
LABEL_130:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 && a3 > 1 )
  {
    if ( v13 )
      MiReleasePtes((__int64)&qword_14043C060, v13, v30);
  }
  return v29;
}
