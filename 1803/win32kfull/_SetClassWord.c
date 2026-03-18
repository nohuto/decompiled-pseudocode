/*
 * XREFs of _SetClassWord @ 0x1C01B2AB8
 * Callers:
 *     NtUserSetClassWord @ 0x1C01F4CE0 (NtUserSetClassWord.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int16 v14; // di
  __int64 i; // rbx
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v17, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v6) )
  {
    v8 = 5LL;
LABEL_28:
    UserSetLastError(v8, v7);
    v14 = 0;
    goto LABEL_29;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( v9 != *(_QWORD *)v17[0] )
  {
    if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
    {
      if ( *(_BYTE *)(v17[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
    }
    if ( v9 )
    {
      v17[0] = *(_QWORD *)(v9 + 128);
      ++*(_DWORD *)(v17[0] + 8LL);
    }
    else
    {
      v17[0] = gSmartObjNullRef;
    }
  }
  v7 = 0xFFFFFFFFLL;
  v10 = v3;
  if ( (int)v3 < 0 )
    v10 = -1;
  if ( (int)v3 >> 31 == -1
    || (v11 = v10 + 2, v10 + 2 < v10)
    || (v7 = v11, v11 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + 12LL)) )
  {
    v8 = 1413LL;
    goto LABEL_28;
  }
  v12 = v3;
  v13 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
  v14 = *(_WORD *)(v13 + v3 + 88);
  *(_WORD *)(v13 + v12 + 88) = a3;
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
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL) + v12 + 88) = a3;
  }
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v7);
  return v14;
}
