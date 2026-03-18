/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C003E140 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // edx
  __int64 v13; // rcx
  DC *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _DWORD *v17; // rdi
  struct _RECTL v18; // xmm6
  LONG bottom; // r12d
  LONG right; // r13d
  LONG top; // edi
  __int64 v22; // rax
  bool v23; // zf
  int *v24; // r8
  int v25; // ecx
  _DWORD *v26; // r8
  int *v27; // r8
  int v28; // ecx
  char *v29; // r9
  _QWORD *v30; // rdi
  char *v31; // rcx
  LONG v32; // eax
  int v33; // edx
  __int64 result; // rax
  unsigned int v35; // r12d
  int v36; // r13d
  __int64 v37; // rdi
  LONG v38; // eax
  int v39; // eax
  _DWORD *v40; // r8
  char *v41; // r8
  LONG left; // [rsp+30h] [rbp-50h]
  _QWORD *v43; // [rsp+40h] [rbp-40h] BYREF
  int v44; // [rsp+48h] [rbp-38h]
  struct _RECTL v45; // [rsp+50h] [rbp-30h] BYREF

  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v5 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == ((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000) >> 16 )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v3;
    }
  }
  v6 = *((_QWORD *)gpHandleManager + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    v8 = ((v5 - v7) >> 16) + 1;
    if ( v5 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v6 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v10 = v5 + ((1 - (_DWORD)v8) << 16) - v7;
    else
      v10 = v5;
    v11 = 0LL;
    if ( v10 < *(_DWORD *)(v9 + 20) )
    {
      a3 = v10;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                     + 16LL * (unsigned __int8)v10
                     + 8) )
        v11 = *(_QWORD *)v9 + 24LL * v10;
    }
  }
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v6,
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v12 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v12 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_65;
  v13 = ((v5 - v12) >> 16) + 1;
  if ( v5 < v12 )
    v13 = 0LL;
  a3 = *(_QWORD *)(v6 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v5 += ((1 - (_DWORD)v13) << 16) - v12;
  if ( v5 >= *(_DWORD *)(a3 + 20) )
LABEL_65:
    v14 = 0LL;
  else
    v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(a3 + 24) + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  if ( v14 != this )
    v11 = 0LL;
  *(_BYTE *)(v11 + 15) |= 4u;
  v15 = *((_QWORD *)this + 62);
  if ( v15 && (*(_DWORD *)(v15 + 116) & 0x800) != 0 )
    v16 = *(_QWORD *)((char *)this + 532);
  else
    v16 = *((_QWORD *)this + 64);
  v17 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v45.left = 0LL;
  *(_QWORD *)&v45.right = v16;
  v18 = v45;
  if ( v15 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(
        L"ghsemDynamicModeChange",
        &LockAcquireShared,
        a3,
        ghsemDynamicModeChange,
        L"ghsemDynamicModeChange");
    if ( (v17[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v38 = v17[646];
      right = v38 + v45.right;
      v45.left = v38;
      left = v38;
      v39 = v17[647];
      top = v39 + v45.top;
      v45.right = right;
      bottom = v39 + v45.bottom;
      v45.top += v39;
      v45.bottom += v39;
      v18 = v45;
    }
    else
    {
      bottom = v45.bottom;
      right = v45.right;
      top = v45.top;
      left = v45.left;
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(L"ghsemDynamicModeChange", &LockRelease, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  else
  {
    bottom = v45.bottom;
    right = v45.right;
    top = v45.top;
    left = v45.left;
  }
  v22 = *((_QWORD *)this + 140);
  if ( v22 && (struct REGION *)v22 != prgnDefault )
  {
    if ( left == right || top == bottom )
    {
      *(_DWORD *)(v22 + 80) = 120;
      *(_QWORD *)(v22 + 84) = 1LL;
      *(_QWORD *)(v22 + 92) = 0LL;
      v29 = (char *)(v22 + 120);
      *(_DWORD *)(v22 + 100) = 0;
      *(_DWORD *)(v22 + 104) = 0;
      *(_DWORD *)(v22 + 108) = 0x80000000;
      *(_QWORD *)(v22 + 112) = 0x7FFFFFFFLL;
    }
    else
    {
      v23 = *(_DWORD *)(v22 + 80) == 160;
      v24 = (int *)(v22 + 104);
      *(struct _RECTL *)(v22 + 88) = v18;
      if ( v23 )
      {
        v25 = *v24;
        *(_DWORD *)(v22 + 112) = top;
        v26 = (int *)((char *)v24 + (unsigned int)(4 * v25 + 16));
        v26[1] = top;
        v26[2] = bottom;
        v26[3] = left;
        v26[4] = right;
        v27 = (_DWORD *)((char *)v26 + (unsigned int)(4 * *v26 + 16));
        v28 = *v27;
        v27[1] = bottom;
        v29 = (char *)v27 + (unsigned int)(4 * v28 + 16);
      }
      else
      {
        *(_DWORD *)(v22 + 80) = 160;
        *(_DWORD *)(v22 + 84) = 3;
        *v24 = 0;
        *(_DWORD *)(v22 + 108) = 0x80000000;
        *(_DWORD *)(v22 + 112) = top;
        *(_DWORD *)(v22 + 116) = 0;
        v40 = (int *)((char *)v24 + (unsigned int)(4 * *v24 + 16));
        *v40 = 2;
        v40[1] = top;
        v40[2] = bottom;
        v40[3] = left;
        v40[4] = right;
        v40[5] = 2;
        v41 = (char *)v40 + (unsigned int)(4 * *v40 + 16);
        v29 = v41 + 16;
        *(_DWORD *)v41 = 0;
        *((_DWORD *)v41 + 1) = bottom;
        *((_QWORD *)v41 + 1) = 0x7FFFFFFFLL;
      }
    }
    *(_QWORD *)(v22 + 40) = v29;
    v30 = (_QWORD *)*((_QWORD *)this + 140);
    goto LABEL_33;
  }
  v35 = 216;
  v44 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v36 = 1;
    v35 = 376;
  }
  else
  {
    v36 = 0;
  }
  if ( dword_1C02149A0 < v35 )
  {
    v30 = PALLOCMEM2(v35, 0x34306847u, 0);
    if ( v30 )
    {
      *v30 = 0LL;
      v30[1] = 0LL;
      v30[2] = 0LL;
      if ( v36 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v30[v35 / 8 - 20], 0LL);
      goto LABEL_54;
    }
LABEL_78:
    EngSetLastError(8u);
    result = 0LL;
    *((_QWORD *)this + 140) = prgnDefault;
    return result;
  }
  v37 = qword_1C02158D0;
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    goto LABEL_78;
  v30 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v37);
  if ( !v30 )
    goto LABEL_78;
  *v30 = 0LL;
  v30[1] = 0LL;
  v30[2] = 0LL;
  if ( v36 )
    RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v30[v35 / 8 - 20], 0LL);
  *((_WORD *)v30 + 7) = 0x8000;
LABEL_54:
  *((_DWORD *)v30 + 20) = 120;
  *(_QWORD *)((char *)v30 + 84) = 1LL;
  *(_QWORD *)((char *)v30 + 92) = 0LL;
  *((_DWORD *)v30 + 25) = 0;
  *((_DWORD *)v30 + 26) = 0;
  *((_DWORD *)v30 + 27) = 0x80000000;
  v30[14] = 0x7FFFFFFFLL;
  v30[5] = v30 + 15;
  v30[3] = 216LL;
  v30[4] = 0LL;
  v30[7] = v30 + 6;
  v30[6] = v30 + 6;
  v43 = v30;
  RGNOBJ::vSet((RGNOBJ *)&v43, &v45);
  *((_QWORD *)this + 140) = v30;
LABEL_33:
  v31 = (char *)this + 1016;
  *((_DWORD *)v30 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  v32 = v45.left;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = v16;
  *((_DWORD *)this + 250) = v32;
  *((_DWORD *)this + 251) = v45.top;
  *((_DWORD *)this + 252) = v45.right;
  *((_DWORD *)this + 253) = v45.bottom;
  if ( (*((_DWORD *)this + 10) & 1) != 0 )
    v31 = (char *)this + 1024;
  v33 = *((_DWORD *)v31 + 1);
  result = 1LL;
  *((_DWORD *)this + 294) = *(_DWORD *)v31;
  *((_DWORD *)this + 295) = v33;
  return result;
}
