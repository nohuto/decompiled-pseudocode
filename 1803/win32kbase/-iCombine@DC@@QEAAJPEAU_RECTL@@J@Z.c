/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001E2E0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001E300 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0026A00 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  unsigned int v6; // esi
  int v7; // r14d
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edi
  __int64 v13; // r15
  int v14; // r12d
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  tagSIZE v24; // r14
  tagSIZE v25; // rsi
  unsigned int v26; // ebx
  _WORD *Object; // rax
  REGION *v28; // rdi
  int v29; // r9d
  _QWORD *v30; // rax
  REGION *v31; // rcx
  REGION *v33; // rsi
  int v34; // r15d
  LONG cx; // ebx
  LONG cy; // r13d
  _DWORD *v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  LONG v40; // ebx
  int v41; // eax
  REGION *v42; // rcx
  REGION *v43; // rcx
  bool v44; // cc
  struct _RECTL v45; // [rsp+20h] [rbp-29h] BYREF
  REGION *v46; // [rsp+30h] [rbp-19h] BYREF
  int v47; // [rsp+38h] [rbp-11h]
  __int64 v48; // [rsp+40h] [rbp-9h] BYREF
  int v49; // [rsp+48h] [rbp-1h]
  REGION *v50; // [rsp+50h] [rbp+7h] BYREF
  int v51; // [rsp+58h] [rbp+Fh]
  tagSIZE v52; // [rsp+B0h] [rbp+67h] BYREF
  int v53; // [rsp+C0h] [rbp+77h]
  unsigned int v54; // [rsp+C8h] [rbp+7Fh]

  v53 = a3;
  v52 = (tagSIZE)this;
  *(_QWORD *)&v45.left = *((_QWORD *)this + 21);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != -134217728 && (a2->bottom & 0xF8000000) != 0
    || (a2->right & 0xF8000000) != -134217728 && (a2->right & 0xF8000000) != 0
    || (a2->top & 0xF8000000) != -134217728 && (a2->top & 0xF8000000) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v6 = 216;
  v47 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v6 = 376;
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( dword_1C01A2650 >= v6
    && (v8 = qword_1C01A26E0, (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0)
    && (v9 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v8)) != 0LL )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    if ( v7 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v9[v6 / 8 - 20], 0LL);
    *((_WORD *)v9 + 7) = 0x8000;
  }
  else
  {
    v9 = PALLOCMEM2(v6, 0x34306847u, 0);
    if ( !v9 )
    {
      EngSetLastError(8u);
      return 0;
    }
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    if ( v7 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v9[v6 / 8 - 20], 0LL);
  }
  *((_DWORD *)v9 + 20) = 120;
  *(_QWORD *)((char *)v9 + 84) = 1LL;
  *(_QWORD *)((char *)v9 + 92) = 0LL;
  *((_DWORD *)v9 + 25) = 0;
  *((_DWORD *)v9 + 26) = 0;
  *((_DWORD *)v9 + 27) = 0x80000000;
  v9[14] = 0x7FFFFFFFLL;
  v9[5] = v9 + 15;
  v9[3] = 216LL;
  v9[4] = 0LL;
  v9[7] = v9 + 6;
  v9[6] = v9 + 6;
  v46 = (REGION *)v9;
  RGNOBJ::vSet((RGNOBJ *)&v46, a2);
  v10 = *(_DWORD *)this;
  v11 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v12 = (unsigned __int16)v10 | (v11 >> 8) & 0xFF0000;
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v12,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)v12;
    }
  }
  v13 = *((_QWORD *)gpHandleManager + 2);
  v14 = *(unsigned __int16 *)(v13 + 2);
  v15 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v15 + ((v14 + 0xFFFF) << 16) )
  {
    v19 = 0LL;
  }
  else
  {
    v16 = ((v12 - v15) >> 16) + 1;
    if ( v12 < v15 )
      v16 = 0LL;
    v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v18 = v12 + ((1 - (_DWORD)v16) << 16) - v15;
    else
      v18 = v12;
    v19 = 0LL;
    if ( v18 < *(_DWORD *)(v17 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v18 >> 8))
                   + 16LL * (unsigned __int8)v18
                   + 8) )
    {
      v19 = *(_QWORD *)v17 + 24LL * v18;
    }
    LOWORD(v14) = *(_WORD *)(v13 + 2);
  }
  if ( v12 >= 0x10000 )
  {
    v44 = *(_DWORD *)gpHandleManager <= 0x10000u;
    v54 = (unsigned __int16)v12;
    if ( v44 )
    {
      v12 = (unsigned __int16)v12;
    }
    else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     (GdiHandleEntryDirectory *)v13,
                                     (unsigned __int16)v12,
                                     1)
              + 13) == HIWORD(v12) )
    {
      v12 = v54;
    }
  }
  if ( v12 >= v15 + (((unsigned __int16)v14 + 0xFFFF) << 16) )
  {
    v20 = 0;
  }
  else
  {
    v20 = 0;
    v21 = ((v12 - v15) >> 16) + 1;
    if ( v12 < v15 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v13 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v12 += ((1 - (_DWORD)v21) << 16) - v15;
    if ( v12 < *(_DWORD *)(v22 + 20) )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                      + 16LL * (unsigned __int8)v12
                      + 8);
      goto LABEL_34;
    }
  }
  v23 = 0LL;
