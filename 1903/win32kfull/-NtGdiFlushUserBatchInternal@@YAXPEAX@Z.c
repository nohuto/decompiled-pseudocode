/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C00637E0 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003EF2C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C005A638 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C005AD48 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005C9F0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C005CDE4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0064E30 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00759DC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C007F24C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0101734 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreEnableAppContainerRestriction @ 0x1C0270F78 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, DC *a3)
{
  struct _NT_TIB *Self; // rax
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v6; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r12
  PVOID v11; // rax
  struct _NT_TIB *v12; // rax
  DC *v13; // rcx
  struct _DC_ATTR *v14; // rax
  __int64 v15; // rbx
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // ecx
  PVOID v19; // rcx
  struct _NT_TIB *v20; // rax
  PVOID v21; // rcx
  DC *v22; // rdx
  int v23; // r8d
  int v24; // ecx
  int v25; // ecx
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // edi
  unsigned int v29; // r10d
  unsigned int v30; // r11d
  unsigned int v31; // esi
  unsigned int v32; // r14d
  unsigned int v33; // r15d
  int v34; // edx
  __int64 v35; // r8
  int v36; // ebx
  int v37; // rax^4
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // rcx
  int v41; // r15d
  int v42; // edi
  __int64 v43; // r14
  DC *v44; // rcx
  __int64 v45; // rdx
  int v46; // esi
  int v47; // r8d
  __int64 v48; // r8
  int v49; // rax^4
  struct EXFORMOBJ *v50; // rdx
  struct SURFACE *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  _DWORD *v57; // rcx
  int v58; // edi
  int v59; // esi
  int v60; // r14d
  int v61; // r15d
  __int64 v62; // rcx
  char v63; // [rsp+70h] [rbp-208h]
  DC *v64; // [rsp+78h] [rbp-200h] BYREF
  __int64 v65; // [rsp+80h] [rbp-1F8h]
  int v66; // [rsp+88h] [rbp-1F0h]
  char v67; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v68; // [rsp+90h] [rbp-1E8h]
  int v69; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v71; // [rsp+A0h] [rbp-1D8h]
  unsigned int v72; // [rsp+A4h] [rbp-1D4h]
  ULONG64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v74; // [rsp+B0h] [rbp-1C8h]
  unsigned int v75; // [rsp+B4h] [rbp-1C4h]
  unsigned int v76; // [rsp+B8h] [rbp-1C0h]
  unsigned int v77; // [rsp+BCh] [rbp-1BCh]
  unsigned int v78; // [rsp+C0h] [rbp-1B8h]
  int v79; // [rsp+C4h] [rbp-1B4h]
  int v80; // [rsp+C8h] [rbp-1B0h]
  int v81; // [rsp+CCh] [rbp-1ACh]
  int v82; // [rsp+D0h] [rbp-1A8h] BYREF
  int v83; // [rsp+D4h] [rbp-1A4h]
  int v84; // [rsp+D8h] [rbp-1A0h]
  PVOID v85; // [rsp+E0h] [rbp-198h]
  HDC FiberData; // [rsp+E8h] [rbp-190h]
  struct _NT_TIB *v87; // [rsp+F0h] [rbp-188h]
  int v88; // [rsp+F8h] [rbp-180h]
  int v89; // [rsp+FCh] [rbp-17Ch]
  int v90; // [rsp+100h] [rbp-178h]
  int v91; // [rsp+104h] [rbp-174h]
  PVOID v92; // [rsp+108h] [rbp-170h]
  __int64 v93; // [rsp+110h] [rbp-168h]
  int v94; // [rsp+118h] [rbp-160h]
  PVOID v95; // [rsp+120h] [rbp-158h]
  PVOID v96; // [rsp+128h] [rbp-150h]
  PVOID v97; // [rsp+130h] [rbp-148h]
  PVOID v98; // [rsp+138h] [rbp-140h]
  PVOID v99; // [rsp+140h] [rbp-138h]
  int v100; // [rsp+148h] [rbp-130h]
  int v101; // [rsp+14Ch] [rbp-12Ch]
  int v102; // [rsp+150h] [rbp-128h]
  unsigned int v103; // [rsp+154h] [rbp-124h]
  unsigned int v104; // [rsp+158h] [rbp-120h]
  unsigned int v105; // [rsp+15Ch] [rbp-11Ch]
  unsigned int v106; // [rsp+160h] [rbp-118h]
  int v107; // [rsp+164h] [rbp-114h]
  int v108; // [rsp+168h] [rbp-110h]
  int v109; // [rsp+16Ch] [rbp-10Ch]
  int v110; // [rsp+170h] [rbp-108h]
  int v111; // [rsp+174h] [rbp-104h]
  unsigned int v112; // [rsp+178h] [rbp-100h]
  unsigned int v113; // [rsp+17Ch] [rbp-FCh]
  unsigned int v114; // [rsp+180h] [rbp-F8h]
  unsigned int v115; // [rsp+184h] [rbp-F4h]
  unsigned int v116; // [rsp+188h] [rbp-F0h]
  unsigned int v117; // [rsp+18Ch] [rbp-ECh]
  int v118; // [rsp+190h] [rbp-E8h]
  int v119; // [rsp+194h] [rbp-E4h]
  unsigned int v120; // [rsp+198h] [rbp-E0h]
  __int64 v121; // [rsp+1A0h] [rbp-D8h]
  __int64 v122; // [rsp+1A8h] [rbp-D0h]
  __int64 v123; // [rsp+1B0h] [rbp-C8h]
  int v124; // [rsp+1B8h] [rbp-C0h]
  _QWORD v125[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  PVOID v126; // [rsp+1D0h] [rbp-A8h]
  _BYTE v127[80]; // [rsp+1E0h] [rbp-98h] BYREF
  _DWORD v128[4]; // [rsp+230h] [rbp-48h] BYREF
  struct _RECTL v129; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v87 = Self;
  v83 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v68 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    v67 = 1;
    FiberData = (HDC)v87[13].FiberData;
    v6 = SubSystemTib >> 31;
    v67 = v6;
    if ( !FiberData )
      goto LABEL_38;
    v65 = 0LL;
    LOBYTE(a2) = 1;
    a3 = (DC *)HmgLockEx(FiberData, a2, 0LL);
    v64 = a3;
    if ( a3 )
    {
      if ( (*((_DWORD *)a3 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v64);
        if ( UserAttr && !DC::SaveAttributes(v64, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v64 + 3);
          p_ArbitraryUserPointer = v68;
          goto LABEL_38;
        }
        *((_DWORD *)v64 + 11) |= 2u;
        LODWORD(v65) = 1;
        a3 = v64;
      }
      if ( (*((_DWORD *)a3 + 130) & 4) == 0 )
      {
LABEL_9:
        if ( a3 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v127);
          v63 = 0;
          if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v6 )
          {
            v63 = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v127, (struct XDCOBJ *)&v64, 0) )
          {
            v83 = 0;
            v123 = *(_QWORD *)(*((_QWORD *)v64 + 122) + 160LL);
            do
            {
              v8 = 1LL;
              v69 = 1;
              v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
              v111 = v9;
              v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
              v66 = *(unsigned __int16 *)p_ArbitraryUserPointer;
              if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
                break;
              if ( v9 == 2 )
              {
                if ( !v63 )
                  GreBatchTextOut((struct XDCOBJ *)&v64, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v10);
              }
              else if ( v9 == 6 )
              {
                v11 = 0LL;
                v96 = 0LL;
                if ( (unsigned int)v10 < 0x10 )
                {
                  LODWORD(v8) = 0;
                  v69 = 0;
                }
                else
                {
                  v11 = p_ArbitraryUserPointer[1];
                  v96 = v11;
                }
                if ( (_DWORD)v8 )
                  GreSelectFont(FiberData, v11);
              }
              else
              {
                switch ( v9 )
                {
                  case 0:
                    if ( (unsigned int)v10 >= 0x48 && !v63 )
                    {
                      v41 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                      v91 = v41;
                      v124 = v41;
                      v71 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                      v100 = v71;
                      v80 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                      v101 = v80;
                      v79 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                      v102 = v79;
                      v89 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                      v75 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                      v103 = v75;
                      v76 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                      v104 = v76;
                      v77 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                      v105 = v77;
                      v78 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                      v106 = v78;
                      v42 = (BYTE2(v89) << 8) | BYTE2(v89);
                      v90 = v42;
                      v89 = v42;
                      if ( (((unsigned __int8)v42 ^ (unsigned __int8)(4 * v42)) & 0xCC) == 0 )
                      {
                        v43 = *(_QWORD *)(*((_QWORD *)v64 + 122) + 160LL);
                        v122 = v43;
                        v72 = 0;
                        v93 = 0LL;
                        v121 = 0LL;
                        v126 = p_ArbitraryUserPointer[3];
                        GreDCSelectBrush(v64, v126);
                        v44 = v64;
                        v45 = *((_QWORD *)v64 + 122);
                        LODWORD(v92) = *(_DWORD *)(v45 + 192);
                        v46 = (int)v92;
                        LODWORD(v85) = *(_DWORD *)(v45 + 196);
                        v107 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                        v47 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                        v108 = v47;
                        if ( (_DWORD)v92 != v107 )
                        {
                          *(_DWORD *)(v45 + 192) = v107;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 196LL) = v47;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                          v44 = v64;
                        }
                        if ( (*((_DWORD *)v44 + 30) & 1) != 0 )
                        {
                          v54 = *((_QWORD *)v44 + 122);
                          if ( *(_QWORD *)(v54 + 248) )
                          {
                            v55 = *(_DWORD *)(v54 + 152);
                            v72 = v55 & 0x40000;
                            *(_DWORD *)(v54 + 152) = v55 | 0x40000;
                            v44 = v64;
                            v56 = *((_QWORD *)v64 + 122);
                            v81 = *(_DWORD *)(v56 + 256);
                            v109 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                            if ( v81 != v109 )
                            {
                              *(_DWORD *)(v56 + 256) = v109;
                              *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                              v44 = v64;
                            }
                          }
                        }
                        v48 = *((_QWORD *)v44 + 122);
                        v93 = *(_QWORD *)(v48 + 324);
                        v36 = v93;
                        v121 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                        v49 = HIDWORD(v121);
                        if ( v93 != v121 )
                        {
                          *(_DWORD *)(v48 + 324) = v121;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 328LL) = v49;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 340LL) |= 0x2010u;
                        }
                        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v125, (struct XDCOBJ *)&v64, 0x204u);
                        if ( (*(_DWORD *)(v125[0] + 32LL) & 1) != 0 )
                        {
                          v128[0] = v41;
                          v128[1] = v71;
                          v128[2] = v41 + v80;
                          v128[3] = v71 + v79;
                          EXFORMOBJ::bXform((EXFORMOBJ *)v125, (struct ERECTL *)v128);
                          ERECTL::vOrder((ERECTL *)v128);
                          if ( !ERECTL::bEmpty((ERECTL *)v128) )
                          {
                            if ( (*((_DWORD *)v64 + 9) & 0xE0) != 0 )
                              XDCOBJ::vAccumulate((XDCOBJ *)&v64, (struct ERECTL *)v128);
                            v51 = (struct SURFACE *)*((_QWORD *)v64 + 62);
                            if ( v51 )
                              GrePatBltLockedDC((__int64)&v64, v50, (struct ERECTL *)v128, v42, v51, v75, v76, v77, v78);
                          }
                        }
                        else
                        {
                          v57 = (_DWORD *)*((_QWORD *)v64 + 122);
                          v58 = v57[46];
                          v59 = v57[44];
                          v60 = v57[47];
                          v61 = v57[45];
                          v57[46] = v75;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 176LL) = v76;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 188LL) = v77;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 180LL) = v78;
                          GreMaskBlt(FiberData, v79, 0LL, 0, 0, 0LL, 0, 0, v90 << 16, 0);
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 184LL) = v58;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 176LL) = v59;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 188LL) = v60;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 180LL) = v61;
                          v46 = (int)v92;
                          v43 = v122;
                        }
                        v52 = *((_QWORD *)v64 + 122);
                        if ( *(_QWORD *)(v52 + 160) != v43 )
                        {
                          *(_QWORD *)(v52 + 160) = v43;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 0x1000u;
                        }
                        v53 = *((_QWORD *)v64 + 122);
                        if ( v46 != *(_DWORD *)(v53 + 192) )
                        {
                          *(_DWORD *)(v53 + 192) = v46;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 196LL) = (_DWORD)v85;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                        }
                        if ( (*((_DWORD *)v64 + 30) & 1) != 0 )
                        {
                          v62 = *((_QWORD *)v64 + 122);
                          if ( *(_QWORD *)(v62 + 248) )
                          {
                            if ( v81 != *(_DWORD *)(v62 + 256) )
                            {
                              *(_DWORD *)(v62 + 256) = v81;
                              *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                            }
                            if ( !v72 )
                              *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) &= ~0x40000u;
                          }
                        }
                        v39 = HIDWORD(v93);
                        goto LABEL_91;
                      }
                    }
                    break;
                  case 1:
                    v85 = 0LL;
                    v92 = 0LL;
                    if ( !v63 && (unsigned int)v10 >= 0x38 )
                    {
                      if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                      {
                        if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                          *(_BYTE *)MmUserProbeAddress = 0;
                      }
                      v112 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                      v26 = v112;
                      if ( v112 < 0xAAAAAAA && 24 * (unsigned __int64)v112 <= (unsigned int)(v10 - 48) )
                      {
                        v27 = *((_QWORD *)v64 + 122);
                        v28 = *(_DWORD *)(v27 + 192);
                        v71 = *(_DWORD *)(v27 + 196);
                        v29 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                        v113 = v29;
                        v30 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                        v114 = v30;
                        v31 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                        v115 = v31;
                        v32 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                        v116 = v32;
                        v33 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                        v117 = v33;
                        v118 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                        v34 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                        v119 = v34;
                        v72 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                        v120 = v72;
                        if ( v28 != v118 )
                        {
                          *(_DWORD *)(v27 + 192) = v118;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 196LL) = v34;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                        }
                        v35 = *((_QWORD *)v64 + 122);
                        v85 = *(PVOID *)(v35 + 324);
                        v36 = (int)v85;
                        v92 = p_ArbitraryUserPointer[5];
                        v37 = HIDWORD(v92);
                        if ( v85 != v92 )
                        {
                          *(_DWORD *)(v35 + 324) = (_DWORD)v92;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 328LL) = v37;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 340LL) |= 0x2010u;
                        }
                        GrePolyPatBltInternal(
                          (struct XDCOBJ *)&v64,
                          v72,
                          (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                          v26,
                          v29,
                          v30,
                          v31,
                          v32,
                          v33);
                        v38 = *((_QWORD *)v64 + 122);
                        if ( v28 != *(_DWORD *)(v38 + 192) )
                        {
                          *(_DWORD *)(v38 + 192) = v28;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 196LL) = v71;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 1u;
                        }
                        v39 = HIDWORD(v85);
