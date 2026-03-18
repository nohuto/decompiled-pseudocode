/*
 * XREFs of _SetClassWord @ 0x1C01EA880
 * Callers:
 *     NtUserSetClassWord @ 0x1C0233F90 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int16 v16; // di
  __int64 i; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v19, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v11 + 416) != CurrentProcessWin32Process )
  {
    v12 = 5LL;
LABEL_26:
    UserSetLastError(v12, v9, v10, v11);
    v16 = 0;
    goto LABEL_27;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v13 != *(_QWORD *)v19[0] )
  {
    if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
    {
      if ( *(_BYTE *)(v19[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
    }
    if ( v13 )
    {
      v19[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v19[0] + 8LL);
    }
    else
    {
      v19[0] = gSmartObjNullRef;
    }
  }
  if ( (int)v3 < 0
    || (v9 = (unsigned int)(v3 + 2), (unsigned int)v9 < (unsigned int)v3)
    || (unsigned int)v9 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 12LL) )
  {
    v12 = 1413LL;
    goto LABEL_26;
  }
  v14 = v3;
  v15 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
  v16 = *(_WORD *)(v15 + v3 + 88);
  *(_WORD *)(v15 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v19[0] + 64LL); ; i = **(_QWORD **)v19[0] )
  {
    if ( i != *(_QWORD *)v19[0] )
    {
      if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
      {
        if ( *(_BYTE *)(v19[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
      }
      if ( i )
      {
        v19[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v19[0] + 8LL);
      }
      else
      {
        v19[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v19[0] )
      break;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + v14 + 88) = a3;
  }
LABEL_27:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v9, v10);
  return v16;
}
