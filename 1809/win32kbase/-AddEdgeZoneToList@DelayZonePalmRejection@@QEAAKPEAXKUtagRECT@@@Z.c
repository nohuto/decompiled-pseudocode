/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C014F5BC
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C0150910 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char *v8; // rax
  unsigned int v9; // edi
  char *v10; // r10
  int v11; // esi
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  CInpLockGuard *v16[8]; // [rsp+50h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (DelayZonePalmRejection *)((char *)this + 120),
    0LL);
  v8 = (char *)Win32AllocPoolZInit(0x68uLL, 0x7A647355u);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    *(struct tagRECT *)(v8 + 24) = *a4;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *(_OWORD *)(v8 + 40) = 0uLL;
    *((_QWORD *)v8 + 2) = KeGetCurrentThread();
    *((_DWORD *)v8 + 16) = 0;
    v11 = *((_DWORD *)this + 22);
    v12 = v11 + 1;
    if ( v11 == -1 )
      v12 = 1;
    *((_DWORD *)this + 22) = v12;
    v13 = (_QWORD *)((char *)this + 72);
    *((_DWORD *)v10 + 14) = v11;
    *((_DWORD *)v10 + 23) = a3;
    *((_DWORD *)v10 + 22) = 0;
    *((_QWORD *)v10 + 12) = a2;
    v10[60] = 1;
    v14 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v14 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)v10 = v14;
    *((_QWORD *)v10 + 1) = v13;
    *(_QWORD *)(v14 + 8) = v10;
    *v13 = v10;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0x1Bu,
      (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
      v11,
      ++*((_DWORD *)this + 23));
    v9 = v11;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v16);
  return v9;
}
