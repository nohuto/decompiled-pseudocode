/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0057DD0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0057DA0 (NtGdiFlushUserBatch.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C004CC28 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0055BA4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C005ADA0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C009DC3C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00FF7C4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0161484 (GreSelectFontInternal.c)
 *     GreEnableAppContainerRestriction @ 0x1C0257658 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  struct _NT_TIB *Self; // rdx
  PVOID *p_ArbitraryUserPointer; // r13
  __int64 SubSystemTib_low; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // ebx
  PVOID v12; // rcx
  _DWORD *v13; // rdx
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  int v17; // r10d
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
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r14d
  int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // rax^4
  int v43; // r8d
  int v44; // edx
  struct EXFORMOBJ *v45; // rdx
  struct SURFACE *v46; // rcx
  _DWORD *v47; // rcx
  int v48; // edi
  int v49; // esi
  int v50; // r14d
  int v51; // r15d
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct _NT_TIB *v55; // rdx
  int v56; // ecx
  __int64 v57; // rbx
  int v58; // ecx
  PVOID v59; // rcx
  struct _NT_TIB *v60; // rdx
  char v61; // [rsp+70h] [rbp-248h]
  int v62; // [rsp+74h] [rbp-244h]
  int StackLimit; // [rsp+90h] [rbp-228h]
  int v64; // [rsp+94h] [rbp-224h]
  int v65; // [rsp+94h] [rbp-224h]
  unsigned int v66; // [rsp+98h] [rbp-220h]
  unsigned int v67; // [rsp+98h] [rbp-220h]
  _QWORD v68[6]; // [rsp+A0h] [rbp-218h] BYREF
  ULONG64 p_Self; // [rsp+D0h] [rbp-1E8h]
  int v70; // [rsp+D8h] [rbp-1E0h]
  unsigned int v71; // [rsp+DCh] [rbp-1DCh]
  unsigned int v72; // [rsp+E0h] [rbp-1D8h]
  unsigned int v73; // [rsp+E4h] [rbp-1D4h]
  unsigned int v74; // [rsp+E8h] [rbp-1D0h]
  int v75; // [rsp+ECh] [rbp-1CCh]
  int v76; // [rsp+F0h] [rbp-1C8h]
  int v77; // [rsp+F4h] [rbp-1C4h]
  int v78; // [rsp+F8h] [rbp-1C0h]
  PVOID v79; // [rsp+100h] [rbp-1B8h]
  HDC FiberData; // [rsp+108h] [rbp-1B0h]
  struct _NT_TIB *v81; // [rsp+110h] [rbp-1A8h]
  unsigned int v82; // [rsp+118h] [rbp-1A0h]
  unsigned int v83; // [rsp+11Ch] [rbp-19Ch]
  int v84; // [rsp+120h] [rbp-198h]
  int v85; // [rsp+124h] [rbp-194h]
  int v86; // [rsp+128h] [rbp-190h]
  int v87; // [rsp+12Ch] [rbp-18Ch]
  int v88; // [rsp+130h] [rbp-188h]
  PVOID v89; // [rsp+138h] [rbp-180h]
  PVOID v90; // [rsp+140h] [rbp-178h]
  PVOID v91; // [rsp+148h] [rbp-170h]
  __int64 v92; // [rsp+150h] [rbp-168h]
  PVOID v93; // [rsp+158h] [rbp-160h]
  PVOID v94; // [rsp+160h] [rbp-158h]
  int v95; // [rsp+168h] [rbp-150h]
  int v96; // [rsp+16Ch] [rbp-14Ch]
  int v97; // [rsp+170h] [rbp-148h]
  unsigned int v98; // [rsp+174h] [rbp-144h]
  unsigned int v99; // [rsp+178h] [rbp-140h]
  unsigned int v100; // [rsp+17Ch] [rbp-13Ch]
  unsigned int v101; // [rsp+180h] [rbp-138h]
  int v102; // [rsp+184h] [rbp-134h]
  int v103; // [rsp+188h] [rbp-130h]
  int v104; // [rsp+18Ch] [rbp-12Ch]
  int v105; // [rsp+190h] [rbp-128h]
  int v106; // [rsp+194h] [rbp-124h]
  unsigned int v107; // [rsp+198h] [rbp-120h]
  unsigned int v108; // [rsp+19Ch] [rbp-11Ch]
  unsigned int v109; // [rsp+1A0h] [rbp-118h]
  unsigned int v110; // [rsp+1A4h] [rbp-114h]
  unsigned int v111; // [rsp+1A8h] [rbp-110h]
  unsigned int v112; // [rsp+1ACh] [rbp-10Ch]
  int v113; // [rsp+1B0h] [rbp-108h]
  int v114; // [rsp+1B4h] [rbp-104h]
  unsigned int v115; // [rsp+1B8h] [rbp-100h]
  __int64 v116; // [rsp+1C0h] [rbp-F8h]
  __int64 v117; // [rsp+1C8h] [rbp-F0h]
  int v118; // [rsp+1D0h] [rbp-E8h]
  unsigned __int64 v119; // [rsp+1D8h] [rbp-E0h] BYREF
  int v120; // [rsp+1E4h] [rbp-D4h]
  PVOID v121; // [rsp+1E8h] [rbp-D0h]
  __int64 v122; // [rsp+1F0h] [rbp-C8h]
  PVOID v123; // [rsp+1F8h] [rbp-C0h]
  _BYTE v124[112]; // [rsp+200h] [rbp-B8h] BYREF
  _DWORD v125[2]; // [rsp+270h] [rbp-48h] BYREF
  int v126; // [rsp+278h] [rbp-40h]
  int v127; // [rsp+27Ch] [rbp-3Ch]
  struct _RECTL v128; // [rsp+280h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v81 = Self;
  v77 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib_low = LODWORD(Self[13].SubSystemTib);
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    FiberData = (HDC)v81[13].FiberData;
    v7 = (unsigned int)SubSystemTib_low >> 31;
    v81[13].FiberData = 0LL;
    LODWORD(SubSystemTib_low) = SubSystemTib_low & 0x7FFFFFFF;
    LODWORD(Self[13].SubSystemTib) = SubSystemTib_low;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v68, FiberData);
      if ( v68[0] )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v124);
        v61 = 0;
        if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
        {
          v61 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v124, (struct XDCOBJ *)v68, 0) )
        {
          v77 = 0;
          v117 = *(_QWORD *)(*(_QWORD *)(v68[0] + 976LL) + 160LL);
          do
          {
            v8 = 1LL;
            v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v106 = v9;
            v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v62 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
              break;
            switch ( v9 )
            {
              case 0:
                if ( (unsigned int)v10 >= 0x48 && !v61 )
                {
                  v32 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v85 = v32;
                  v118 = v32;
                  v33 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v84 = v33;
                  v95 = v33;
                  v65 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v96 = v65;
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v97 = v75;
                  v82 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v71 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v98 = v71;
                  v72 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v99 = v72;
                  v73 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v100 = v73;
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v101 = v74;
                  v34 = (BYTE2(v82) << 8) | BYTE2(v82);
                  v83 = v34;
                  v82 = v34;
                  if ( (((unsigned __int8)v34 ^ (unsigned __int8)(4 * v34)) & 0xCC) == 0 )
                  {
                    v116 = *(_QWORD *)(*(_QWORD *)(v68[0] + 976LL) + 160LL);
                    v67 = 0;
                    v121 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v68[0], v121);
                    v35 = v68[0];
                    v36 = *(_QWORD *)(v68[0] + 976LL);
                    v86 = *(_DWORD *)(v36 + 192);
                    v37 = v86;
                    LODWORD(v79) = *(_DWORD *)(v36 + 196);
                    v102 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v38 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v103 = v38;
                    if ( v86 != v102 )
                    {
                      *(_DWORD *)(v36 + 192) = v102;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 196LL) = v38;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                      v35 = v68[0];
                    }
                    if ( (*(_DWORD *)(v35 + 120) & 1) != 0 )
                    {
                      v39 = *(_QWORD *)(v35 + 976);
                      if ( *(_QWORD *)(v39 + 248) )
                      {
                        v67 = *(_DWORD *)(v39 + 152) & 0x40000;
                        *(_DWORD *)(v39 + 152) |= 0x40000u;
                        v35 = v68[0];
                        v40 = *(_QWORD *)(v68[0] + 976LL);
                        v76 = *(_DWORD *)(v40 + 256);
                        v104 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v76 != v104 )
                        {
                          *(_DWORD *)(v40 + 256) = v104;
                          *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                          v35 = v68[0];
                        }
                      }
                    }
                    v41 = *(_QWORD *)(v35 + 976);
                    v92 = *(_QWORD *)(v41 + 324);
                    v27 = v92;
                    v122 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                    v42 = HIDWORD(v122);
                    if ( v92 != v122 )
                    {
                      *(_DWORD *)(v41 + 324) = v122;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 328LL) = v42;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v119, (struct XDCOBJ *)v68, 0x204u);
                    v43 = *(_DWORD *)(v119 + 32);
                    if ( (v43 & 1) != 0 )
                    {
                      v125[0] = v32;
                      v125[1] = v33;
                      v44 = v32 + v65;
                      v126 = v32 + v65;
                      v127 = v33 + v75;
                      if ( (v43 & 0x43) != 0x43 )
                      {
                        bCvtPts1(v119, v125, 2LL);
                        v44 = v126;
                        v32 = v125[0];
                      }
                      if ( v120 )
                      {
                        v125[0] = v32 + 1;
                        v126 = v44 + 1;
                      }
                      ERECTL::vOrder((ERECTL *)v125);
                      if ( !ERECTL::bEmpty((ERECTL *)v125) )
                      {
                        if ( (*(_DWORD *)(v68[0] + 36LL) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v68, (struct ERECTL *)v125);
                        v46 = *(struct SURFACE **)(v68[0] + 496LL);
                        if ( v46 )
                          GrePatBltLockedDC((__int64)v68, v45, (struct ERECTL *)v125, v34, v46, v71, v72, v73, v74);
                      }
                    }
                    else
                    {
                      v47 = *(_DWORD **)(v68[0] + 976LL);
                      v48 = v47[46];
                      v49 = v47[44];
                      v50 = v47[47];
                      v51 = v47[45];
                      v47[46] = v71;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 176LL) = v72;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 188LL) = v73;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 180LL) = v74;
                      GreMaskBlt(FiberData, v75, 0LL, 0, 0, 0LL, 0, 0, v83 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 184LL) = v48;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 176LL) = v49;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 188LL) = v50;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 180LL) = v51;
                      v37 = v86;
                    }
                    v52 = *(_QWORD *)(v68[0] + 976LL);
                    if ( *(_QWORD *)(v52 + 160) != v116 )
                    {
                      *(_QWORD *)(v52 + 160) = v116;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 0x1000u;
                    }
                    v53 = *(_QWORD *)(v68[0] + 976LL);
                    if ( v37 != *(_DWORD *)(v53 + 192) )
                    {
                      *(_DWORD *)(v53 + 192) = v37;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 196LL) = (_DWORD)v79;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                    }
                    if ( (*(_DWORD *)(v68[0] + 120LL) & 1) != 0 )
                    {
                      v54 = *(_QWORD *)(v68[0] + 976LL);
                      if ( *(_QWORD *)(v54 + 248) )
                      {
                        if ( v76 != *(_DWORD *)(v54 + 256) )
                        {
                          *(_DWORD *)(v54 + 256) = v76;
                          *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                        }
                        if ( !v67 )
                          *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) &= ~0x40000u;
                      }
                    }
                    v30 = *(_QWORD *)(v68[0] + 976LL);
                    v31 = HIDWORD(v92);
                    if ( __PAIR64__(HIDWORD(v92), v27) != *(_QWORD *)(v30 + 324) )
                      goto LABEL_64;
                  }
                }
                goto LABEL_98;
              case 1:
                if ( !v61 && (unsigned int)v10 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v107 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v17 = v107;
                  if ( v107 < 0xAAAAAAA && 24 * (unsigned __int64)v107 <= (unsigned int)(v10 - 48) )
                  {
                    v18 = *(_QWORD *)(v68[0] + 976LL);
                    v19 = *(_DWORD *)(v18 + 192);
                    v64 = *(_DWORD *)(v18 + 196);
                    v20 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v108 = v20;
                    v21 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v109 = v21;
                    v22 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v110 = v22;
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v111 = v23;
                    v24 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v112 = v24;
                    v113 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v25 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v114 = v25;
                    v66 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v115 = v66;
                    if ( v19 != v113 )
                    {
                      *(_DWORD *)(v18 + 192) = v113;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 196LL) = v25;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                    }
                    v26 = *(_QWORD *)(v68[0] + 976LL);
                    v79 = *(PVOID *)(v26 + 324);
                    v27 = (unsigned int)v79;
                    v123 = p_ArbitraryUserPointer[5];
                    v28 = HIDWORD(v123);
                    if ( v79 != v123 )
                    {
                      *(_DWORD *)(v26 + 324) = (_DWORD)v123;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 328LL) = v28;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v68,
                      v66,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v17,
                      v20,
                      v21,
                      v22,
                      v23,
                      v24);
                    v29 = *(_QWORD *)(v68[0] + 976LL);
                    if ( v19 != *(_DWORD *)(v29 + 192) )
                    {
                      *(_DWORD *)(v29 + 192) = v19;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 196LL) = v64;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 1u;
                    }
                    v30 = *(_QWORD *)(v68[0] + 976LL);
                    v31 = HIDWORD(v79);
                    if ( __PAIR64__(HIDWORD(v79), v27) != *(_QWORD *)(v30 + 324) )
                    {
LABEL_64:
                      *(_DWORD *)(v30 + 324) = v27;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 328LL) = v31;
                      *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                  }
                }
                goto LABEL_98;
              case 2:
                if ( !v61 )
                  GreBatchTextOut((struct XDCOBJ *)v68, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v10);
                goto LABEL_98;
              case 3:
                if ( !v61 )
                  GreBatchTextOutRect((struct XDCOBJ *)v68, (struct tagRECT *)p_ArbitraryUserPointer, v10);
                goto LABEL_98;
              case 4:
                if ( (unsigned int)v10 >= 0xC )
                {
                  v88 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v70 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v8) = 0;
                }
                v11 = v62;
                if ( (_DWORD)v8 )
                {
                  v13 = (_DWORD *)v68[0];
                  *(_DWORD *)(v68[0] + 124LL) = v88;
                  v13[32] = v70;
                  v14 = v13[10] & 1;
                  if ( v14 )
                    v15 = v13[256];
                  else
                    v15 = v13[254];
                  v13[300] = v13[31] + v15;
                  if ( v14 )
                    v16 = v13[257];
                  else
                    v16 = v13[255];
                  v13[301] = v70 + v16;
                }
                break;
              case 5:
                if ( (unsigned int)v10 >= 0x18 )
                {
                  v128 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v87 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v8) = 0;
                }
                v11 = v62;
                if ( (_DWORD)v8 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v124, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v68, &v128, v87);
                }
                break;
              case 6:
                v91 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                  v91 = p_ArbitraryUserPointer[1];
                else
                  LODWORD(v8) = 0;
                v11 = v62;
                if ( (_DWORD)v8 )
                  GreSelectFontInternal(FiberData);
                break;
              case 7:
                v12 = 0LL;
                v89 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v89 = v12;
                }
                else
                {
                  v8 = 0LL;
                }
                v11 = v62;
                goto LABEL_25;
              case 8:
                v12 = 0LL;
                v90 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v12 = p_ArbitraryUserPointer[1];
                  v90 = v12;
                }
                else
                {
                  v8 = 0LL;
                }
                v11 = v62;
