/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02756A8
 * Callers:
 *     SimBitBlt @ 0x1C0275800 (SimBitBlt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270CC4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270D68 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0270DD4 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0270E9C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v3, v4, v5);
      _InterlockedOr(v19, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v6, v7, v8);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v3, v4, v5);
      _InterlockedOr(v19, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v9, v10, v11);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v1 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = *((_QWORD *)this + 1);
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v16);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v17 = *((_DWORD *)this + 18);
  if ( (v17 & 8) != 0 )
    *((_DWORD *)this + 18) = v17 & 0xFFFFFFF7;
  v18 = *((_QWORD *)this + 2);
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v18);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
