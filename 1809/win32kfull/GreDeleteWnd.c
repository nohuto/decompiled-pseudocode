/*
 * XREFs of GreDeleteWnd @ 0x1C026B980
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C011B3C8 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C0260D10 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C026B8A0 (EngDeleteWnd.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0268F14 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bDelete@EWNDOBJ@@QEAAHXZ @ 0x1C026AC30 (-bDelete@EWNDOBJ@@QEAAHXZ.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C026AC8C (-bValid@EWNDOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  EWNDOBJ *v5; // rax
  _QWORD *v6; // rcx
  TRACKOBJ *v7; // rax
  _QWORD *v8; // rcx
  EWNDOBJ *v9; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[88]; // [rsp+40h] [rbp-58h] BYREF
  HDEV v12; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+18h] BYREF

  result = EWNDOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(v3 + 168);
    v12 = *(HDEV *)(*(_QWORD *)(v4 + 32) + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct PDEVOBJ *)&v12);
    v14 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v13 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v13);
    (*(void (__fastcall **)(EWNDOBJ *, __int64))(v4 + 40))(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    v5 = *(EWNDOBJ **)(v4 + 24);
    if ( v5 == this )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    }
    else
    {
      while ( v5 )
      {
        v6 = (_QWORD *)((char *)v5 + 160);
        v5 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( v5 == this )
        {
          *v6 = *((_QWORD *)this + 20);
          break;
        }
      }
    }
    EWNDOBJ::bDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v7 = gpto;
      if ( (TRACKOBJ *)v4 == gpto )
      {
        gpto = *(TRACKOBJ **)(v4 + 8);
      }
      else
      {
        while ( v7 )
        {
          v8 = (_QWORD *)((char *)v7 + 8);
          v7 = (TRACKOBJ *)*((_QWORD *)v7 + 1);
          if ( v7 == (TRACKOBJ *)v4 )
          {
            *v8 = *(_QWORD *)(v4 + 8);
            break;
          }
        }
      }
      v9 = *(EWNDOBJ **)(v4 + 16);
      if ( v9 )
      {
        EWNDOBJ::bDelete(v9);
        *(_DWORD *)(*(_QWORD *)(v4 + 16) + 152LL) = 0;
        Win32FreePool(*(_QWORD *)(v4 + 16));
      }
      *(_DWORD *)v4 = 0;
      Win32FreePool(v4);
    }
    vSpWndobjChange(v12, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return PDEVOBJ::vUnreferencePdev(&v12, 0LL);
  }
  return result;
}