LABEL_25:
                if ( (_DWORD)v8 )
                  NtGdiDeleteObjectApp(v12, v8, v10, 0x1C0000000uLL);
                break;
              default:
LABEL_98:
                v11 = v62;
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v11 + 7) & 0xFFFFFFF8));
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          v55 = v81;
          LODWORD(v81[106].StackLimit) = 0;
          LODWORD(v55[13].SubSystemTib) &= 0x80000000;
          LODWORD(v55[13].SubSystemTib) &= ~0x80000000;
          *(_QWORD *)(*(_QWORD *)(v68[0] + 976LL) + 160LL) = v117;
          *(_DWORD *)(*(_QWORD *)(v68[0] + 976LL) + 152LL) |= 0x1000u;
        }
        if ( v61 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v124);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v68);
    }
    if ( v77 )
    {
      while ( 1 )
      {
        v56 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v105 = v56;
        v57 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v78 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v57 > p_Self )
        {
LABEL_115:
          v60 = v81;
          LODWORD(v81[106].StackLimit) = 0;
          LODWORD(v60[13].SubSystemTib) &= 0x80000000;
          break;
        }
        v58 = v56 - 7;
        if ( v58 )
        {
          if ( v58 != 1 )
            goto LABEL_113;
          v93 = 0LL;
          v59 = p_ArbitraryUserPointer[1];
          v93 = v59;
        }
        else
        {
          v94 = 0LL;
          v59 = p_ArbitraryUserPointer[1];
          v94 = v59;
        }
        NtGdiDeleteObjectApp(v59, 1LL, SubSystemTib_low, a4);
LABEL_113:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v57 + 7) & 0xFFFFFFF8));
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_115;
      }
    }
  }
  v81[13].FiberData = 0LL;
}
