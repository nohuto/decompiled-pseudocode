/*
 * XREFs of _DestroyMenu @ 0x1C006C6D0
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     MNFreeItem @ 0x1C0069C4C (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     NtUserDestroyMenu @ 0x1C011D8C0 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01283F8 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C014D6A0 (xxxSetSystemMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C0069C4C (MNFreeItem.c)
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C00FFC48 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  __int64 *v3; // r14
  __int64 v4; // rdi
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    v3 = (__int64 *)(a1 + 88);
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( v5 )
    {
      do
      {
        MNFreeItem(a1, v4, 1);
        v4 += 96LL;
        --v5;
      }
      while ( v5 );
      v4 = *v3;
    }
    if ( v4 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 96));
      Win32FreePool(*v3);
      tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(a1 + 88, 0LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) &= v6;
    }
    v7 = *(_QWORD *)(a1 + 24);
    v10 = 0LL;
    LockObjectAssignment(&v10, v7);
    HMAssignmentUnlock(a1 + 80);
    v8 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)v8 = 0LL;
    v9 = *(_DWORD *)(v8 + 8) == 0;
    *(_BYTE *)(v8 + 12) = 1;
    if ( v9 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v8);
    HMFreeObject(a1);
    UnlockObjectAssignment(&v10);
  }
  return 1LL;
}
