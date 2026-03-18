/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C00AD780 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00A3F38 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C00A4648 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00A6150 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00A6544 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00AF1F0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C01186F4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C012548C (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0125A4C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C01670A4 (GreSelectFontInternal.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreEnableAppContainerRestriction @ 0x1C0270868 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, DC *a3, __int64 a4)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v7; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // ebx
  PVOID v13; // rcx
  DC *v14; // rdx
  int v15; // r8d
  int v16; // ecx
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // edi
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  unsigned int v23; // esi
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  int v26; // edx
  __int64 v27; // r8
  unsigned int v28; // ebx
  int v29; // rax^4
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r14d
  int v34; // r15d
  int v35; // edi
  DC *v36; // rcx
  __int64 v37; // rdx
  int v38; // esi
  int v39; // r8d
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // rax^4
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
  struct _NT_TIB *v55; // rcx
  DC *v56; // rcx
  struct _DC_ATTR *v57; // rax
  __int64 v58; // rbx
  int v59; // ecx
  __int64 v60; // rbx
  int v61; // ecx
  PVOID v62; // rcx
  struct _NT_TIB *v63; // rcx
  char v64; // [rsp+70h] [rbp-208h]
  int v65; // [rsp+74h] [rbp-204h]
  DC *v66; // [rsp+78h] [rbp-200h] BYREF
  __int64 v67; // [rsp+80h] [rbp-1F8h]
  int v68; // [rsp+88h] [rbp-1F0h]
  char v69; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v70; // [rsp+90h] [rbp-1E8h]
  int v71; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v73; // [rsp+A0h] [rbp-1D8h]
  unsigned int v74; // [rsp+A4h] [rbp-1D4h]
  ULONG64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v76; // [rsp+B0h] [rbp-1C8h]
  unsigned int v77; // [rsp+B4h] [rbp-1C4h]
  unsigned int v78; // [rsp+B8h] [rbp-1C0h]
  unsigned int v79; // [rsp+BCh] [rbp-1BCh]
  unsigned int v80; // [rsp+C0h] [rbp-1B8h]
  int v81; // [rsp+C4h] [rbp-1B4h]
  int v82; // [rsp+C8h] [rbp-1B0h]
  int v83; // [rsp+CCh] [rbp-1ACh] BYREF
  int v84; // [rsp+D0h] [rbp-1A8h]
  int v85; // [rsp+D4h] [rbp-1A4h]
  PVOID v86; // [rsp+D8h] [rbp-1A0h]
  HDC FiberData; // [rsp+E0h] [rbp-198h]
  struct _NT_TIB *v88; // [rsp+E8h] [rbp-190h]
  PVOID v89; // [rsp+F0h] [rbp-188h]
  int v90; // [rsp+F8h] [rbp-180h]
  int v91; // [rsp+FCh] [rbp-17Ch]
  int v92; // [rsp+100h] [rbp-178h]
  int v93; // [rsp+104h] [rbp-174h]
  int v94; // [rsp+108h] [rbp-170h]
  __int64 v95; // [rsp+110h] [rbp-168h]
  int v96; // [rsp+118h] [rbp-160h]
  PVOID v97; // [rsp+120h] [rbp-158h]
  PVOID v98; // [rsp+128h] [rbp-150h]
  PVOID v99; // [rsp+130h] [rbp-148h]
  PVOID v100; // [rsp+138h] [rbp-140h]
  PVOID v101; // [rsp+140h] [rbp-138h]
  int v102; // [rsp+148h] [rbp-130h]
  int v103; // [rsp+14Ch] [rbp-12Ch]
  int v104; // [rsp+150h] [rbp-128h]
  unsigned int v105; // [rsp+154h] [rbp-124h]
  unsigned int v106; // [rsp+158h] [rbp-120h]
  unsigned int v107; // [rsp+15Ch] [rbp-11Ch]
  unsigned int v108; // [rsp+160h] [rbp-118h]
  int v109; // [rsp+164h] [rbp-114h]
  int v110; // [rsp+168h] [rbp-110h]
  int v111; // [rsp+16Ch] [rbp-10Ch]
  int v112; // [rsp+170h] [rbp-108h]
  int v113; // [rsp+174h] [rbp-104h]
  unsigned int v114; // [rsp+178h] [rbp-100h]
  unsigned int v115; // [rsp+17Ch] [rbp-FCh]
  unsigned int v116; // [rsp+180h] [rbp-F8h]
  unsigned int v117; // [rsp+184h] [rbp-F4h]
  unsigned int v118; // [rsp+188h] [rbp-F0h]
  unsigned int v119; // [rsp+18Ch] [rbp-ECh]
  int v120; // [rsp+190h] [rbp-E8h]
  int v121; // [rsp+194h] [rbp-E4h]
  unsigned int v122; // [rsp+198h] [rbp-E0h]
  __int64 v123; // [rsp+1A0h] [rbp-D8h]
  __int64 v124; // [rsp+1A8h] [rbp-D0h]
  __int64 v125; // [rsp+1B0h] [rbp-C8h]
  int v126; // [rsp+1B8h] [rbp-C0h]
  _QWORD v127[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  PVOID v128; // [rsp+1D0h] [rbp-A8h]
  _BYTE v129[80]; // [rsp+1E0h] [rbp-98h] BYREF
  _DWORD v130[4]; // [rsp+230h] [rbp-48h] BYREF
  struct _RECTL v131; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v88 = Self;
  v84 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v70 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) > 0x134 )
    goto LABEL_135;
  FiberData = 0LL;
  v69 = 1;
  FiberData = (HDC)v88[13].FiberData;
  v7 = SubSystemTib >> 31;
  v69 = v7;
  if ( FiberData )
  {
    v67 = 0LL;
    LOBYTE(a2) = 1;
    a3 = (DC *)HmgLockEx(FiberData, a2, 0LL);
    v66 = a3;
    if ( a3 )
    {
      if ( (*((_DWORD *)a3 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v66);
        if ( UserAttr && !DC::SaveAttributes(v66, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v66 + 3);
          p_ArbitraryUserPointer = v70;
          goto LABEL_125;
        }
        *((_DWORD *)v66 + 11) |= 2u;
        LODWORD(v67) = 1;
        a3 = v66;
      }
      if ( (*((_DWORD *)a3 + 130) & 4) == 0 )
        goto LABEL_15;
      DC::vMarkTransformDirty(a3);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    a3 = v66;
LABEL_15:
    if ( a3 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v129);
      v64 = 0;
      if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
      {
        v64 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v129, (struct XDCOBJ *)&v66, 0) )
      {
        v84 = 0;
        v125 = *(_QWORD *)(*((_QWORD *)v66 + 122) + 160LL);
        do
        {
          v9 = 1LL;
          v71 = 1;
          v10 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v113 = v10;
          v11 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v65 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v68 = v65;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v11 > p_Self )
            break;
          if ( v10 == 2 )
          {
            if ( !v64 )
              GreBatchTextOut((struct XDCOBJ *)&v66, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v11);
LABEL_109:
            v12 = v65;
          }
          else if ( v10 == 6 )
          {
            v98 = 0LL;
            if ( (unsigned int)v11 >= 0x10 )
            {
              v98 = p_ArbitraryUserPointer[1];
            }
            else
            {
              LODWORD(v9) = 0;
              v71 = 0;
            }
            v12 = v65;
            if ( (_DWORD)v9 )
              GreSelectFontInternal(FiberData);
          }
          else
          {
            switch ( v10 )
            {
              case 0:
                if ( (unsigned int)v11 < 0x48 )
                  goto LABEL_109;
                if ( v64 )
                  goto LABEL_109;
                v33 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v94 = v33;
                v126 = v33;
                v34 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v93 = v34;
                v102 = v34;
                v73 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v103 = v73;
                v81 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v104 = v81;
                v91 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v77 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v105 = v77;
                v78 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                v106 = v78;
                v79 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                v107 = v79;
                v80 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                v108 = v80;
                v35 = (BYTE2(v91) << 8) | BYTE2(v91);
                v92 = v35;
                v91 = v35;
                if ( (((unsigned __int8)v35 ^ (unsigned __int8)(4 * v35)) & 0xCC) != 0 )
                  goto LABEL_109;
                v124 = *(_QWORD *)(*((_QWORD *)v66 + 122) + 160LL);
                v74 = 0;
                v95 = 0LL;
                v123 = 0LL;
                v128 = p_ArbitraryUserPointer[3];
                GreDCSelectBrush(v66, v128);
                v36 = v66;
                v37 = *((_QWORD *)v66 + 122);
                LODWORD(v89) = *(_DWORD *)(v37 + 192);
                v38 = (int)v89;
                LODWORD(v86) = *(_DWORD *)(v37 + 196);
                v109 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                v39 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                v110 = v39;
                if ( (_DWORD)v89 != v109 )
                {
                  *(_DWORD *)(v37 + 192) = v109;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 196LL) = v39;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                  v36 = v66;
                }
                if ( (*((_DWORD *)v36 + 30) & 1) != 0 )
                {
                  v40 = *((_QWORD *)v36 + 122);
                  if ( *(_QWORD *)(v40 + 248) )
                  {
                    v41 = *(_DWORD *)(v40 + 152);
                    v74 = v41 & 0x40000;
                    *(_DWORD *)(v40 + 152) = v41 | 0x40000;
                    v36 = v66;
                    v42 = *((_QWORD *)v66 + 122);
                    v82 = *(_DWORD *)(v42 + 256);
                    v111 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                    if ( v82 != v111 )
                    {
                      *(_DWORD *)(v42 + 256) = v111;
                      *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                      v36 = v66;
                    }
                  }
                }
                v43 = *((_QWORD *)v36 + 122);
                v95 = *(_QWORD *)(v43 + 324);
                v28 = v95;
                v123 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                v44 = HIDWORD(v123);
                if ( v95 != v123 )
                {
                  *(_DWORD *)(v43 + 324) = v123;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 328LL) = v44;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 340LL) |= 0x2010u;
                }
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)v127, (struct XDCOBJ *)&v66, 0x204u);
                if ( (*(_DWORD *)(v127[0] + 32LL) & 1) != 0 )
                {
                  v130[0] = v33;
                  v130[1] = v34;
                  v130[2] = v33 + v73;
                  v130[3] = v34 + v81;
                  EXFORMOBJ::bXform((EXFORMOBJ *)v127, (struct ERECTL *)v130);
                  ERECTL::vOrder((ERECTL *)v130);
                  if ( !ERECTL::bEmpty((ERECTL *)v130) )
                  {
                    if ( (*((_DWORD *)v66 + 9) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate((XDCOBJ *)&v66, (struct ERECTL *)v130);
                    v46 = (struct SURFACE *)*((_QWORD *)v66 + 62);
                    if ( v46 )
                      GrePatBltLockedDC((__int64)&v66, v45, (struct ERECTL *)v130, v35, v46, v77, v78, v79, v80);
                  }
                }
                else
                {
                  v47 = (_DWORD *)*((_QWORD *)v66 + 122);
                  v48 = v47[46];
                  v49 = v47[44];
                  v50 = v47[47];
                  v51 = v47[45];
                  v47[46] = v77;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 176LL) = v78;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 188LL) = v79;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 180LL) = v80;
                  GreMaskBlt(FiberData, v81, 0LL, 0, 0, 0LL, 0, 0, v92 << 16, 0);
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 184LL) = v48;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 176LL) = v49;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 188LL) = v50;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 180LL) = v51;
                  v38 = (int)v89;
                }
                v52 = *((_QWORD *)v66 + 122);
                if ( *(_QWORD *)(v52 + 160) != v124 )
                {
                  *(_QWORD *)(v52 + 160) = v124;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 0x1000u;
                }
                v53 = *((_QWORD *)v66 + 122);
                if ( v38 != *(_DWORD *)(v53 + 192) )
                {
                  *(_DWORD *)(v53 + 192) = v38;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 196LL) = (_DWORD)v86;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                }
                if ( (*((_DWORD *)v66 + 30) & 1) != 0 )
                {
                  v54 = *((_QWORD *)v66 + 122);
                  if ( *(_QWORD *)(v54 + 248) )
                  {
                    if ( v82 != *(_DWORD *)(v54 + 256) )
                    {
                      *(_DWORD *)(v54 + 256) = v82;
                      *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                    }
                    if ( !v74 )
                      *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) &= ~0x40000u;
                  }
                }
                v31 = *((_QWORD *)v66 + 122);
                v32 = HIDWORD(v95);
                if ( __PAIR64__(HIDWORD(v95), v28) == *(_QWORD *)(v31 + 324) )
                  goto LABEL_109;
                goto LABEL_71;
              case 1:
                v86 = 0LL;
                v89 = 0LL;
                if ( v64 || (unsigned int)v11 < 0x38 )
                  goto LABEL_109;
                if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                {
                  if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                    *(_BYTE *)MmUserProbeAddress = 0;
                }
                v114 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v18 = v114;
                if ( v114 >= 0xAAAAAAA || 24 * (unsigned __int64)v114 > (unsigned int)(v11 - 48) )
                  goto LABEL_109;
                v19 = *((_QWORD *)v66 + 122);
                v20 = *(_DWORD *)(v19 + 192);
                v73 = *(_DWORD *)(v19 + 196);
                v21 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v115 = v21;
                v22 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v116 = v22;
                v23 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                v117 = v23;
                v24 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                v118 = v24;
                v25 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v119 = v25;
                v120 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                v26 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v121 = v26;
                v74 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v122 = v74;
                if ( v20 != v120 )
                {
                  *(_DWORD *)(v19 + 192) = v120;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 196LL) = v26;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                }
                v27 = *((_QWORD *)v66 + 122);
                v86 = *(PVOID *)(v27 + 324);
                v28 = (unsigned int)v86;
                v89 = p_ArbitraryUserPointer[5];
                v29 = HIDWORD(v89);
                if ( v86 != v89 )
                {
                  *(_DWORD *)(v27 + 324) = (_DWORD)v89;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 328LL) = v29;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 340LL) |= 0x2010u;
                }
                GrePolyPatBltInternal(
                  (struct XDCOBJ *)&v66,
                  v74,
                  (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                  v18,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25);
                v30 = *((_QWORD *)v66 + 122);
                if ( v20 != *(_DWORD *)(v30 + 192) )
                {
                  *(_DWORD *)(v30 + 192) = v20;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 196LL) = v73;
                  *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 1u;
                }
                v31 = *((_QWORD *)v66 + 122);
                v32 = HIDWORD(v86);
                if ( __PAIR64__(HIDWORD(v86), v28) == *(_QWORD *)(v31 + 324) )
                  goto LABEL_109;
