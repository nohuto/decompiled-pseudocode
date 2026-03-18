/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C003A5E0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r15
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  DC *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // rdi
  struct REGION *v17; // rax
  unsigned int v18; // r12d
  int v19; // r13d
  __int64 v20; // rdi
  _QWORD *v21; // rdi
  char *v22; // rcx
  LONG left; // eax
  int v24; // edx
  __int64 result; // rax
  LONG v26; // eax
  int v27; // eax
  _BYTE v28[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+30h] [rbp-30h] BYREF
  int v31; // [rsp+38h] [rbp-28h]
  struct _RECTL v32; // [rsp+40h] [rbp-20h] BYREF

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
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v9 = 0LL;
  }
  else
  {
    v6 = ((v3 - v5) >> 16) + 1;
    if ( v3 < v5 )
      v6 = 0LL;
    v7 = *(_QWORD *)(v4 + 8 * v6 + 8);
    if ( (_DWORD)v6 )
      v8 = v3 + ((1 - (_DWORD)v6) << 16) - v5;
    else
      v8 = v3;
    v9 = 0LL;
    if ( v8 < *(_DWORD *)(v7 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                   + 16LL * (unsigned __int8)v8
                   + 8) )
    {
      v9 = *(_QWORD *)v7 + 24LL * v8;
    }
  }
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v4,
                                  (unsigned __int16)v3,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v10 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v10 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    goto LABEL_55;
  v11 = ((v3 - v10) >> 16) + 1;
  if ( v3 < v10 )
    v11 = 0LL;
  v12 = *(_QWORD *)(v4 + 8 * v11 + 8);
  if ( (_DWORD)v11 )
    v3 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v3 >= *(_DWORD *)(v12 + 20) )
LABEL_55:
    v13 = 0LL;
  else
    v13 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                 + 16LL * (unsigned __int8)v3
                 + 8);
  if ( v13 != this )
    v9 = 0LL;
  *(_BYTE *)(v9 + 15) |= 4u;
  v14 = *((_QWORD *)this + 62);
  if ( v14 && (*(_DWORD *)(v14 + 116) & 0x800) != 0 )
    v15 = *(_QWORD *)((char *)this + 532);
  else
    v15 = *((_QWORD *)this + 64);
  v16 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v32.left = 0LL;
  *(_QWORD *)&v32.right = v15;
  if ( v14 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28);
    if ( (v16[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v26 = v16[646];
      v32.right += v26;
      v32.left = v26;
      v27 = v16[647];
      v32.top += v27;
      v32.bottom += v27;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  v17 = (struct REGION *)*((_QWORD *)this + 140);
  if ( v17 && v17 != prgnDefault )
  {
    v29 = *((_QWORD *)this + 140);
    RGNOBJ::vSet((RGNOBJ *)&v29, &v32);
    v21 = (_QWORD *)*((_QWORD *)this + 140);
    goto LABEL_35;
  }
  v18 = 216;
  v31 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v19 = 1;
    v18 = 376;
  }
  else
  {
    v19 = 0;
  }
  if ( dword_1C02119A0 < v18 )
  {
    v21 = PALLOCMEM2(v18, 0x34306847u, 0);
    if ( v21 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[2] = 0LL;
      if ( v19 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v21[v18 / 8 - 20], 0LL);
      goto LABEL_34;
    }
LABEL_62:
    EngSetLastError(8u);
    result = 0LL;
    *((_QWORD *)this + 140) = prgnDefault;
    return result;
  }
  v20 = qword_1C02128D0;
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    goto LABEL_62;
  v21 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v20);
  if ( !v21 )
    goto LABEL_62;
  *v21 = 0LL;
  v21[1] = 0LL;
  v21[2] = 0LL;
  if ( v19 )
    RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v21[v18 / 8 - 20], 0LL);
  *((_WORD *)v21 + 7) = 0x8000;
LABEL_34:
  *((_DWORD *)v21 + 20) = 120;
  *(_QWORD *)((char *)v21 + 84) = 1LL;
  *(_QWORD *)((char *)v21 + 92) = 0LL;
  *((_DWORD *)v21 + 25) = 0;
  *((_DWORD *)v21 + 26) = 0;
  *((_DWORD *)v21 + 27) = 0x80000000;
  v21[14] = 0x7FFFFFFFLL;
  v21[5] = v21 + 15;
  v21[3] = 216LL;
  v21[4] = 0LL;
  v21[7] = v21 + 6;
  v21[6] = v21 + 6;
  v30 = v21;
  RGNOBJ::vSet((RGNOBJ *)&v30, &v32);
  *((_QWORD *)this + 140) = v21;
LABEL_35:
  v22 = (char *)this + 1016;
  *((_DWORD *)v21 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  left = v32.left;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = v15;
  *((_DWORD *)this + 250) = left;
  *((_DWORD *)this + 251) = v32.top;
  *((_DWORD *)this + 252) = v32.right;
  *((_DWORD *)this + 253) = v32.bottom;
  if ( (*((_DWORD *)this + 10) & 1) != 0 )
    v22 = (char *)this + 1024;
  v24 = *((_DWORD *)v22 + 1);
  result = 1LL;
  *((_DWORD *)this + 294) = *(_DWORD *)v22;
  *((_DWORD *)this + 295) = v24;
  return result;
}
