/*
 * XREFs of _RegisterClassEx @ 0x1C0022834
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C00229A0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C0021AE8 (InternalRegisterClassEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, __int16 a3, unsigned int a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // bx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  int v17; // [rsp+68h] [rbp+38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v16 = 0LL;
  v15 = gSmartObjNullRef;
  v16 = *(_QWORD *)(ThreadWin32Thread + 1448);
  *(_QWORD *)(ThreadWin32Thread + 1448) = &v16;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v9) = 7;
    v14 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v9);
    if ( v14 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
  }
  v17 = 0;
  v12 = InternalRegisterClassEx(a1, a3, a4, &v17);
  if ( v12 != *(_QWORD *)v15 )
  {
    if ( v15 != gSmartObjNullRef && !--*(_DWORD *)(v15 + 8) )
    {
      if ( *(_BYTE *)(v15 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v15);
    }
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 128);
      ++*(_DWORD *)(v15 + 8);
    }
    else
    {
      v15 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v15 )
  {
    if ( !v17 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 24LL) = a2[1];
      v11 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
      *(_QWORD *)(v11 + 16) = *a2;
      *(_WORD *)(*(_QWORD *)v15 + 30LL) = 0;
    }
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 2LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15, v11);
  return v10;
}
