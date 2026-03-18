/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001B750 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgFreeDcAttr @ 0x1C0027468 (HmgFreeDcAttr.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C003AE1C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0082DC4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall vDeleteDCInternalWorker(DC **this, int a2)
{
  unsigned int v2; // ebx
  int v3; // r12d
  DC *v5; // r14
  GdiHandleManager *v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // r9d
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DC *v19; // rdx
  struct _DC_ATTR *v20; // rsi
  DC *v21; // rax
  __int64 v22; // rsi
  int *v23; // rdi
  char v24; // al
  int v25; // edx
  GdiHandleManager *v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r10
  unsigned int v36; // edx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r10
  DC *v40; // r14
  unsigned int v41; // eax
  unsigned int v42; // edx
  GdiHandleManager *v43; // rbp
  unsigned int v44; // eax
  __int64 v45; // rsi
  unsigned int v46; // r10d
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // r9d
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  DC *v56; // rdx
  __int16 *v57; // rdi
  __int64 v58; // rsi
  DC *v59; // r14
  unsigned int v60; // eax
  GdiHandleManager *v61; // r13
  unsigned int v62; // eax
  __int64 v63; // rbp
  unsigned int v64; // edi
  unsigned int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rsi
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rax
  DC *v72; // rdx
  DC *v73; // rdx
  __int16 *v74; // rdi
  __int16 *v75; // rax
  __int64 v76; // rsi
  DC *v77; // rdx
  REGION *v78; // rcx
  __int64 v79; // r8
  REGION *v80; // rcx
  REGION *v81; // rcx
  REGION *v82; // rcx
  REGION *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  bool v86; // zf
  int *v87; // [rsp+30h] [rbp-58h] BYREF
  int v88; // [rsp+38h] [rbp-50h]
  __int64 v89; // [rsp+90h] [rbp+8h] BYREF
  int v90; // [rsp+98h] [rbp+10h]
  __int64 v91; // [rsp+A0h] [rbp+18h] BYREF

  v90 = a2;
  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    v5 = *this;
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)gpHandleManager,
           (unsigned __int16)*(_DWORD *)v5 | (*(_DWORD *)v5 >> 8) & 0xFF0000u);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      v13 = 0LL;
    }
    else
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( v7 < v10 )
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v7 += ((1 - (_DWORD)v11) << 16) - v10;
      v13 = 0LL;
      if ( v7 < *(_DWORD *)(v12 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8) )
      {
        v13 = *(_QWORD *)v12 + 24LL * v7;
      }
    }
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v6, v9);
    v15 = *(_DWORD *)(v8 + 2056);
    v16 = v14;
    if ( v14 >= v15 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_106;
    v17 = ((v14 - v15) >> 16) + 1;
    if ( v14 < v15 )
      v17 = 0LL;
    v18 = *(_QWORD *)(v8 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v16 = ((1 - (_DWORD)v17) << 16) - v15 + v14;
    if ( (unsigned int)v16 >= *(_DWORD *)(v18 + 20) )
LABEL_106:
      v19 = 0LL;
    else
      v19 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
    if ( v19 != v5 )
      v13 = 0LL;
    v20 = *(struct _DC_ATTR **)(v13 + 16);
    if ( v20 )
    {
      *(_QWORD *)(v13 + 16) = 0LL;
      if ( (*((_DWORD *)v5 + 11) & 2) == 0 )
        DC::SaveAttributes(v5, v20);
      HmgFreeDcAttr(v20);
    }
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  v21 = *this;
  v87 = 0LL;
  v88 = 0;
  v22 = *((_QWORD *)v21 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v87,
    (unsigned __int16)*(_DWORD *)v22 | (*(_DWORD *)v22 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( v88 )
  {
    v23 = v87;
    v24 = *((_BYTE *)v87 + 14);
    if ( v24 != 5
      || gbGdiHmgrAltStacks
      && gpentHmgrAltStacks
      && (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v22), v24 = *((_BYTE *)v23 + 14), v24 != 5) )
    {
      if ( v24 != 16 )
        goto LABEL_26;
      v84 = *(_QWORD *)(v22 + 136);
      v85 = 2LL;
    }
    else
    {
      v84 = *(_QWORD *)(v22 + 680);
      v85 = 0LL;
    }
    TrackObjectReferenceDecrement(v85, v84);
LABEL_26:
    --*(_DWORD *)(v22 + 8);
    v25 = *v23;
    v26 = gpHandleManager;
    v27 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v25 & 0xFFFFFF);
    v28 = *((_QWORD *)v26 + 2);
    v29 = v27;
    v30 = *(_DWORD *)(v28 + 2056);
    if ( v27 >= v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
      goto LABEL_113;
    v31 = ((v27 - v30) >> 16) + 1;
    if ( v27 < v30 )
      v31 = 0LL;
    v32 = *(_QWORD *)(v28 + 8 * v31 + 8);
    if ( (_DWORD)v31 )
      v29 = ((1 - (_DWORD)v31) << 16) - v30 + v27;
    if ( (unsigned int)v29 >= *(_DWORD *)(v32 + 20) )
LABEL_113:
      v33 = 0LL;
    else
      v33 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v29 >> 8)) + 16LL * (unsigned __int8)v29 + 8);
    v34 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v26,
            (unsigned __int16)*v33 | (*v33 >> 8) & 0xFF0000u);
    v35 = *((_QWORD *)v26 + 2);
    v36 = v34;
    v37 = *(_DWORD *)(v35 + 2056);
    if ( v34 < v37 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16) )
    {
      v38 = ((v34 - v37) >> 16) + 1;
      if ( v34 < v37 )
        v38 = 0LL;
      v39 = *(_QWORD *)(v35 + 8 * v38 + 8);
      if ( (_DWORD)v38 )
        v36 = ((1 - (_DWORD)v38) << 16) - v37 + v34;
      *(_DWORD *)(*(_QWORD *)v39 + 24LL * v36 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v36 >> 8)) + 16LL * (unsigned __int8)v36,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v40 = *this;
  v91 = *((_QWORD *)*this + 6);
  v41 = *(_DWORD *)v40;
  v42 = *(_DWORD *)v40;
  *((_DWORD *)v40 + 9) |= 0x10u;
  v43 = gpHandleManager;
  v44 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v41 | (v42 >> 8) & 0xFF0000);
  v45 = *((_QWORD *)v43 + 2);
  v46 = v44;
  v47 = *(_DWORD *)(v45 + 2056);
  if ( v44 >= v47 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
  {
    v50 = 0LL;
  }
  else
  {
    v48 = ((v44 - v47) >> 16) + 1;
    if ( v44 < v47 )
      v48 = 0LL;
    v49 = *(_QWORD *)(v45 + 8 * v48 + 8);
    if ( (_DWORD)v48 )
      v44 += ((1 - (_DWORD)v48) << 16) - v47;
    v50 = 0LL;
    if ( v44 < *(_DWORD *)(v49 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                   + 16LL * (unsigned __int8)v44
                   + 8) )
    {
      v50 = *(_QWORD *)v49 + 24LL * v44;
    }
  }
  v51 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v43, v46);
  v52 = *(_DWORD *)(v45 + 2056);
  v53 = v51;
  if ( v51 >= v52 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
    goto LABEL_115;
  v54 = ((v51 - v52) >> 16) + 1;
  if ( v51 < v52 )
    v54 = 0LL;
  v55 = *(_QWORD *)(v45 + 8 * v54 + 8);
  if ( (_DWORD)v54 )
    v53 = ((1 - (_DWORD)v54) << 16) - v52 + v51;
  if ( (unsigned int)v53 >= *(_DWORD *)(v55 + 20) )
LABEL_115:
    v56 = 0LL;
  else
    v56 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v53 >> 8)) + 16LL * (unsigned __int8)v53 + 8);
  if ( v56 != v40 )
    v50 = 0LL;
  *(_BYTE *)(v50 + 15) |= 4u;
  v57 = (__int16 *)*((_QWORD *)v40 + 140);
  if ( v57 && v57 != (__int16 *)prgnDefault )
  {
    if ( v57[7] >= 0 )
    {
      Win32FreePool(*((_QWORD *)v40 + 140));
    }
    else
    {
      v58 = qword_1C02158D0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v58, v57);
    }
  }
  *((_QWORD *)v40 + 140) = prgnDefault;
  v59 = *this;
  v60 = *(_DWORD *)*this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v61 = gpHandleManager;
  v62 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v60 | (v60 >> 8) & 0xFF0000);
  v63 = *((_QWORD *)v61 + 2);
  v64 = v62;
  v65 = *(_DWORD *)(v63 + 2056);
  if ( v62 >= v65 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
  {
    v68 = 0LL;
  }
  else
  {
    v66 = ((v62 - v65) >> 16) + 1;
    if ( v62 < v65 )
      v66 = 0LL;
    v67 = *(_QWORD *)(v63 + 8 * v66 + 8);
    if ( (_DWORD)v66 )
      v62 += ((1 - (_DWORD)v66) << 16) - v65;
    v68 = 0LL;
    if ( v62 < *(_DWORD *)(v67 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v67 + 24) + 8 * ((unsigned __int64)v62 >> 8))
                   + 16LL * (unsigned __int8)v62
                   + 8) )
    {
      v68 = *(_QWORD *)v67 + 24LL * v62;
    }
  }
  if ( v64 >= 0x10000 )
  {
    if ( *(_DWORD *)v61 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v61 + 2),
                                  (unsigned __int16)v64,
                                  1)
           + 13) == HIWORD(v64) )
        v64 = (unsigned __int16)v64;
    }
    else
    {
      v64 = (unsigned __int16)v64;
    }
    v3 = v90;
  }
  v69 = *(_DWORD *)(v63 + 2056);
  if ( v64 >= v69 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
    goto LABEL_123;
  v70 = ((v64 - v69) >> 16) + 1;
  if ( v64 < v69 )
    v70 = 0LL;
  v71 = *(_QWORD *)(v63 + 8 * v70 + 8);
  if ( (_DWORD)v70 )
    v64 += ((1 - (_DWORD)v70) << 16) - v69;
  if ( v64 >= *(_DWORD *)(v71 + 20) )
LABEL_123:
    v72 = 0LL;
  else
    v72 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v71 + 24) + 8 * ((unsigned __int64)v64 >> 8))
                 + 16LL * (unsigned __int8)v64
                 + 8);
  if ( v72 != v59 )
    v68 = 0LL;
  *(_BYTE *)(v68 + 15) |= 4u;
  v73 = *this;
  v74 = (__int16 *)*((_QWORD *)*this + 143);
  if ( !v74
    || (*((_DWORD *)v73 + 10) & 2) == 0
    || (v86 = (unsigned int)DC::bDpiScaledSurface(*this) == 0, v75 = v74, v86) )
  {
    v75 = (__int16 *)*((_QWORD *)v73 + 141);
  }
  if ( v75 )
  {
    if ( !v74 || (*((_DWORD *)v73 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v73) )
      v74 = (__int16 *)*((_QWORD *)v73 + 141);
    if ( v74 && v74 != (__int16 *)prgnDefault )
    {
      if ( v74[7] >= 0 )
      {
        Win32FreePool((__int64)v74);
      }
      else
      {
        v76 = qword_1C02158D0;
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
          Win32FreeToPagedLookasideListImpl(v76, v74);
      }
    }
  }
  v77 = *this;
  v78 = (REGION *)*((_QWORD *)*this + 143);
  if ( v78 )
  {
    REGION::vDeleteREGION(v78);
    v77 = *this;
  }
  if ( !*((_QWORD *)v77 + 144) || (*((_DWORD *)v77 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v77) )
    v79 = *((_QWORD *)v77 + 142);
  if ( v79 )
  {
    v83 = DC::prgnRao(v77);
    REGION::vDeleteREGION(v83);
    v77 = *this;
  }
  v80 = (REGION *)*((_QWORD *)v77 + 144);
  if ( v80 )
  {
    REGION::vDeleteREGION(v80);
    v77 = *this;
  }
  v81 = (REGION *)*((_QWORD *)v77 + 145);
  if ( v81 )
  {
    REGION::vDeleteREGION(v81);
    v77 = *this;
  }
  v82 = (REGION *)*((_QWORD *)v77 + 146);
  if ( v82 )
  {
    REGION::vDeleteREGION(v82);
    v77 = *this;
  }
  v89 = *((_QWORD *)v77 + 7);
  XDCOBJ::bDeleteDC((XDCOBJ *)this, v3);
  LOBYTE(v2) = v3 != 0;
  PDEVOBJ::vUnreferencePdev(&v91, v2);
  if ( v89 )
    PDEVOBJ::vUnreferencePdev(&v89, v2);
}
