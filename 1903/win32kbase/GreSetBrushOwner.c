/*
 * XREFs of GreSetBrushOwner @ 0x1C0019E60
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C00521EC (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreSetBitmapOwner @ 0x1C0016160 (GreSetBitmapOwner.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021DF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     GreSetBitmapOwnerEx @ 0x1C002CE88 (GreSetBitmapOwnerEx.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005248C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00524B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C0053C18 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C005400C (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // esi
  _QWORD *ObjectAttr; // r13
  GdiHandleManager *v10; // rbx
  unsigned int v11; // r9d
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int v20; // eax
  BOOL v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v30[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h] BYREF
  int v32; // [rsp+68h] [rbp-50h]
  __int16 v33; // [rsp+C2h] [rbp+Ah]

  v33 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v30, a1);
  if ( v30[0] && (*(_DWORD *)(v30[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v30);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v30);
  v8 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v6, v5, v7);
  v31 = 0LL;
  v32 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v32 )
  {
    v10 = gpHandleManager;
    v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v31 & 0xFFFFFF);
    v12 = *((_QWORD *)v10 + 2);
    v13 = *(_DWORD *)(v12 + 2056);
    if ( v11 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
      goto LABEL_15;
    if ( v11 >= v13 )
      v14 = ((v11 - v13) >> 16) + 1;
    else
      v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
    if ( (_DWORD)v14 )
      v11 += ((1 - (_DWORD)v14) << 16) - v13;
    if ( v11 >= *(_DWORD *)(v15 + 20) )
LABEL_15:
      v16 = 0LL;
    else
      v16 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
    v17 = v31;
    if ( *(_BYTE *)(v31 + 14) != 16 || *(_WORD *)(v31 + 12) != v33 )
      goto LABEL_47;
    if ( *(_WORD *)(v16 + 12) )
    {
      if ( *(struct _KTHREAD **)(v16 + 16) != KeGetCurrentThread() )
        goto LABEL_47;
      v17 = v31;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v23 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
      if ( v23 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v24 = *(_QWORD **)(v16 + 48);
        if ( v24 != (_QWORD *)(v16 + 72) )
        {
          *(_QWORD *)(v16 + 72) = *v24;
          ObjectAttr = *(_QWORD **)(v16 + 48);
          *(_QWORD *)(v16 + 48) = v16 + 72;
          *(_QWORD *)(v31 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (*(_DWORD *)(v31 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_47;
        HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
      }
      v8 = 1;
      if ( !a2 )
      {
        v26 = *(_QWORD *)(v16 + 24);
        if ( v26 )
          GreSetBitmapOwnerEx(v26, 0LL);
      }
      goto LABEL_47;
    }
    if ( a2 == -2147483646 )
    {
      v19 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v20 = *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
      if ( v20 == v19 || v20 == -2147483630 || !v20 )
      {
        v21 = 0;
        v8 = 1;
        if ( v20 != v19 )
        {
          v8 = HmgIncProcessHandleCountEx(v19, v18, 0LL);
          v21 = v8 != 0;
        }
        if ( v8 )
        {
          if ( *(_QWORD *)(v17 + 16) )
            goto LABEL_33;
          if ( ObjectAttr )
          {
            *(_QWORD *)(v16 + 48) = ObjectAttr;
            *(_QWORD *)(v17 + 16) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v16 + 72);
            ObjectAttr = 0LL;
LABEL_33:
            HANDLELOCK::Pid((HANDLELOCK *)&v31, v19);
            v22 = *(_QWORD *)(v16 + 24);
            if ( v22 )
              GreSetBitmapOwner(v22, 2147483650LL);
            goto LABEL_47;
          }
          v8 = 0;
        }
        if ( v21 )
          HmgDecProcessHandleCount(v19);
      }
    }
LABEL_47:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v31);
  GreReleaseHmgrSemaphore(v28, v27, v29);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v8;
}
