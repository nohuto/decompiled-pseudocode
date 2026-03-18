/*
 * XREFs of GreSetBrushOwner @ 0x1C001B890
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0050768 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x1C000F318 (HmgAllocateObjectAttr.c)
 *     GreSetBitmapOwnerEx @ 0x1C0015FC0 (GreSetBitmapOwnerEx.c)
 *     GreSetBitmapOwner @ 0x1C00160B0 (GreSetBitmapOwner.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021E60 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0050B18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0050B44 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0090E70 (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  _QWORD *ObjectAttr; // r13
  GdiHandleManager *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  BOOL v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v25; // [rsp+60h] [rbp-58h] BYREF
  int v26; // [rsp+68h] [rbp-50h]
  __int16 v27; // [rsp+C2h] [rbp+Ah]

  v27 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v24, a1);
  if ( v24[0] && (*(_DWORD *)(v24[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v24);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v24);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore();
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v26 )
  {
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v25 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      goto LABEL_15;
    if ( v8 >= v10 )
      v11 = ((v8 - v10) >> 16) + 1;
    else
      v11 = 0LL;
    v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
    if ( (_DWORD)v11 )
      v8 += ((1 - (_DWORD)v11) << 16) - v10;
    if ( v8 >= *(_DWORD *)(v12 + 20) )
LABEL_15:
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
    v14 = v25;
    if ( *(_BYTE *)(v25 + 14) != 16 || *(_WORD *)(v25 + 12) != v27 )
      goto LABEL_47;
    if ( *(_WORD *)(v13 + 12) )
    {
      if ( *(struct _KTHREAD **)(v13 + 16) != KeGetCurrentThread() )
        goto LABEL_47;
      v14 = v25;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v20 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v21 = *(_QWORD **)(v13 + 48);
        if ( v21 != (_QWORD *)(v13 + 72) )
        {
          *(_QWORD *)(v13 + 72) = *v21;
          ObjectAttr = *(_QWORD **)(v13 + 48);
          *(_QWORD *)(v13 + 48) = v13 + 72;
          *(_QWORD *)(v25 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v25, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (*(_DWORD *)(v25 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_47;
        HANDLELOCK::Pid((HANDLELOCK *)&v25, a2);
      }
      v5 = 1;
      if ( !a2 )
      {
        v23 = *(_QWORD *)(v13 + 24);
        if ( v23 )
          GreSetBitmapOwnerEx(v23, 0LL);
      }
      goto LABEL_47;
    }
    if ( a2 == -2147483646 )
    {
      v16 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v17 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v17 == (_DWORD)v16 || v17 == -2147483630 || !v17 )
      {
        v18 = 0;
        v5 = 1;
        if ( v17 != (_DWORD)v16 )
        {
          v5 = HmgIncProcessHandleCountEx((unsigned int)v16, v15, 0LL);
          v18 = v5 != 0;
        }
        if ( v5 )
        {
          if ( *(_QWORD *)(v14 + 16) )
            goto LABEL_33;
          if ( ObjectAttr )
          {
            *(_QWORD *)(v13 + 48) = ObjectAttr;
            *(_QWORD *)(v14 + 16) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v13 + 72);
            ObjectAttr = 0LL;
LABEL_33:
            HANDLELOCK::Pid((HANDLELOCK *)&v25, v16);
            v19 = *(_QWORD *)(v13 + 24);
            if ( v19 )
              GreSetBitmapOwner(v19, 2147483650LL);
            goto LABEL_47;
          }
          v5 = 0;
        }
        if ( v18 )
          HmgDecProcessHandleCount((unsigned int)v16);
      }
    }
LABEL_47:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v25);
  GreReleaseHmgrSemaphore();
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
