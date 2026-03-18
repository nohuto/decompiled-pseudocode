/*
 * XREFs of _DestroyMenu @ 0x1C0022400
 * Callers:
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNFreeItem @ 0x1C0022A10 (MNFreeItem.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     NtUserDestroyMenu @ 0x1C01252A0 (NtUserDestroyMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSystemMenu @ 0x1C015493C (xxxSetSystemMenu.c)
 * Callees:
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C001FC3C (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z.c)
 *     MNFreeItem @ 0x1C0022A10 (MNFreeItem.c)
 */

__int64 __fastcall DestroyMenu(__int64 a1)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (unsigned int)HMMarkObjectDestroy() )
  {
    v3 = (_QWORD *)(a1 + 88);
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( v5 )
    {
      do
      {
        MNFreeItem(a1, v4, 1LL);
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
      tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=((_QWORD *)(a1 + 88), 0LL);
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
