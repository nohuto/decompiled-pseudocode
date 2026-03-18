/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C008C270 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0078610 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0089030 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F108 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C008F138 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008F364 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009D47C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C009E760 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013BF24 (GreSelectFontInternal.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreEnableAppContainerRestriction @ 0x1C023FF68 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // ebx
  PVOID v12; // rcx
  DC *v13; // rdx
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r10d
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // esi
  unsigned int v23; // r14d
  unsigned int v24; // r15d
  int v25; // edx
  __int64 v26; // r8
  unsigned int v27; // ebx
  int v28; // rax^4
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edx
  int v32; // edi
  int v33; // r15d
  unsigned int v34; // esi
  DC *v35; // rcx
  __int64 v36; // rdx
  int v37; // r14d
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // rax^4
  int v44; // r8d
  int v45; // edx
  struct EXFORMOBJ *v46; // rdx
  struct SURFACE *v47; // rcx
  _DWORD *v48; // rcx
  int v49; // edi
  int v50; // esi
  int v51; // r14d
  int v52; // r15d
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct _NT_TIB *v56; // rcx
  __int64 v57; // rbx
  int v58; // ecx
  __int64 v59; // rbx
  int v60; // ecx
  PVOID v61; // rcx
  struct _NT_TIB *v62; // rcx
  char v63; // [rsp+70h] [rbp-208h]
  int v64; // [rsp+74h] [rbp-204h]
  DC *v65; // [rsp+78h] [rbp-200h] BYREF
  __int64 v66; // [rsp+80h] [rbp-1F8h]
  int v67; // [rsp+88h] [rbp-1F0h]
  char v68; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v69; // [rsp+90h] [rbp-1E8h]
  int v70; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v72; // [rsp+A0h] [rbp-1D8h]
  unsigned int v73; // [rsp+A4h] [rbp-1D4h]
  ULONG64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v75; // [rsp+B0h] [rbp-1C8h]
  unsigned int v76; // [rsp+B4h] [rbp-1C4h]
  unsigned int v77; // [rsp+B8h] [rbp-1C0h]
  unsigned int v78; // [rsp+BCh] [rbp-1BCh]
  unsigned int v79; // [rsp+C0h] [rbp-1B8h]
  int v80; // [rsp+C4h] [rbp-1B4h]
  int v81; // [rsp+C8h] [rbp-1B0h]
  int v82; // [rsp+CCh] [rbp-1ACh] BYREF
  int v83; // [rsp+D0h] [rbp-1A8h]
  int v84; // [rsp+D4h] [rbp-1A4h]
  PVOID v85; // [rsp+D8h] [rbp-1A0h]
  HDC FiberData; // [rsp+E0h] [rbp-198h]
  struct _NT_TIB *v87; // [rsp+E8h] [rbp-190h]
  int v88; // [rsp+F0h] [rbp-188h]
  int v89; // [rsp+F4h] [rbp-184h]
  unsigned int v90; // [rsp+F8h] [rbp-180h]
  unsigned int v91; // [rsp+FCh] [rbp-17Ch]
  int v92; // [rsp+100h] [rbp-178h]
  int v93; // [rsp+104h] [rbp-174h]
  int v94; // [rsp+108h] [rbp-170h]
  PVOID v95; // [rsp+110h] [rbp-168h]
  __int64 v96; // [rsp+118h] [rbp-160h]
  PVOID v97; // [rsp+120h] [rbp-158h]
  PVOID v98; // [rsp+128h] [rbp-150h]
  PVOID v99; // [rsp+130h] [rbp-148h]
  PVOID v100; // [rsp+138h] [rbp-140h]
  int v101; // [rsp+140h] [rbp-138h]
  int v102; // [rsp+144h] [rbp-134h]
  int v103; // [rsp+148h] [rbp-130h]
  unsigned int v104; // [rsp+14Ch] [rbp-12Ch]
  unsigned int v105; // [rsp+150h] [rbp-128h]
  unsigned int v106; // [rsp+154h] [rbp-124h]
  unsigned int v107; // [rsp+158h] [rbp-120h]
  int v108; // [rsp+15Ch] [rbp-11Ch]
  int v109; // [rsp+160h] [rbp-118h]
  int v110; // [rsp+164h] [rbp-114h]
  int v111; // [rsp+168h] [rbp-110h]
  int v112; // [rsp+16Ch] [rbp-10Ch]
  unsigned int v113; // [rsp+170h] [rbp-108h]
  unsigned int v114; // [rsp+174h] [rbp-104h]
  unsigned int v115; // [rsp+178h] [rbp-100h]
  unsigned int v116; // [rsp+17Ch] [rbp-FCh]
  unsigned int v117; // [rsp+180h] [rbp-F8h]
  unsigned int v118; // [rsp+184h] [rbp-F4h]
  int v119; // [rsp+188h] [rbp-F0h]
  int v120; // [rsp+18Ch] [rbp-ECh]
  unsigned int v121; // [rsp+190h] [rbp-E8h]
  __int64 v122; // [rsp+198h] [rbp-E0h]
  __int64 v123; // [rsp+1A0h] [rbp-D8h]
  int v124; // [rsp+1A8h] [rbp-D0h]
  __int64 v125; // [rsp+1B0h] [rbp-C8h] BYREF
  int v126; // [rsp+1BCh] [rbp-BCh]
  PVOID v127; // [rsp+1C0h] [rbp-B8h]
  __int64 v128; // [rsp+1C8h] [rbp-B0h]
  PVOID v129; // [rsp+1D0h] [rbp-A8h]
  _BYTE v130[80]; // [rsp+1E0h] [rbp-98h] BYREF
  _DWORD v131[2]; // [rsp+230h] [rbp-48h] BYREF
  int v132; // [rsp+238h] [rbp-40h]
  int v133; // [rsp+23Ch] [rbp-3Ch]
  struct _RECTL v134; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v87 = Self;
  v83 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v69 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) > 0x134 )
    goto LABEL_129;
  FiberData = 0LL;
  v68 = 1;
  FiberData = (HDC)v87[13].FiberData;
  v7 = SubSystemTib >> 31;
  v68 = v7;
  if ( FiberData )
  {
    v66 = 0LL;
    LOBYTE(a2) = 1;
    v65 = (DC *)HmgLockEx(FiberData, a2);
    if ( v65 )
    {
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v65) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v65 + 3);
        p_ArbitraryUserPointer = v69;
        goto LABEL_119;
      }
      if ( (*((_DWORD *)v65 + 132) & 4) != 0 )
        DC::vMarkTransformDirty(v65);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    if ( v65 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v130);
      v63 = 0;
      if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
      {
        v63 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v130, (struct XDCOBJ *)&v65, 0) )
      {
        v83 = 0;
        v123 = *(_QWORD *)(*((_QWORD *)v65 + 10) + 16LL);
        do
        {
          v8 = 1LL;
          v70 = 1;
          v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v112 = v9;
          v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v64 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v67 = v64;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
            break;
          if ( v9 == 2 )
          {
            if ( !v63 )
              GreBatchTextOut((struct XDCOBJ *)&v65, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v10);
LABEL_109:
            v11 = v64;
          }
          else if ( v9 == 6 )
          {
            v97 = 0LL;
            if ( (unsigned int)v10 >= 0x10 )
            {
              v97 = p_ArbitraryUserPointer[1];
            }
            else
            {
              LODWORD(v8) = 0;
              v70 = 0;
            }
            v11 = v64;
            if ( (_DWORD)v8 )
              GreSelectFontInternal(FiberData);
          }
          else
          {
            switch ( v9 )
            {
              case 0:
                if ( (unsigned int)v10 < 0x48 )
                  goto LABEL_109;
                if ( v63 )
                  goto LABEL_109;
                v32 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v93 = v32;
                v124 = v32;
                v33 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v92 = v33;
                v101 = v33;
                v72 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v102 = v72;
                v80 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v103 = v80;
                v90 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v76 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v104 = v76;
                v77 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                v105 = v77;
                v78 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                v106 = v78;
                v79 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                v107 = v79;
                v34 = (BYTE2(v90) << 8) | BYTE2(v90);
                v91 = v34;
                v90 = v34;
                if ( (((unsigned __int8)v34 ^ (unsigned __int8)(4 * v34)) & 0xCC) != 0 )
                  goto LABEL_109;
                v122 = *(_QWORD *)(*((_QWORD *)v65 + 10) + 16LL);
                v73 = 0;
                v127 = p_ArbitraryUserPointer[3];
                GreDCSelectBrush(v65, v127);
                v35 = v65;
                v36 = *((_QWORD *)v65 + 10);
                v88 = *(_DWORD *)(v36 + 48);
                v37 = v88;
                LODWORD(v85) = *(_DWORD *)(v36 + 52);
                v108 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                v38 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                v109 = v38;
                if ( v88 != v108 )
                {
                  *(_DWORD *)(v36 + 48) = v108;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 52LL) = v38;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                  v35 = v65;
                }
                if ( (*((_DWORD *)v35 + 32) & 1) != 0 )
                {
                  v39 = *((_QWORD *)v35 + 10);
                  if ( *(_QWORD *)(v39 + 112) )
                  {
                    v40 = *(_DWORD *)(v39 + 8);
                    v73 = v40 & 0x40000;
                    *(_DWORD *)(v39 + 8) = v40 | 0x40000;
                    v35 = v65;
                    v41 = *((_QWORD *)v65 + 10);
                    v81 = *(_DWORD *)(v41 + 136);
                    v110 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                    if ( v81 != v110 )
                    {
                      *(_DWORD *)(v41 + 136) = v110;
                      *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                      v35 = v65;
                    }
                  }
                }
                v42 = *((_QWORD *)v35 + 10);
                v96 = *(_QWORD *)(v42 + 336);
                v27 = v96;
                v128 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                v43 = HIDWORD(v128);
                if ( v96 != v128 )
                {
                  *(_DWORD *)(v42 + 336) = v128;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 340LL) = v43;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 352LL) |= 0x2010u;
                }
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v125, (struct XDCOBJ *)&v65, 0x204u);
                v44 = *(_DWORD *)(v125 + 32);
                if ( (v44 & 1) != 0 )
                {
                  v131[0] = v32;
                  v131[1] = v33;
                  v45 = v32 + v72;
                  v132 = v32 + v72;
                  v133 = v33 + v80;
                  if ( (v44 & 0x43) != 0x43 )
                  {
                    bCvtPts1(v125, v131, 2LL);
                    v45 = v132;
                    v32 = v131[0];
                  }
                  if ( v126 )
                  {
                    v131[0] = v32 + 1;
                    v132 = v45 + 1;
                  }
                  ERECTL::vOrder((ERECTL *)v131);
                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v131) )
                  {
                    if ( (*((_DWORD *)v65 + 9) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate((XDCOBJ *)&v65, (struct ERECTL *)v131);
                    v47 = (struct SURFACE *)*((_QWORD *)v65 + 63);
                    if ( v47 )
                      GrePatBltLockedDC((struct XDCOBJ *)&v65, v46, (struct ERECTL *)v131, v34, v47, v76, v77, v78, v79);
                  }
                }
                else
                {
                  v48 = (_DWORD *)*((_QWORD *)v65 + 10);
                  v49 = v48[10];
                  v50 = v48[8];
                  v51 = v48[11];
                  v52 = v48[9];
                  v48[10] = v76;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 32LL) = v77;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 44LL) = v78;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 36LL) = v79;
                  GreMaskBlt(FiberData, v80, 0LL, 0, 0, 0LL, 0, 0, v91 << 16, 0);
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 40LL) = v49;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 32LL) = v50;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 44LL) = v51;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 36LL) = v52;
                  v37 = v88;
                }
                v53 = *((_QWORD *)v65 + 10);
                if ( *(_QWORD *)(v53 + 16) != v122 )
                {
                  *(_QWORD *)(v53 + 16) = v122;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 0x1000u;
                }
                v54 = *((_QWORD *)v65 + 10);
                if ( v37 != *(_DWORD *)(v54 + 48) )
                {
                  *(_DWORD *)(v54 + 48) = v37;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 52LL) = (_DWORD)v85;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                }
                if ( (*((_DWORD *)v65 + 32) & 1) != 0 )
                {
                  v55 = *((_QWORD *)v65 + 10);
                  if ( *(_QWORD *)(v55 + 112) )
                  {
                    if ( v81 != *(_DWORD *)(v55 + 136) )
                    {
                      *(_DWORD *)(v55 + 136) = v81;
                      *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                    }
                    if ( !v73 )
                      *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) &= ~0x40000u;
                  }
                }
                v30 = *((_QWORD *)v65 + 10);
                v31 = HIDWORD(v96);
                if ( __PAIR64__(HIDWORD(v96), v27) == *(_QWORD *)(v30 + 336) )
                  goto LABEL_109;
                goto LABEL_67;
              case 1:
                if ( v63 || (unsigned int)v10 < 0x38 )
                  goto LABEL_109;
                if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                {
                  if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                    *(_BYTE *)MmUserProbeAddress = 0;
                }
                v113 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v17 = v113;
                if ( v113 >= 0xAAAAAAA || 24 * (unsigned __int64)v113 > (unsigned int)(v10 - 48) )
                  goto LABEL_109;
                v18 = *((_QWORD *)v65 + 10);
                v19 = *(_DWORD *)(v18 + 48);
                v72 = *(_DWORD *)(v18 + 52);
                v20 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v114 = v20;
                v21 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v115 = v21;
                v22 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                v116 = v22;
                v23 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                v117 = v23;
                v24 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v118 = v24;
                v119 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                v25 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v120 = v25;
                v73 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v121 = v73;
                if ( v19 != v119 )
                {
                  *(_DWORD *)(v18 + 48) = v119;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 52LL) = v25;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                }
                v26 = *((_QWORD *)v65 + 10);
                v85 = *(PVOID *)(v26 + 336);
                v27 = (unsigned int)v85;
                v129 = p_ArbitraryUserPointer[5];
                v28 = HIDWORD(v129);
                if ( v85 != v129 )
                {
                  *(_DWORD *)(v26 + 336) = (_DWORD)v129;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 340LL) = v28;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 352LL) |= 0x2010u;
                }
                GrePolyPatBltInternal(
                  (struct XDCOBJ *)&v65,
                  v73,
                  (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                  v17,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24);
                v29 = *((_QWORD *)v65 + 10);
                if ( v19 != *(_DWORD *)(v29 + 48) )
                {
                  *(_DWORD *)(v29 + 48) = v19;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 52LL) = v72;
                  *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 1u;
                }
                v30 = *((_QWORD *)v65 + 10);
                v31 = HIDWORD(v85);
                if ( __PAIR64__(HIDWORD(v85), v27) == *(_QWORD *)(v30 + 336) )
                  goto LABEL_109;
