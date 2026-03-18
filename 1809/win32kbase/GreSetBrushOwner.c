/*
 * XREFs of GreSetBrushOwner @ 0x1C0042FF0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0043320 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0043354 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00433E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C0043FFC (GreSetBitmapOwnerEx.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  unsigned int v8; // r14d
  _QWORD *ObjectAttr; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  GdiHandleManager *v13; // rbx
  unsigned int v14; // r9d
  __int64 v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  BOOL v28; // r12d
  __int64 v29; // [rsp+30h] [rbp-A8h] BYREF
  int v30; // [rsp+38h] [rbp-A0h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  unsigned __int64 v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  __int64 v34; // [rsp+60h] [rbp-78h]
  _QWORD v35[14]; // [rsp+68h] [rbp-70h] BYREF
  __int16 v36; // [rsp+E2h] [rbp+Ah]

  v36 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v35, a1);
  if ( v35[0] && (*(_DWORD *)(v35[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v35);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v35);
  v8 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v6, v5, v7);
  v29 = 0LL;
  v30 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v30 )
  {
    v13 = gpHandleManager;
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v29 & 0xFFFFFF);
    v15 = *((_QWORD *)v13 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      v19 = 0LL;
      v31 = 0LL;
    }
    else
    {
      if ( v14 >= v16 )
        v17 = ((v14 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      v33 = v18;
      if ( v17 )
        v14 += ((1 - v17) << 16) - v16;
      if ( v14 >= *(_DWORD *)(v18 + 20) )
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8LL * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
      v31 = v19;
    }
    v20 = v29;
    if ( *(_BYTE *)(v29 + 14) != 16 || *(_WORD *)(v29 + 12) != v36 )
      goto LABEL_26;
    if ( *(_WORD *)(v19 + 12) )
    {
      if ( *(struct _KTHREAD **)(v19 + 16) != KeGetCurrentThread() )
        goto LABEL_26;
      v20 = v29;
    }
    if ( a2 != -2147483630 && a2 )
    {
      if ( a2 != -2147483646 )
        goto LABEL_26;
      v26 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v32 = v26;
      v27 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
      if ( v27 != (_DWORD)v26 && v27 != -2147483630 && v27 )
        goto LABEL_26;
      v28 = 0;
      v8 = 1;
      if ( v27 != (_DWORD)v26 )
      {
        v8 = HmgIncProcessHandleCount(v26);
        v28 = v8 != 0;
        v26 = v32;
      }
      if ( !v8 )
        goto LABEL_52;
      if ( !*(_QWORD *)(v20 + 16) )
      {
        if ( ObjectAttr )
        {
          *(_QWORD *)(v19 + 48) = ObjectAttr;
          *(_QWORD *)(v20 + 16) = ObjectAttr;
          *ObjectAttr = *(_QWORD *)(v19 + 72);
          ObjectAttr = 0LL;
        }
        else
        {
          v8 = 0;
        }
      }
      if ( !v8 )
      {
LABEL_52:
        if ( v28 )
          HmgDecProcessHandleCount(v26);
        goto LABEL_26;
      }
      HANDLELOCK::Pid((HANDLELOCK *)&v29, v26);
      v24 = *(_QWORD *)(v19 + 24);
      if ( !v24 )
        goto LABEL_26;
      v25 = 2147483650LL;
    }
    else
    {
      v21 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
      if ( v21 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v22 = *(_QWORD **)(v19 + 48);
        if ( v22 != (_QWORD *)(v19 + 72) )
        {
          v34 = *(_QWORD *)(v19 + 48);
          *(_QWORD *)(v19 + 72) = *v22;
          ObjectAttr = *(_QWORD **)(v19 + 48);
          *(_QWORD *)(v19 + 48) = v19 + 72;
          *(_QWORD *)(v29 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v29, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v8 = 1;
      }
      else
      {
        if ( (*(_DWORD *)(v29 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v29, a2);
          v8 = 1;
        }
        if ( !v8 )
          goto LABEL_26;
      }
      if ( a2 || (v24 = *(_QWORD *)(v19 + 24)) == 0 )
      {
LABEL_26:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
        if ( v30 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
        goto LABEL_28;
      }
      v25 = 0LL;
    }
    GreSetBitmapOwnerEx(v24, v25);
    goto LABEL_26;
  }
LABEL_28:
  GreReleaseHmgrSemaphore(v11, v10, v12);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v8;
}
