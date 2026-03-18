/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C015D348
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C015A39C (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C01824C4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DC08 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  char *v5; // rbx
  void *v6; // rbp
  unsigned int v9; // edx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  char *v12; // rcx
  char *v13; // r8
  _QWORD *v14; // r10
  char *v15; // rax

  v5 = (char *)this + 864;
  v6 = 0LL;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 27) = a4;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = -1;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_BYTE *)this + 316) = a5;
  *((_BYTE *)this + 317) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 165) = -1;
  *((_DWORD *)this + 166) = 32;
  *((_DWORD *)this + 214) = 0;
  `vector constructor iterator'((char *)this + 864, 560LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v5 + 210) = 0LL;
  *((_DWORD *)v5 + 422) = 0;
  v9 = 0;
  *((_QWORD *)this + 320) = 0LL;
  v10 = v5 + 8;
  *((_QWORD *)this + 328) = 0LL;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
  *((_DWORD *)this + 666) = 0;
  *((_QWORD *)this + 334) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 676) = 0;
  *((_OWORD *)this + 168) = 0uLL;
  *((_DWORD *)this + 682) = -1;
  *((_QWORD *)this + 339) = 0LL;
  *((_QWORD *)this + 340) = 0LL;
  *((_QWORD *)this + 342) = 1LL;
  *((_DWORD *)this + 686) = 0;
  *((_QWORD *)this + 344) = 0LL;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  v11 = (_QWORD *)((char *)this + 80);
  *((_QWORD *)this + 11) = (char *)this + 80;
  v12 = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  v13 = (char *)this + 80;
  while ( 1 )
  {
    v14 = v10;
    if ( v13 != v12 )
      __fastfail(3u);
    *v10 = v12;
    ++v9;
    v10[1] = v11;
    *v11 = v10;
    *((_QWORD *)this + 11) = v10;
    v10 += 70;
    if ( v9 >= 3 )
      break;
    v13 = (char *)*v14;
    v11 = v14;
  }
  *((_DWORD *)this + 24) = a3;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0x100000040LL;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 213) = 0;
  *((_QWORD *)this + 40) = 0LL;
  memset((char *)this + 160, 0, 0x20uLL);
  memset((char *)this + 400, 0, 0x28uLL);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 212) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 536), NotificationEvent, 1u);
  KeInitializeDpc(
    (PRKDPC)((char *)this + 560),
    (PKDEFERRED_ROUTINE)BLTQUEUE::PresentDisplayOnlyProgressDpcCb,
    (char *)this + 536);
  KeSetImportanceDpc((PRKDPC)((char *)this + 560), HighImportance);
  memset((char *)this + 672, 0, 0xB0uLL);
  KeInitializeEvent((PRKEVENT)((char *)this + 328), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 352), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 376), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 8), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 104), 0);
  KeInitializeMutex((PRKMUTEX)((char *)this + 2568), 0);
  KeInitializeTimerEx((PKTIMER)((char *)this + 472), SynchronizationTimer);
  v15 = (char *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( v15 )
  {
    v6 = v15 + 8;
    *(_QWORD *)v15 = 8LL;
    `vector constructor iterator'(
      v15 + 8,
      64LL,
      8LL,
      (void (__fastcall *)(char *))_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE);
  }
  *((_QWORD *)this + 344) = v6;
  memset(v6, 0, 0x200uLL);
  return this;
}