LABEL_67:
                *(_DWORD *)(v30 + 336) = v27;
                *(_DWORD *)(*((_QWORD *)v65 + 10) + 340LL) = v31;
                *(_DWORD *)(*((_QWORD *)v65 + 10) + 352LL) |= 0x2010u;
                goto LABEL_109;
              case 3:
                if ( !v63 )
                  GreBatchTextOutRect((struct XDCOBJ *)&v65, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v10);
                goto LABEL_109;
              case 4:
                if ( (unsigned int)v10 >= 0xC )
                {
                  v89 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v8) = 0;
                  v70 = 0;
                }
                v11 = v64;
                if ( (_DWORD)v8 )
                {
                  v13 = v65;
                  *((_DWORD *)v65 + 33) = v89;
                  *((_DWORD *)v13 + 34) = v75;
                  v14 = *((_DWORD *)v13 + 10) & 1;
                  if ( v14 )
                    v15 = *((_DWORD *)v13 + 358);
                  else
                    v15 = *((_DWORD *)v13 + 356);
                  *((_DWORD *)v13 + 396) = *((_DWORD *)v13 + 33) + v15;
                  if ( v14 )
                    v16 = *((_DWORD *)v13 + 359);
                  else
                    v16 = *((_DWORD *)v13 + 357);
                  *((_DWORD *)v13 + 397) = v75 + v16;
                }
                break;
              case 5:
                if ( (unsigned int)v10 >= 0x18 )
                {
                  v134 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v94 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v8) = 0;
                  v70 = 0;
                }
                v11 = v64;
                if ( (_DWORD)v8 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v130, 0);
                  GreExtSelectClipRgnLocked(&v65, (struct tagRECT *)&v134, v94);
                }
                break;
              case 7:
                v12 = 0LL;
                v100 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v100 = v12;
                }
                else
                {
                  v8 = 0LL;
                  v70 = 0;
                }
                v11 = v64;
                goto LABEL_33;
              case 8:
                v12 = 0LL;
                v95 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v95 = v12;
                }
                else
                {
                  v8 = 0LL;
                  v70 = 0;
                }
                v11 = v64;
