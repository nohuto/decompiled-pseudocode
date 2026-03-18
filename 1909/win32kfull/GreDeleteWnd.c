/*
 * XREFs of GreDeleteWnd @ 0x1C0283FC0
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C00F703C (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C0279D00 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C0283EE0 (EngDeleteWnd.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0281A0C (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0283270 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vDelete@EWNDOBJ@@QEAAXXZ @ 0x1C028329C (-vDelete@EWNDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  HDEV v6; // rax
  EWNDOBJ *v7; // rax
  _QWORD *v8; // rcx
  TRACKOBJ *v9; // rax
  _QWORD *v10; // rcx
  EWNDOBJ *v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  HDEV v13; // [rsp+30h] [rbp-40h]
  int v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int16 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  HDEV v21; // [rsp+90h] [rbp+20h] BYREF
  __int64 v22; // [rsp+98h] [rbp+28h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF

  result = EWNDOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(v3 + 168);
    v16 = 0;
    v17 = 0;
    v20 = 0LL;
    v5 = *(_QWORD *)(v4 + 32);
    v19 = 0LL;
    v15 = 0LL;
    v18 = 256;
    v6 = *(HDEV *)(v5 + 48);
    v21 = v6;
    v12 = 0LL;
    v14 = 1;
    if ( ((_DWORD)v6[10] & 1) != 0 )
    {
      *(_QWORD *)&v12 = *((_QWORD *)v6 + 6);
      v13 = v6;
      GreAcquireSemaphore(v12);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v12, 11LL);
    }
    v23 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v22 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v22);
    (*(void (__fastcall **)(EWNDOBJ *, __int64))(v4 + 40))(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    v7 = *(EWNDOBJ **)(v4 + 24);
    if ( v7 == this )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    }
    else
    {
      while ( v7 )
      {
        v8 = (_QWORD *)((char *)v7 + 160);
        v7 = (EWNDOBJ *)*((_QWORD *)v7 + 20);
        if ( v7 == this )
        {
          *v8 = *((_QWORD *)this + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v9 = gpto;
      if ( (TRACKOBJ *)v4 == gpto )
      {
        gpto = *(TRACKOBJ **)(v4 + 8);
      }
      else
      {
        while ( v9 )
        {
          v10 = (_QWORD *)((char *)v9 + 8);
          v9 = (TRACKOBJ *)*((_QWORD *)v9 + 1);
          if ( v9 == (TRACKOBJ *)v4 )
          {
            *v10 = *(_QWORD *)(v4 + 8);
            break;
          }
        }
      }
      v11 = *(EWNDOBJ **)(v4 + 16);
      if ( v11 )
      {
        EWNDOBJ::vDelete(v11);
        *(_DWORD *)(*(_QWORD *)(v4 + 16) + 152LL) = 0;
        Win32FreePool(*(_QWORD *)(v4 + 16));
      }
      *(_DWORD *)v4 = 0;
      Win32FreePool(v4);
    }
    vSpWndobjChange(v21, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v12);
    if ( v15 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v15);
    return PDEVOBJ::vUnreferencePdev(&v21, 0LL);
  }
  return result;
}