LABEL_91:
                        v40 = *((_QWORD *)v64 + 122);
                        if ( v36 != *(_DWORD *)(v40 + 324) || v39 != *(_DWORD *)(v40 + 328) )
                        {
                          *(_DWORD *)(v40 + 324) = v36;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 328LL) = v39;
                          *(_DWORD *)(*((_QWORD *)v64 + 122) + 340LL) |= 0x2010u;
                        }
                      }
                    }
                    break;
                  case 3:
                    if ( !v63 )
                      GreBatchTextOutRect((struct XDCOBJ *)&v64, (struct tagRECT *)p_ArbitraryUserPointer, v10);
                    break;
                  case 4:
                    if ( (unsigned int)v10 < 0xC )
                    {
                      LODWORD(v8) = 0;
                      v69 = 0;
                    }
                    else
                    {
                      v88 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                      v74 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    }
                    if ( (_DWORD)v8 )
                    {
                      v22 = v64;
                      *((_DWORD *)v64 + 31) = v88;
                      *((_DWORD *)v22 + 32) = v74;
                      v23 = *((_DWORD *)v22 + 10) & 1;
                      if ( v23 )
                        v24 = *((_DWORD *)v22 + 256);
                      else
                        v24 = *((_DWORD *)v22 + 254);
                      *((_DWORD *)v22 + 294) = *((_DWORD *)v22 + 31) + v24;
                      if ( v23 )
                        v25 = *((_DWORD *)v22 + 257);
                      else
                        v25 = *((_DWORD *)v22 + 255);
                      *((_DWORD *)v22 + 295) = v74 + v25;
                    }
                    break;
                  case 5:
                    *(_QWORD *)&v129.left = 0LL;
                    *(_QWORD *)&v129.right = 0LL;
                    if ( (unsigned int)v10 < 0x18 )
                    {
                      LODWORD(v8) = 0;
                      v69 = 0;
                    }
                    else
                    {
                      v129 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                      v94 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    }
                    if ( (_DWORD)v8 )
                    {
                      DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v127, 0);
                      GreExtSelectClipRgnLocked(&v64, (struct tagRECT *)&v129, v94);
                    }
                    break;
                  case 7:
                    v21 = 0LL;
                    v99 = 0LL;
                    if ( (unsigned int)v10 < 0x10 )
                    {
                      v8 = 0LL;
                      v69 = 0;
                    }
                    else
                    {
                      v21 = p_ArbitraryUserPointer[1];
                      v99 = v21;
                    }
                    goto LABEL_62;
                  case 8:
                    v21 = 0LL;
                    v95 = 0LL;
                    if ( (unsigned int)v10 < 0x10 )
                    {
                      v8 = 0LL;
                      v69 = 0;
                    }
                    else
                    {
                      v21 = p_ArbitraryUserPointer[1];
                      v95 = v21;
                    }
