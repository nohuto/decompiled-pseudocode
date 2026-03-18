/*
 * XREFs of xxxSetClassLongPtr @ 0x1C00FC2D8
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C00FC0C0 (NtUserSetClassLongPtr.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 i; // rdi
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v19, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    UserSetLastError(5LL, v7, v8, v9);
    v10 = 0LL;
    goto LABEL_4;
  }
  v10 = 0LL;
  if ( (int)v3 < 0 )
  {
    v10 = xxxSetClassData((struct tagWND *)a1);
LABEL_4:
    v12 = v10;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( v14 != *(_QWORD *)v19[0] )
  {
    if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
    {
      if ( *(_BYTE *)(v19[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
    }
    if ( v14 )
    {
      v19[0] = *(_QWORD *)(v14 + 128);
      ++*(_DWORD *)(v19[0] + 8LL);
    }
    else
    {
      v19[0] = gSmartObjNullRef;
    }
  }
  v15 = v3 + 8;
  v11 = 0xFFFFFFFFLL;
  if ( (int)v3 + 8 < (unsigned int)v3 || (v11 = v15, v15 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 12LL)) )
  {
    UserSetLastError(1413LL, v11, v8, v9);
    goto LABEL_4;
  }
  v16 = v3;
  v17 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
  v12 = *(_QWORD *)(v17 + v3 + 88);
  *(_QWORD *)(v17 + v3 + 88) = a3;
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
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + v16 + 88) = a3;
  }
LABEL_5:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v11);
  return v12;
}
