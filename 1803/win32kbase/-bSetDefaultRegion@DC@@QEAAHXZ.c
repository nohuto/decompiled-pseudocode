/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // r15
  int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // edx
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // r8
  DC *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  _DWORD *v18; // rdi
  struct REGION *v19; // rax
  _WORD *Object; // rax
  _WORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 result; // rax
  bool v25; // cc
  struct _ENTRY *Entry; // rax
  int v27; // ecx
  LONG v28; // eax
  int v29; // eax
  _BYTE v30[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-3Ch]
  __int64 v32; // [rsp+28h] [rbp-38h] BYREF
  _WORD *v33; // [rsp+30h] [rbp-30h] BYREF
  int v34; // [rsp+38h] [rbp-28h]
  struct _RECTL v35; // [rsp+40h] [rbp-20h] BYREF

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v3 = (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v1,
                                  1)
           + 13) == ((unsigned __int16)v1 | (v1 >> 8) & 0xFF0000) >> 16 )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v1;
    }
  }
  v4 = *((_QWORD *)gpHandleManager + 2);
  v5 = *(unsigned __int16 *)(v4 + 2);
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((v5 + 0xFFFF) << 16) )
  {
    v10 = 0LL;
  }
  else
  {
    v7 = ((v3 - v6) >> 16) + 1;
    if ( v3 < v6 )
      v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 8 * v7 + 8);
    if ( (_DWORD)v7 )
      v9 = v3 + ((1 - (_DWORD)v7) << 16) - v6;
    else
      v9 = v3;
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                   + 16LL * (unsigned __int8)v9
                   + 8) )
    {
      v10 = *(_QWORD *)v8 + 24LL * v9;
    }
    LOWORD(v5) = *(_WORD *)(v4 + 2);
  }
  v11 = *(_DWORD *)(v4 + 2056);
  if ( v3 < 0x10000 )
    goto LABEL_14;
  v25 = *(_DWORD *)gpHandleManager <= 0x10000u;
  v31 = (unsigned __int16)v3;
  if ( v25 )
  {
    v3 = (unsigned __int16)v3;
LABEL_14:
    v12 = v5;
    goto LABEL_15;
  }
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v4, (unsigned __int16)v3, 1);
  v11 = v6;
  v27 = *((unsigned __int8 *)Entry + 13);
  v12 = v5;
  if ( v27 == HIWORD(v3) )
    v3 = v31;
LABEL_15:
  if ( v3 >= v11 + ((v12 + 0xFFFF) << 16) )
    goto LABEL_47;
  v13 = ((v3 - v11) >> 16) + 1;
  if ( v3 < v11 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v4 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v3 += ((1 - (_DWORD)v13) << 16) - v11;
  if ( v3 >= *(_DWORD *)(v14 + 20) )
LABEL_47:
    v15 = 0LL;
  else
    v15 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                 + 16LL * (unsigned __int8)v3
                 + 8);
  if ( v15 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
  v16 = *((_QWORD *)this + 63);
  if ( v16 && (*(_DWORD *)(v16 + 116) & 0x800) != 0 )
    v17 = *(_QWORD *)((char *)this + 540);
  else
    v17 = *((_QWORD *)this + 65);
  v18 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v35.left = 0LL;
  *(_QWORD *)&v35.right = v17;
  if ( v16 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30);
    if ( (v18[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 63) + 112LL) < 0 )
    {
      v28 = v18[644];
      v35.right += v28;
      v35.left = v28;
      v29 = v18[645];
      v35.top += v29;
      v35.bottom += v29;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  v19 = (struct REGION *)*((_QWORD *)this + 191);
  if ( v19 && v19 != prgnDefault )
  {
    v32 = *((_QWORD *)this + 191);
    RGNOBJ::vSet((RGNOBJ *)&v32, &v35);
    goto LABEL_33;
  }
  v34 = 0;
  Object = AllocateObject(0xD8uLL, 4u, 0);
  v33 = Object;
  v21 = Object;
  if ( Object )
  {
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
    v22 = Object + 24;
    v22[1] = v22;
    *v22 = v22;
    RGNOBJ::vSet((RGNOBJ *)&v33, &v35);
    *((_QWORD *)this + 191) = v21;
LABEL_33:
    v23 = *((_QWORD *)this + 191);
    *(_DWORD *)(v23 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    result = 1LL;
    LODWORD(v23) = v35.left;
    *((_QWORD *)this + 178) = 0LL;
    *((_QWORD *)this + 180) = 0LL;
    *((_QWORD *)this + 181) = v17;
    *((_DWORD *)this + 352) = v23;
    *((_DWORD *)this + 353) = v35.top;
    *((_DWORD *)this + 354) = v35.right;
    *((_DWORD *)this + 355) = v35.bottom;
    *((_QWORD *)this + 198) = *(_QWORD *)((char *)this + 932);
    return result;
  }
  result = 0LL;
  *((_QWORD *)this + 191) = prgnDefault;
  return result;
}