LABEL_62:
                    if ( (_DWORD)v8 )
                      NtGdiDeleteObjectApp(v21, v8, 0x1C0000000uLL);
                    break;
                  default:
                    break;
                }
              }
              --StackLimit;
              p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v10 + 7) & 0xFFFFFFF8));
              v68 = p_ArbitraryUserPointer;
              if ( !StackLimit )
                break;
            }
            while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
            v12 = v87;
            LODWORD(v87[106].StackLimit) = 0;
            LODWORD(v12[13].SubSystemTib) &= 0x80000000;
            LODWORD(v12[13].SubSystemTib) &= ~0x80000000;
            *(_QWORD *)(*((_QWORD *)v64 + 122) + 160LL) = v123;
            *(_DWORD *)(*((_QWORD *)v64 + 122) + 152LL) |= 0x1000u;
          }
          v13 = v64;
          if ( v64 )
          {
            if ( (_DWORD)v65 && (*((_DWORD *)v64 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v65) )
              {
                v14 = XDCOBJ::GetUserAttr((XDCOBJ *)&v64);
                v13 = v64;
                if ( v14 )
                {
                  DC::RestoreAttributes(v64, v14);
                  v13 = v64;
                }
              }
              *((_DWORD *)v13 + 11) &= ~2u;
              LODWORD(v65) = 0;
              v13 = v64;
            }
            v82 = 0;
            v15 = *(_QWORD *)v13;
            HmgDecrementExclusiveReferenceCountEx(v13, HIDWORD(v65), &v82);
            if ( v82 )
              bDeleteDCInternalEx(v15, 0LL);
          }
          v64 = 0LL;
          if ( v63 )
            GreEnableAppContainerRestriction(1LL);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v127);
        }
LABEL_38:
        if ( !v83 )
          goto LABEL_39;
        while ( 1 )
        {
          v16 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v110 = v16;
          v17 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v84 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v17 > p_Self )
          {
LABEL_48:
            v20 = v87;
            LODWORD(v87[106].StackLimit) = 0;
            LODWORD(v20[13].SubSystemTib) &= 0x80000000;
            goto LABEL_39;
          }
          v18 = v16 - 7;
          if ( v18 )
          {
            if ( v18 != 1 )
              goto LABEL_47;
            v97 = 0LL;
            v19 = p_ArbitraryUserPointer[1];
            v97 = v19;
          }
          else
          {
            v98 = 0LL;
            v19 = p_ArbitraryUserPointer[1];
            v98 = v19;
          }
          NtGdiDeleteObjectApp(v19, 1LL, a3);
LABEL_47:
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v17 + 7) & 0xFFFFFFF8));
          v68 = p_ArbitraryUserPointer;
          if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
            goto LABEL_48;
        }
      }
      DC::vMarkTransformDirty(a3);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    a3 = v64;
    goto LABEL_9;
  }
LABEL_39:
  v87[13].FiberData = 0LL;
}
