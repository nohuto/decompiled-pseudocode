/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019DF0 (GreIntersectClipRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0018D30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0027C00 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00773A4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00776C4 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  int v3; // r12d
  tagSIZE v4; // r13
  unsigned int v8; // esi
  int v9; // r14d
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edi
  DC *v27; // rdx
  _QWORD *Object; // rax
  REGION *v29; // rbx
  _QWORD *v30; // rax
  REGION *v31; // rcx
  REGION *v33; // rsi
  int v34; // r14d
  LONG cx; // ebx
  int v36; // r12d
  LONG cy; // r13d
  _DWORD *v38; // rdi
  __int64 v39; // rcx
  int v40; // eax
  LONG v41; // ebx
  int v42; // eax
  REGION *v43; // rcx
  REGION *v44; // [rsp+20h] [rbp-50h] BYREF
  int v45; // [rsp+28h] [rbp-48h]
  struct _RECTL v46; // [rsp+30h] [rbp-40h] BYREF
  __int64 v47; // [rsp+40h] [rbp-30h] BYREF
  int v48; // [rsp+48h] [rbp-28h]
  REGION *v49; // [rsp+50h] [rbp-20h] BYREF
  int v50; // [rsp+58h] [rbp-18h]
  tagSIZE v51; // [rsp+A0h] [rbp+30h] BYREF
  int v52; // [rsp+B0h] [rbp+40h]

  v52 = a3;
  v3 = a3;
  v4 = (tagSIZE)*((_QWORD *)this + 20);
  if ( (a2->left & 0xF8000000) != -134217728 && (a2->left & 0xF8000000) != 0
    || (a2->bottom & 0xF8000000) != -134217728 && (a2->bottom & 0xF8000000) != 0
    || (a2->right & 0xF8000000) != -134217728 && (a2->right & 0xF8000000) != 0
    || (a2->top & 0xF8000000) != -134217728 && (a2->top & 0xF8000000) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 216;
  v45 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v8 = 376;
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( dword_1C02119A0 >= v8 )
  {
    v10 = qword_1C02128D0;
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v11 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v10);
      if ( v11 )
      {
        *v11 = 0LL;
        v11[1] = 0LL;
        v11[2] = 0LL;
        if ( v9 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v11[v8 / 8 - 20], 0LL);
        *((_WORD *)v11 + 7) = 0x8000;
        goto LABEL_14;
      }
    }
LABEL_83:
    EngSetLastError(8u);
    return 0;
  }
  v11 = PALLOCMEM2(v8, 0x34306847u, 0);
  if ( !v11 )
    goto LABEL_83;
  *v11 = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  if ( v9 )
    RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v11[v8 / 8 - 20], 0LL);
