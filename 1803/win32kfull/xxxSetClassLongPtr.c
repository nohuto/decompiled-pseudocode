/*
 * XREFs of xxxSetClassLongPtr @ 0x1C010B038
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C010AE30 (NtUserSetClassLongPtr.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 i; // rdi
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v17, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    UserSetLastError(5LL, v7);
    v8 = 0LL;
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData((struct tagWND *)a1, v3, a3);
LABEL_4:
    v10 = v8;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( v12 != *(_QWORD *)v17[0] )
  {
    if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
    {
      if ( *(_BYTE *)(v17[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
    }
    if ( v12 )
    {
      v17[0] = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v17[0] + 8LL);
    }
    else
    {
      v17[0] = gSmartObjNullRef;
    }
  }
  v13 = v3 + 8;
  v9 = 0xFFFFFFFFLL;
  if ( (int)v3 + 8 < (unsigned int)v3 || (v9 = v13, v13 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + 12LL)) )
  {
    UserSetLastError(1413LL, v9);
    goto LABEL_4;
  }
  v14 = v3;
  v15 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
  v10 = *(_QWORD *)(v15 + v3 + 88);
  *(_QWORD *)(v15 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v17[0] + 64LL); ; i = **(_QWORD **)v17[0] )
  {
    if ( i != *(_QWORD *)v17[0] )
    {
      if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
      {
        if ( *(_BYTE *)(v17[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
      }
      if ( i )
      {
        v17[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v17[0] + 8LL);
      }
      else
      {
        v17[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v17[0] )
      break;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + v14 + 88) = a3;
  }
LABEL_5:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v9);
  return v10;
}