LABEL_34:
  v24 = v52;
  if ( v23 != v52 )
    v19 = 0LL;
  *(_BYTE *)(v19 + 15) |= 4u;
  v25 = *(tagSIZE *)&v45.left;
  if ( *(_QWORD *)&v45.left )
  {
    v51 = 0;
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v50 = (REGION *)Object;
    v28 = (REGION *)Object;
    if ( Object )
    {
      v29 = v53;
      *((_DWORD *)Object + 20) = 120;
      *(_QWORD *)(Object + 42) = 1LL;
      *(_QWORD *)(Object + 46) = 0LL;
      *((_DWORD *)Object + 25) = 0;
      *((_DWORD *)Object + 26) = 0;
      *((_DWORD *)Object + 27) = 0x80000000;
      *((_QWORD *)Object + 14) = 0x7FFFFFFFLL;
      *((_QWORD *)Object + 5) = Object + 60;
      *((_QWORD *)Object + 3) = 216LL;
      *((_QWORD *)Object + 4) = 0LL;
      v30 = Object + 24;
      v52 = v25;
      v30[1] = v30;
      *v30 = v30;
      v26 = RGNOBJ::iCombine((RGNOBJ *)&v50, (struct RGNOBJ *)&v52, (struct RGNOBJ *)&v46, v29);
      if ( v26 )
      {
        v28 = v50;
        v31 = (REGION *)v52;
        ++*((_DWORD *)v50 + 8);
        *(_QWORD *)(*(_QWORD *)&v24 + 168LL) = v28;
        if ( (*((_DWORD *)v31 + 8))-- == 1 )
          REGION::vDeleteREGION(v31);
      }
      else
      {
        REGION::vDeleteREGION(v50);
        v28 = 0LL;
      }
    }
    else
    {
      v26 = 0;
    }
    REGION::vDeleteREGION(v46);
    if ( v51 != 1 )
      goto LABEL_45;
    v42 = v28;
    goto LABEL_81;
  }
  if ( v53 != 1 )
  {
    v51 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v50, 0xD8u);
    v49 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v48, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v48);
    v33 = v50;
    if ( v50 )
    {
      if ( !v48 )
      {
        REGION::vDeleteREGION(v50);
        v33 = 0LL;
        v26 = 0;
        goto LABEL_59;
      }
      DC::vGet_sizlWindow(*(DC **)&v24, &v52);
      v34 = 0;
      cx = v52.cx;
      cy = v52.cy;
      v37 = *(_DWORD **)(*(_QWORD *)&v24 + 48LL);
      if ( *(_QWORD *)(*(_QWORD *)&v24 + 504LL) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v52);
        if ( (v37[10] & 0x20000) != 0 && *(int *)(*(_QWORD *)(*(_QWORD *)&v24 + 504LL) + 112LL) < 0 )
        {
          v34 = v37[644];
          cx += v34;
          v20 = v37[645];
          cy += v20;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion();
        }
      }
      v38 = 1424LL;
      if ( (*(_DWORD *)(*(_QWORD *)&v24 + 40LL) & 1) != 0 )
        v38 = 1432LL;
      v39 = *(_DWORD *)(v38 + *(_QWORD *)&v24);
      v40 = cx - v39;
      v45.left = v34 - v39;
      v41 = *(_DWORD *)(v38 + *(_QWORD *)&v24 + 4);
      v45.top = v20 - v41;
      v45.bottom = cy - v41;
      v45.right = v40;
      if ( !ERECTL::bEmpty((ERECTL *)&v45) && ERECTL::bWrapped((ERECTL *)&v45) )
      {
        v26 = 0;
        v43 = v33;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v48, &v45);
        v26 = RGNOBJ::iCombine((RGNOBJ *)&v50, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v46, v53);
        if ( v26 )
        {
          v33 = v50;
          ++*((_DWORD *)v50 + 8);
          *(_QWORD *)(*(_QWORD *)&v24 + 168LL) = v33;
LABEL_59:
          REGION::vDeleteREGION(v46);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v48);
          if ( v51 != 1 )
            goto LABEL_45;
          v42 = v33;
LABEL_81:
          REGION::vDeleteREGION(v42);
LABEL_45:
          if ( v47 == 1 )
            REGION::vDeleteREGION(0LL);
          return v26;
        }
        v43 = v50;
      }
      REGION::vDeleteREGION(v43);
      v33 = 0LL;
      goto LABEL_59;
    }
    v26 = 0;
    goto LABEL_59;
  }
  ++*((_DWORD *)v9 + 8);
  *(_QWORD *)(*(_QWORD *)&v24 + 168LL) = v9;
  return 2;
}