LABEL_14:
  *((_DWORD *)v11 + 20) = 120;
  *(_QWORD *)((char *)v11 + 84) = 1LL;
  v12 = 0LL;
  v44 = (REGION *)v11;
  *(_QWORD *)((char *)v11 + 92) = 0LL;
  *((_DWORD *)v11 + 25) = 0;
  *((_DWORD *)v11 + 26) = 0;
  *((_DWORD *)v11 + 27) = 0x80000000;
  v11[14] = 0x7FFFFFFFLL;
  v11[5] = v11 + 15;
  v11[3] = 216LL;
  v11[4] = 0LL;
  v11[7] = v11 + 6;
  v11[6] = v11 + 6;
  RGNOBJ::vSet((RGNOBJ *)&v44, a2);
  v13 = *(_DWORD *)this;
  v14 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v15 = (unsigned __int16)v13 | (v14 >> 8) & 0xFF0000;
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v12 = 0LL;
  }
  v16 = *((_QWORD *)gpHandleManager + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    v18 = ((v15 - v17) >> 16) + 1;
    if ( v15 < v17 )
      v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
    if ( (_DWORD)v18 )
      v20 = v15 + ((1 - (_DWORD)v18) << 16) - v17;
    else
      v20 = v15;
    if ( v20 < *(_DWORD *)(v19 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                   + 16LL * (unsigned __int8)v20
                   + 8) )
    {
      v12 = *(_QWORD *)v19 + 24LL * v20;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v3 = v52;
  }
  v21 = *(_DWORD *)(v16 + 2056);
  if ( v15 >= v21 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    goto LABEL_74;
  v22 = ((v15 - v21) >> 16) + 1;
  if ( v15 < v21 )
    v22 = 0LL;
  v23 = *(_QWORD *)(v16 + 8 * v22 + 8);
  if ( (_DWORD)v22 )
    v15 += ((1 - (_DWORD)v22) << 16) - v21;
  if ( v15 >= *(_DWORD *)(v23 + 20) )
  {
LABEL_74:
    v26 = 0;
    v27 = 0LL;
  }
  else
  {
    v24 = (unsigned __int64)v15 >> 8;
    v25 = 2LL * (unsigned __int8)v15;
    v26 = 0;
    v27 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * v24) + 8 * v25 + 8);
  }
  if ( v27 != this )
    v12 = 0LL;
  *(_BYTE *)(v12 + 15) |= 4u;
  if ( v4 )
  {
    v50 = 0;
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v49 = (REGION *)Object;
    v29 = (REGION *)Object;
    if ( Object )
    {
      *((_DWORD *)Object + 20) = 120;
      *(_QWORD *)((char *)Object + 84) = 1LL;
      *(_QWORD *)((char *)Object + 92) = 0LL;
      *((_DWORD *)Object + 25) = 0;
      *((_DWORD *)Object + 26) = 0;
      *((_DWORD *)Object + 27) = 0x80000000;
      Object[14] = 0x7FFFFFFFLL;
      Object[5] = Object + 15;
      Object[3] = 216LL;
      Object[4] = 0LL;
      v30 = Object + 6;
      v51 = v4;
      v30[1] = v30;
      *v30 = v30;
      v26 = RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v51, (struct RGNOBJ *)&v44, v3);
      if ( v26 )
      {
        v29 = v49;
        v31 = (REGION *)v51;
        ++*((_DWORD *)v49 + 8);
        *((_QWORD *)this + 20) = v29;
        if ( (*((_DWORD *)v31 + 8))-- == 1 )
          REGION::vDeleteREGION(v31);
      }
      else
      {
        REGION::vDeleteREGION(v49);
        v29 = 0LL;
      }
    }
    REGION::vDeleteREGION(v44);
    if ( v50 != 1 )
      goto LABEL_45;
    v43 = v29;
    goto LABEL_77;
  }
  if ( v3 != 1 )
  {
    v50 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v49, 0xD8u);
    v48 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v47, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v47);
    v33 = v49;
    v51 = 0LL;
    if ( v49 )
    {
      if ( !v47 )
        goto LABEL_78;
      DC::vGet_sizlWindow(this, &v51);
      v34 = 0;
      cx = v51.cx;
      v36 = 0;
      cy = v51.cy;
      v38 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v51);
        if ( (v38[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v34 = v38[646];
          cx += v34;
          v36 = v38[647];
          cy += v36;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion();
        }
      }
      v39 = 1016LL;
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
        v39 = 1024LL;
      v40 = *(_DWORD *)((char *)this + v39);
      v41 = cx - v40;
      v46.left = v34 - v40;
      v42 = *(_DWORD *)((char *)this + v39 + 4);
      v46.top = v36 - v42;
      v46.bottom = cy - v42;
      v46.right = v41;
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v46) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v46) )
      {
        v26 = 0;
        REGION::vDeleteREGION(v33);
        v33 = 0LL;
        goto LABEL_59;
      }
      RGNOBJ::vSet((RGNOBJ *)&v47, &v46);
      v26 = RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v47, (struct RGNOBJ *)&v44, v52);
      if ( v26 )
      {
        v33 = v49;
        ++*((_DWORD *)v49 + 8);
        *((_QWORD *)this + 20) = v33;
      }
      else
      {
LABEL_78:
        REGION::vDeleteREGION(v49);
        v33 = 0LL;
      }
    }
LABEL_59:
    REGION::vDeleteREGION(v44);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v47);
    if ( v50 != 1 )
      goto LABEL_45;
    v43 = v33;
LABEL_77:
    REGION::vDeleteREGION(v43);
LABEL_45:
    if ( v45 == 1 )
      REGION::vDeleteREGION(0LL);
    return v26;
  }
  ++*((_DWORD *)v11 + 8);
  v26 = 2;
  *((_QWORD *)this + 20) = v11;
  return v26;
}