LABEL_33:
                if ( (_DWORD)v8 )
                  NtGdiDeleteObjectApp(v12, v8, v10, 0x1C0000000uLL);
                break;
              default:
                goto LABEL_109;
            }
          }
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v11 + 7) & 0xFFFFFFF8));
          v69 = p_ArbitraryUserPointer;
          if ( !StackLimit )
            break;
        }
        while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
        v56 = v87;
        LODWORD(v87[106].StackLimit) = 0;
        LODWORD(v56[13].SubSystemTib) &= 0x80000000;
        LODWORD(v56[13].SubSystemTib) &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v65 + 10) + 16LL) = v123;
        *(_DWORD *)(*((_QWORD *)v65 + 10) + 8LL) |= 0x1000u;
      }
      if ( v65 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v65);
        v82 = 0;
        v57 = *(_QWORD *)v65;
        HmgDecrementExclusiveReferenceCountEx(v65, HIDWORD(v66), &v82);
        if ( v82 )
          bDeleteDCInternalEx(v57, 0LL);
      }
      v65 = 0LL;
      if ( v63 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v130);
    }
  }
LABEL_119:
  if ( v83 )
  {
    while ( 1 )
    {
      v58 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
      v111 = v58;
      v59 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      v84 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v59 > p_Self )
      {
LABEL_128:
        v62 = v87;
        LODWORD(v87[106].StackLimit) = 0;
        LODWORD(v62[13].SubSystemTib) &= 0x80000000;
        break;
      }
      v60 = v58 - 7;
      if ( v60 )
      {
        if ( v60 != 1 )
          goto LABEL_126;
        v98 = 0LL;
        v61 = p_ArbitraryUserPointer[1];
        v98 = v61;
      }
      else
      {
        v99 = 0LL;
        v61 = p_ArbitraryUserPointer[1];
        v99 = v61;
      }
      NtGdiDeleteObjectApp(v61, 1LL, a3, a4);
LABEL_126:
      --StackLimit;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v59 + 7) & 0xFFFFFFF8));
      v69 = p_ArbitraryUserPointer;
      if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
        goto LABEL_128;
    }
  }
LABEL_129:
  v87[13].FiberData = 0LL;
}
