/*
 * XREFs of ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022135C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DPIMetrics; // rax
  int v11; // r8d
  unsigned int v12; // ebx
  __int64 i; // rdx
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 j; // r8
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  _QWORD v27[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v25 = 0LL;
  v26 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, *v4);
  ((void (__fastcall *)(_QWORD *, __int64, __int64 *, _QWORD))MNGetPopupBoundsRect)(v27, a3, &v25, 0LL);
  v7 = HIDWORD(v26) - HIDWORD(v25);
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v7 )
    v7 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && (v8 = **a2, *(_DWORD *)(**(_QWORD **)(v8 + 88) + 72LL) == *(_DWORD *)(v8 + 64))
    && (v9 = **a2, *(_DWORD *)(v9 + 68) + 6 > v7) )
  {
    DPIMetrics = GetDPIMetrics(v9, v8, v6);
    v11 = 0;
    v12 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v7;
    for ( i = *(_QWORD *)(**a2 + 88); v11 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v12 )
        break;
      ++v11;
    }
    v14 = i - 96;
    if ( !v11 )
      v14 = i;
    v15 = 0;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v14 + 68LL);
    v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1);
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * (int)v16; (int)v16 >= 0; v16 = (unsigned int)(v16 - 1) )
    {
      v15 += *(_DWORD *)(*(_QWORD *)j + 76LL);
      if ( v15 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v18 = (unsigned int)(v16 + 1);
    if ( (_DWORD)v16 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v18 = (unsigned int)v16;
    *(_DWORD *)(**a2 + 120) = v18;
    if ( *(_DWORD *)(**a2 + 116) > (int)v18 )
      *(_DWORD *)(**a2 + 116) = v18;
    v19 = **a2;
    if ( *(_DWORD *)(v19 + 116) == (_DWORD)v18 )
    {
      *(_DWORD *)(v19 + 124) |= 3u;
    }
    else
    {
      v20 = *(_DWORD *)(v19 + 116) == 0;
      v19 = **a2;
      v21 = *(_DWORD *)(v19 + 124);
      if ( v20 )
        v22 = v21 & 0xFFFFFFFC | 2;
      else
        v22 = v21 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v19 + 124) = v22;
    }
    v23 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDPIMetrics(v19, v16, v18) + 28) + *(_DWORD *)(v23 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