LABEL_71:
                *(_DWORD *)(v31 + 324) = v28;
                *(_DWORD *)(*((_QWORD *)v66 + 122) + 328LL) = v32;
                *(_DWORD *)(*((_QWORD *)v66 + 122) + 340LL) |= 0x2010u;
                goto LABEL_109;
              case 3:
                if ( !v64 )
                  GreBatchTextOutRect((struct XDCOBJ *)&v66, (struct tagRECT *)p_ArbitraryUserPointer, v11);
                goto LABEL_109;
              case 4:
                if ( (unsigned int)v11 >= 0xC )
                {
                  v90 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v76 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v9) = 0;
                  v71 = 0;
                }
                v12 = v65;
                if ( (_DWORD)v9 )
                {
                  v14 = v66;
                  *((_DWORD *)v66 + 31) = v90;
                  *((_DWORD *)v14 + 32) = v76;
                  v15 = *((_DWORD *)v14 + 10) & 1;
                  if ( v15 )
                    v16 = *((_DWORD *)v14 + 256);
                  else
                    v16 = *((_DWORD *)v14 + 254);
                  *((_DWORD *)v14 + 294) = *((_DWORD *)v14 + 31) + v16;
                  if ( v15 )
                    v17 = *((_DWORD *)v14 + 257);
                  else
                    v17 = *((_DWORD *)v14 + 255);
                  *((_DWORD *)v14 + 295) = v76 + v17;
                }
                break;
              case 5:
                *(_QWORD *)&v131.left = 0LL;
                *(_QWORD *)&v131.right = 0LL;
                if ( (unsigned int)v11 >= 0x18 )
                {
                  v131 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v96 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v9) = 0;
                  v71 = 0;
                }
                v12 = v65;
                if ( (_DWORD)v9 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v129, 0);
                  GreExtSelectClipRgnLocked(&v66, (struct tagRECT *)&v131, v96);
                }
                break;
              case 7:
                v13 = 0LL;
                v101 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v13 = p_ArbitraryUserPointer[1];
                  v101 = v13;
                }
                else
                {
                  v9 = 0LL;
                  v71 = 0;
                }
                v12 = v65;
                goto LABEL_37;
              case 8:
                v13 = 0LL;
                v97 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v13 = p_ArbitraryUserPointer[1];
                  v97 = v13;
                }
                else
                {
                  v9 = 0LL;
                  v71 = 0;
                }
                v12 = v65;
