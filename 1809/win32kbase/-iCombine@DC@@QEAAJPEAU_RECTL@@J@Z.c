/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190
 * Callers:
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00138AC (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0029890 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C006969C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  int v3; // r12d
  REGION *v4; // r13
  __int64 v8; // rdi
  __int64 Object; // rax
  REGION *v10; // rsi
  _QWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // ebx
  DC *v26; // rdx
  __int64 v27; // rax
  REGION *v28; // rdi
  _QWORD *v29; // rax
  REGION *v30; // rcx
  bool v31; // zf
  REGION *v32; // r14
  int v33; // r12d
  int v34; // r13d
  LONG cx; // ebx
  _DWORD *v36; // rdi
  __int64 v37; // rcx
  int v38; // eax
  LONG v39; // ebx
  int v40; // eax
  REGION *v41; // rcx
  REGION *v42; // [rsp+20h] [rbp-60h] BYREF
  int v43; // [rsp+28h] [rbp-58h]
  __int64 v44; // [rsp+30h] [rbp-50h] BYREF
  int v45; // [rsp+38h] [rbp-48h]
  REGION *v46; // [rsp+40h] [rbp-40h] BYREF
  int v47; // [rsp+48h] [rbp-38h]
  struct _RECTL v48; // [rsp+50h] [rbp-30h] BYREF
  REGION *v49; // [rsp+B0h] [rbp+30h] BYREF
  LONG cy; // [rsp+B8h] [rbp+38h]
  int v51; // [rsp+C0h] [rbp+40h]
  tagSIZE v52; // [rsp+C8h] [rbp+48h] BYREF

  v51 = a3;
  v3 = a3;
  v4 = (REGION *)*((_QWORD *)this + 20);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 0LL;
  v43 = 0;
  Object = AllocateObject(0xD8uLL, 4u, 0);
  v42 = (REGION *)Object;
  v10 = (REGION *)Object;
  if ( !Object )
    return 0;
  *(_DWORD *)(Object + 80) = 120;
  *(_QWORD *)(Object + 84) = 1LL;
  *(_QWORD *)(Object + 92) = 0LL;
  *(_DWORD *)(Object + 100) = 0;
  *(_DWORD *)(Object + 104) = 0;
  *(_DWORD *)(Object + 108) = 0x80000000;
  *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
  *(_QWORD *)(Object + 40) = Object + 120;
  *(_QWORD *)(Object + 24) = 216LL;
  *(_QWORD *)(Object + 32) = 0LL;
  v11 = (_QWORD *)(Object + 48);
  v11[1] = v11;
  *v11 = v11;
  RGNOBJ::vSet((RGNOBJ *)&v42, a2);
  v12 = *(_DWORD *)this;
  v13 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v14 = (unsigned __int16)v12 | (v13 >> 8) & 0xFF0000;
  if ( v14 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == HIWORD(v14) )
        v14 = (unsigned __int16)v14;
    }
    else
    {
      v14 = (unsigned __int16)v14;
    }
    v8 = 0LL;
  }
  v15 = *((_QWORD *)gpHandleManager + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    v17 = ((v14 - v16) >> 16) + 1;
    if ( v14 < v16 )
      v17 = 0LL;
    v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v19 = v14 + ((1 - (_DWORD)v17) << 16) - v16;
    else
      v19 = v14;
    if ( v19 < *(_DWORD *)(v18 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                   + 16LL * (unsigned __int8)v19
                   + 8) )
    {
      v8 = *(_QWORD *)v18 + 24LL * v19;
    }
  }
  if ( v14 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v14,
                                  1)
           + 13) == HIWORD(v14) )
        v14 = (unsigned __int16)v14;
    }
    else
    {
      v14 = (unsigned __int16)v14;
    }
    v3 = v51;
  }
  v20 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v20 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_65;
  v21 = ((v14 - v20) >> 16) + 1;
  if ( v14 < v20 )
    v21 = 0LL;
  v22 = *(_QWORD *)(v15 + 8 * v21 + 8);
  if ( (_DWORD)v21 )
    v14 += ((1 - (_DWORD)v21) << 16) - v20;
  if ( v14 >= *(_DWORD *)(v22 + 20) )
  {
LABEL_65:
    v25 = 0;
    v26 = 0LL;
  }
  else
  {
    v23 = (unsigned __int64)v14 >> 8;
    v24 = 2LL * (unsigned __int8)v14;
    v25 = 0;
    v26 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * v23) + 8 * v24 + 8);
  }
  if ( v26 != this )
    v8 = 0LL;
  *(_BYTE *)(v8 + 15) |= 4u;
  if ( v4 )
  {
    v48.right = 0;
    v27 = AllocateObject(0xD8uLL, 4u, 0);
    *(_QWORD *)&v48.left = v27;
    v28 = (REGION *)v27;
    if ( v27 )
    {
      *(_DWORD *)(v27 + 80) = 120;
      *(_QWORD *)(v27 + 84) = 1LL;
      *(_QWORD *)(v27 + 92) = 0LL;
      *(_DWORD *)(v27 + 100) = 0;
      *(_DWORD *)(v27 + 104) = 0;
      *(_DWORD *)(v27 + 108) = 0x80000000;
      *(_QWORD *)(v27 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v27 + 40) = v27 + 120;
      *(_QWORD *)(v27 + 24) = 216LL;
      *(_QWORD *)(v27 + 32) = 0LL;
      v29 = (_QWORD *)(v27 + 48);
      v49 = v4;
      v29[1] = v29;
      *v29 = v29;
      v25 = RGNOBJ::iCombine((RGNOBJ *)&v48, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v42, v3);
      if ( v25 )
      {
        v28 = *(REGION **)&v48.left;
        v30 = v49;
        ++*(_DWORD *)(*(_QWORD *)&v48.left + 32LL);
        *((_QWORD *)this + 20) = v28;
        v31 = (*((_DWORD *)v30 + 8))-- == 1;
        if ( v31 )
          REGION::vDeleteREGION(v30);
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)&v48.left);
        v28 = 0LL;
      }
      v10 = v42;
    }
    REGION::vDeleteREGION(v10);
    if ( v48.right != 1 )
      goto LABEL_39;
    v41 = v28;
    goto LABEL_68;
  }
  if ( v3 != 1 )
  {
    v46 = 0LL;
    v47 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v46, 0xD8u);
    v44 = 0LL;
    v45 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v44, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
    v32 = v46;
    if ( v46 )
    {
      if ( v44 )
      {
        DC::vGet_sizlWindow(this, &v52);
        v31 = *((_QWORD *)this + 62) == 0LL;
        v33 = 0;
        v34 = 0;
        cx = v52.cx;
        v36 = (_DWORD *)*((_QWORD *)this + 6);
        cy = v52.cy;
        if ( !v31 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v49);
          if ( (v36[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v33 = v36[646];
            cx += v33;
            v34 = v36[647];
            cy = v34 + v52.cy;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
        }
        v37 = 1016LL;
        if ( (*((_DWORD *)this + 10) & 1) != 0 )
          v37 = 1024LL;
        v38 = *(_DWORD *)((char *)this + v37);
        v39 = cx - v38;
        v48.left = v33 - v38;
        v40 = *(_DWORD *)((char *)this + v37 + 4);
        v48.right = v39;
        v48.bottom = cy - v40;
        v48.top = v34 - v40;
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v48) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v48) )
        {
          v25 = 0;
          REGION::vDeleteREGION(v32);
          v32 = 0LL;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v44, &v48);
          v25 = RGNOBJ::iCombine((RGNOBJ *)&v46, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v42, v51);
          if ( v25 )
          {
            v32 = v46;
            ++*((_DWORD *)v46 + 8);
            *((_QWORD *)this + 20) = v32;
          }
          else
          {
            REGION::vDeleteREGION(v46);
            v32 = 0LL;
          }
          v10 = v42;
        }
      }
      else
      {
        REGION::vDeleteREGION(v46);
        v32 = 0LL;
      }
    }
    REGION::vDeleteREGION(v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v44);
    if ( v47 != 1 )
      goto LABEL_39;
    v41 = v32;
LABEL_68:
    REGION::vDeleteREGION(v41);
LABEL_39:
    if ( v43 == 1 )
      REGION::vDeleteREGION(0LL);
    return v25;
  }
  ++*((_DWORD *)v10 + 8);
  v25 = 2;
  *((_QWORD *)this + 20) = v10;
  return v25;
}
