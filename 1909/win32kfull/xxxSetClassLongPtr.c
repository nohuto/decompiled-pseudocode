/*
 * XREFs of xxxSetClassLongPtr @ 0x1C010F77C
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C010F530 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x1C010F818 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 i; // rdi
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v19, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v7, v6) )
  {
    UserSetLastError(5LL, v8, v9, v10);
    v11 = 0LL;
    goto LABEL_4;
  }
  v11 = 0LL;
  if ( (int)v3 < 0 )
  {
    v11 = xxxSetClassData((struct tagWND *)a1);
LABEL_4:
    v13 = v11;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( v15 != *(_QWORD *)v19[0] )
  {
    if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
    {
      if ( *(_BYTE *)(v19[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
    }
    if ( v15 )
    {
      v19[0] = *(_QWORD *)(v15 + 128);
      ++*(_DWORD *)(v19[0] + 8LL);
    }
    else
    {
      v19[0] = gSmartObjNullRef;
    }
  }
  v12 = (unsigned int)(v3 + 8);
  if ( (unsigned int)v12 < (unsigned int)v3
    || (unsigned int)v12 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 12LL) )
  {
    UserSetLastError(1413LL, v12, v9, v10);
    goto LABEL_4;
  }
  v16 = v3;
  v17 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
  v13 = *(_QWORD *)(v17 + v3 + 88);
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
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v12, v9);
  return v13;
}
