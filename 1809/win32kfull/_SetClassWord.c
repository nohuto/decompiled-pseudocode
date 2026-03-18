/*
 * XREFs of _SetClassWord @ 0x1C01D51EC
 * Callers:
 *     NtUserSetClassWord @ 0x1C021C4B0 (NtUserSetClassWord.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 i; // rbx
  _QWORD v20[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v20, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v10 + 424) != CurrentProcessWin32Process )
  {
    v11 = 5LL;
LABEL_28:
    UserSetLastError(v11, v8, v9, v10);
    v17 = 0;
    goto LABEL_29;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( v12 != *(_QWORD *)v20[0] )
  {
    if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8LL) )
    {
      if ( *(_BYTE *)(v20[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
    }
    if ( v12 )
    {
      v20[0] = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v20[0] + 8LL);
    }
    else
    {
      v20[0] = gSmartObjNullRef;
    }
  }
  v8 = 0xFFFFFFFFLL;
  v13 = v3;
  if ( (int)v3 < 0 )
    v13 = -1;
  if ( (int)v3 >> 31 == -1
    || (v14 = v13 + 2, v13 + 2 < v13)
    || (v8 = v14, v14 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + 12LL)) )
  {
    v11 = 1413LL;
    goto LABEL_28;
  }
  v15 = v3;
  v16 = *(_QWORD *)(*(_QWORD *)v20[0] + 8LL);
  v17 = *(_WORD *)(v16 + v3 + 88);
  *(_WORD *)(v16 + v15 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v20[0] + 64LL); ; i = **(_QWORD **)v20[0] )
  {
    if ( i != *(_QWORD *)v20[0] )
    {
      if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8LL) )
      {
        if ( *(_BYTE *)(v20[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
      }
      if ( i )
      {
        v20[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v20[0] + 8LL);
      }
      else
      {
        v20[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v20[0] )
      break;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL) + v15 + 88) = a3;
  }
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v8);
  return v17;
}