LABEL_37:
                if ( (_DWORD)v9 )
                  NtGdiDeleteObjectApp(v13, v9, v11, 0x1C0000000uLL);
                break;
              default:
                goto LABEL_109;
            }
          }
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v12 + 7) & 0xFFFFFFF8));
          v70 = p_ArbitraryUserPointer;
          if ( !StackLimit )
            break;
        }
        while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
        v55 = v88;
        LODWORD(v88[106].StackLimit) = 0;
        LODWORD(v55[13].SubSystemTib) &= 0x80000000;
        LODWORD(v55[13].SubSystemTib) &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v66 + 122) + 160LL) = v125;
        *(_DWORD *)(*((_QWORD *)v66 + 122) + 152LL) |= 0x1000u;
      }
      v56 = v66;
      if ( v66 )
      {
        if ( (_DWORD)v67 && (*((_DWORD *)v66 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v67) )
          {
            v57 = XDCOBJ::GetUserAttr((XDCOBJ *)&v66);
            v56 = v66;
            if ( v57 )
            {
              DC::RestoreAttributes(v66, v57);
              v56 = v66;
            }
          }
          *((_DWORD *)v56 + 11) &= ~2u;
          LODWORD(v67) = 0;
          v56 = v66;
        }
        v83 = 0;
        v58 = *(_QWORD *)v56;
        HmgDecrementExclusiveReferenceCountEx(v56, HIDWORD(v67), &v83);
        if ( v83 )
          bDeleteDCInternalEx(v58, 0LL);
      }
      v66 = 0LL;
      if ( v64 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v129);
    }
  }
LABEL_125:
  if ( v84 )
  {
    while ( 1 )
    {
      v59 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
      v112 = v59;
      v60 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      v85 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v60 > p_Self )
      {
LABEL_134:
        v63 = v88;
        LODWORD(v88[106].StackLimit) = 0;
        LODWORD(v63[13].SubSystemTib) &= 0x80000000;
        break;
      }
      v61 = v59 - 7;
      if ( v61 )
      {
        if ( v61 != 1 )
          goto LABEL_132;
        v99 = 0LL;
        v62 = p_ArbitraryUserPointer[1];
        v99 = v62;
      }
      else
      {
        v100 = 0LL;
        v62 = p_ArbitraryUserPointer[1];
        v100 = v62;
      }
      NtGdiDeleteObjectApp(v62, 1LL, a3, a4);
LABEL_132:
      --StackLimit;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v60 + 7) & 0xFFFFFFF8));
      v70 = p_ArbitraryUserPointer;
      if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
        goto LABEL_134;
    }
  }
LABEL_135:
  v88[13].FiberData = 0LL;
}
