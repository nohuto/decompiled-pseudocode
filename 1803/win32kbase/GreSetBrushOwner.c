/*
 * XREFs of GreSetBrushOwner @ 0x1C00277C0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C005CA18 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002B2E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     GreSetBitmapOwnerEx @ 0x1C003DB54 (GreSetBitmapOwnerEx.c)
 *     HmgAllocateObjectAttr @ 0x1C004551C (HmgAllocateObjectAttr.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005CC28 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005CC6C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgFreeObjectAttr @ 0x1C00670CC (HmgFreeObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  _QWORD *ObjectAttr; // r13
  GdiHandleManager *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // edx
  unsigned __int64 v16; // rsi
  int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // ecx
  BOOL v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  _QWORD *v24; // rax
  unsigned int CurrentProcessId; // eax
  _QWORD v26[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+58h] [rbp-40h] BYREF
  int v28; // [rsp+60h] [rbp-38h]

  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, a1);
  if ( v26[0] && (*(_DWORD *)(v26[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore();
  v27 = 0LL;
  v28 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v28 )
  {
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
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
    v14 = v27;
    if ( *(_BYTE *)(v27 + 14) != 16 || *(_WORD *)(v27 + 12) != HIWORD(v3) )
      goto LABEL_48;
    if ( *(_WORD *)(v13 + 12) )
    {
      if ( *(struct _KTHREAD **)(v13 + 16) != KeGetCurrentThread() )
        goto LABEL_48;
      v14 = v27;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v23 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v23 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v24 = *(_QWORD **)(v13 + 48);
        if ( v24 != (_QWORD *)(v13 + 72) )
        {
          *(_QWORD *)(v13 + 72) = *v24;
          ObjectAttr = *(_QWORD **)(v13 + 48);
          *(_QWORD *)(v13 + 48) = v13 + 72;
          *(_QWORD *)(v27 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (*(_DWORD *)(v27 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_48;
        HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
      }
      v5 = 1;
      if ( !a2 )
      {
        v21 = *(_QWORD *)(v13 + 24);
        if ( v21 )
        {
          v22 = 0LL;
LABEL_47:
          GreSetBitmapOwnerEx(v21, v22);
        }
      }
    }
    else if ( a2 == -2147483646 )
    {
      v16 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v18 = v27;
      v19 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
      if ( v19 == (_DWORD)v16 || v19 == -2147483630 || !v19 )
      {
        v20 = 0;
        v5 = 1;
        if ( v19 != (_DWORD)v16 )
        {
          v5 = HmgIncProcessHandleCount(v16, v15, v17);
          v20 = v5 != 0;
          v18 = v27;
        }
        if ( v5 )
        {
          if ( *(_QWORD *)(v18 + 16) )
          {
LABEL_33:
            HANDLELOCK::Pid((HANDLELOCK *)&v27, v16);
            v21 = *(_QWORD *)(v13 + 24);
            if ( !v21 )
              goto LABEL_48;
            v22 = 2147483650LL;
            goto LABEL_47;
          }
          if ( ObjectAttr )
          {
            *(_QWORD *)(v13 + 48) = ObjectAttr;
            *(_QWORD *)(v18 + 16) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v13 + 72);
            ObjectAttr = 0LL;
            goto LABEL_33;
          }
          v5 = 0;
        }
        if ( v20 )
          HmgDecProcessHandleCount((unsigned int)v16);
      }
    }
LABEL_48:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    if ( v28 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  }
  GreReleaseHmgrSemaphore();
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
