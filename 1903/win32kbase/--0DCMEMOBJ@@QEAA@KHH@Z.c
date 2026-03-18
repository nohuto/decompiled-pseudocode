/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C001F550 (INC_SHARE_REF_CNT.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C007ADB4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0081AAC (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgModifyHandleType @ 0x1C00835C0 (HmgModifyHandleType.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C013348C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, __int64 a2, int a3)
{
  int v4; // r15d
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _OWORD *v9; // rax
  PVOID *p_DeviceObject; // rcx
  __int64 v11; // r8
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int64 v18; // rbx
  unsigned __int16 *v19; // r14
  char v20; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdx
  unsigned int v22; // ebx
  GdiHandleManager *v23; // r14
  __int64 v24; // r8
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r9
  _DWORD *v28; // rdx
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // r8
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // r14
  unsigned int v36; // ebp
  GdiHandleManager *v37; // rbx
  unsigned int v38; // eax
  struct _ENTRY *v39; // rax
  struct _ENTRY *v40; // rbx
  char v41; // al
  struct OBJECT *EntryObject; // rax
  unsigned __int8 v43; // cl
  __int64 v44; // rax
  DCMEMOBJ *result; // rax
  struct _ENTRY *v46; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+38h] [rbp-50h]
  int v48; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int16 *v49; // [rsp+48h] [rbp-40h] BYREF
  int v50; // [rsp+50h] [rbp-38h]
  char v51; // [rsp+90h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 0LL;
  v4 = a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( (unsigned int)a2 > 2 )
    return this;
  LOBYTE(a2) = 1;
  v6 = (_QWORD *)HmgAlloc(2112LL, a2);
  *(_QWORD *)this = v6;
  v7 = v6;
  if ( !v6 )
    return this;
  if ( a3 )
    HmgModifyHandleType(*v6 | 0x210000LL);
  v8 = 3LL;
  v9 = v7 + 68;
  p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v11 = 3LL;
  do
  {
    v9 += 8;
    v12 = *(_OWORD *)p_DeviceObject;
    p_DeviceObject += 16;
    *(v9 - 8) = v12;
    *(v9 - 7) = *((_OWORD *)p_DeviceObject - 7);
    *(v9 - 6) = *((_OWORD *)p_DeviceObject - 6);
    *(v9 - 5) = *((_OWORD *)p_DeviceObject - 5);
    *(v9 - 4) = *((_OWORD *)p_DeviceObject - 4);
    *(v9 - 3) = *((_OWORD *)p_DeviceObject - 3);
    *(v9 - 2) = *((_OWORD *)p_DeviceObject - 2);
    *(v9 - 1) = *((_OWORD *)p_DeviceObject - 1);
    --v11;
  }
  while ( v11 );
  *v9 = *(_OWORD *)p_DeviceObject;
  v9[1] = *((_OWORD *)p_DeviceObject + 1);
  v13 = *((_OWORD *)p_DeviceObject + 2);
  v7[122] = v7 + 68;
  v14 = (__int128 *)&dclevelDefault;
  v9[2] = v13;
  v15 = v7 + 10;
  do
  {
    v15 += 8;
    v16 = *v14;
    v14 += 8;
    *(v15 - 8) = v16;
    *(v15 - 7) = *(v14 - 7);
    *(v15 - 6) = *(v14 - 6);
    *(v15 - 5) = *(v14 - 5);
    *(v15 - 4) = *(v14 - 4);
    *(v15 - 3) = *(v14 - 3);
    *(v15 - 2) = *(v14 - 2);
    *(v15 - 1) = *(v14 - 1);
    --v8;
  }
  while ( v8 );
  v17 = *v14;
  v49 = 0LL;
  v50 = 0;
  *v15 = v17;
  v15[1] = v14[1];
  v15[2] = v14[2];
  v15[3] = v14[3];
  v15[4] = v14[4];
  v18 = *(_QWORD *)(*(_QWORD *)this + 136LL);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v49,
    (unsigned __int16)*(_DWORD *)v18 | (*(_DWORD *)v18 >> 8) & 0xFF0000,
    0,
    0,
    0);
  if ( v50 )
  {
    v19 = v49;
    v20 = *((_BYTE *)v49 + 14);
    if ( v20 == 5
      && (RECALTLOCK(
            (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v18 | (unsigned __int64)((*(_DWORD *)v18 >> 8) & 0xFF0000)),
            (struct _BASEOBJECT *)v18),
          v20 = *((_BYTE *)v19 + 14),
          v20 == 5) )
    {
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v18 + 680));
    }
    else if ( v20 == 16 )
    {
      v21 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v18 + 136);
      if ( v21 )
      {
        if ( qword_1C0210558 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C0210558,
            v21,
            1);
      }
    }
    ++*(_DWORD *)(v18 + 8);
    v22 = *(_DWORD *)v19 & 0xFFFFFF;
    if ( v22 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v19,
                                    1)
             + 13) == HIWORD(v22) )
          v22 = (unsigned __int16)v22;
      }
      else
      {
        v22 = *v19;
      }
    }
    v23 = gpHandleManager;
    v24 = *((_QWORD *)gpHandleManager + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( v22 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      goto LABEL_29;
    v26 = ((v22 - v25) >> 16) + 1;
    if ( v22 < v25 )
      v26 = 0LL;
    v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
    if ( (_DWORD)v26 )
      v22 += ((1 - (_DWORD)v26) << 16) - v25;
    if ( v22 >= *(_DWORD *)(v27 + 20) )
LABEL_29:
      v28 = 0LL;
    else
      v28 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                       + 16LL * (unsigned __int8)v22
                       + 8);
    v29 = (unsigned __int16)*v28;
    v30 = v29 | (*v28 >> 8) & 0xFF0000;
    if ( v30 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v29,
                                    1)
             + 13) == HIWORD(v30) )
          v30 = (unsigned __int16)v30;
      }
      else
      {
        v30 = (unsigned __int16)v29;
      }
    }
    v31 = *((_QWORD *)v23 + 2);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    {
      v33 = ((v30 - v32) >> 16) + 1;
      if ( v30 < v32 )
        v33 = 0LL;
      v34 = *(_QWORD *)(v31 + 8 * v33 + 8);
      if ( (_DWORD)v33 )
        v30 += ((1 - (_DWORD)v33) << 16) - v32;
      *(_DWORD *)(*(_QWORD *)v34 + 24LL * v30 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v35 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  v36 = (unsigned __int16)*(_DWORD *)v35 | (*(_DWORD *)v35 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v51);
  v37 = gpHandleManager;
  v47 = 1;
  v38 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v36);
  v39 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v37 + 2), v38, 0);
  v40 = v39;
  v46 = v39;
  if ( v39 )
  {
    _m_prefetchw((char *)v39 + 8);
    v48 = *((_DWORD *)v39 + 2);
    v41 = *((_BYTE *)v39 + 15);
    if ( (v41 & 0x20) != 0 )
      goto LABEL_50;
    if ( (v41 & 0x40) == 0 )
    {
LABEL_52:
      v43 = *((_BYTE *)v40 + 14);
      if ( v43 == 5 )
      {
        RECALTLOCK(
          (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v35 | (unsigned __int64)((*(_DWORD *)v35 >> 8) & 0xFF0000)),
          (struct _BASEOBJECT *)v35);
        v43 = *((_BYTE *)v40 + 14);
      }
      TrackHmgrReferenceIncrement(v43, (struct OBJECT *)v35);
      ++*(_DWORD *)(v35 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v46);
      goto LABEL_55;
    }
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v40 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_50:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v46);
      if ( !v47 )
        goto LABEL_55;
    }
    v40 = v46;
    goto LABEL_52;
  }
  v47 = 0;
  KeLeaveCriticalRegion();
LABEL_55:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v46);
  INC_SHARE_REF_CNT(*(struct _BASEOBJECT **)(*(_QWORD *)this + 96LL));
  *((_DWORD *)v7 + 8) = v4;
  *(_QWORD *)((char *)v7 + 36) = 0LL;
  *((_DWORD *)v7 + 11) = 0;
  v7[147] = 0LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
  v44 = *(_QWORD *)this + 176LL;
  v7[218] = 0LL;
  v7[155] = v44;
  v7[172] = v44;
  v7[189] = v44;
  v7[206] = v44;
  v7[216] = 0LL;
  *((_DWORD *)v7 + 434) = 0;
  *(_DWORD *)(*(_QWORD *)this + 2076LL) = -1;
  *(_WORD *)(*(_QWORD *)this + 2072LL) = -1;
  result = this;
  v7[140] = 0LL;
  v7[257] = 0LL;
  v7[258] = 0LL;
  return result;
}
