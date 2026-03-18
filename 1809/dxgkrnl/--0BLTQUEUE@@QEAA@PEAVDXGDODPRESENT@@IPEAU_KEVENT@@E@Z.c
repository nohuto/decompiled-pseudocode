/*
 * XREFs of ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C015503C
 * Callers:
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C0154F78 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C022EA78 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::BLTQUEUE(BLTQUEUE *this, struct DXGDODPRESENT *a2, int a3, struct _KEVENT *a4, char a5)
{
  char *v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  char *v11; // rcx
  char *v12; // r8
  _QWORD *v13; // r10

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 27) = a4;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 28) = 0LL;
  v7 = (char *)this + 864;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 66) = -1;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_BYTE *)this + 316) = a5;
  *((_BYTE *)this + 317) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 165) = -1;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 166) = 32;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 214) = 0;
  `vector constructor iterator'((char *)this + 864, 560LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  *((_QWORD *)v7 + 210) = 0LL;
  *((_DWORD *)v7 + 422) = 0;
  *((_QWORD *)this + 320) = 0LL;
  v8 = 0;
  *((_QWORD *)this + 328) = 0LL;
  v9 = v7 + 8;
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
  *((_DWORD *)this + 666) = 0;
  *((_QWORD *)this + 334) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_OWORD *)this + 168) = 0uLL;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  v10 = (_QWORD *)((char *)this + 80);
  *((_QWORD *)this + 11) = (char *)this + 80;
  v11 = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  v12 = (char *)this + 80;
  while ( 1 )
  {
    v13 = v9;
    if ( v12 != v11 )
      __fastfail(3u);
    *v9 = v11;
    ++v8;
    v9[1] = v10;
    *v10 = v9;
    *((_QWORD *)this + 11) = v9;
    v9 += 70;
    if ( v8 >= 3 )
      break;
    v12 = (char *)*v13;
    v10 = v13;
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
  return this;
}
