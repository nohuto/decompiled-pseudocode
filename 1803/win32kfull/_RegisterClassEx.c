/*
 * XREFs of _RegisterClassEx @ 0x1C001B1C4
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C001AAC0 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C001B870 (InternalRegisterClassEx.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // bx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  int v17; // [rsp+68h] [rbp+38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = 0;
  v16 = 0LL;
  v15 = gSmartObjNullRef;
  v16 = *(_QWORD *)(ThreadWin32Thread + 1456);
  *(_QWORD *)(ThreadWin32Thread + 1456) = &v16;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v9) = 7;
    v14 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v9, v10);
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
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 16LL) = *a2;
      *(_WORD *)(*(_QWORD *)v15 + 30LL) = 0;
    }
    v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 2LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v15);
  return v11;
}
