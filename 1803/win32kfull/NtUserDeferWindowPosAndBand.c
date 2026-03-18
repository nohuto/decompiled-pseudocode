/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C00144C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0014654 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00173C0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     DestroySMWP @ 0x1C0026B90 (DestroySMWP.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0034C84 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01EB9C0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r14
  struct tagWND *v18; // rsi
  unsigned int v19; // ebx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagWND *v26; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v27; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF

  v29 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v14 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL);
    v16 = 0LL;
  }
  else
  {
    LOBYTE(v13) = 4;
    v15 = HMValidateHandle(a1, v13);
    v16 = 0LL;
    v17 = v15;
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 24) & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v15);
        UserSetLastError(1405LL);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v26) && (unsigned int)ValidateHWNDIA(a3, &v27) )
      {
        v18 = v26;
        if ( v26 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
            || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x20) != 0 )
          {
            v18 = v26;
          }
          else
          {
            v18 = v26;
            v19 = *(_DWORD *)(*((_QWORD *)v26 + 5) + 288LL);
            if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
              TransformSWPCoords(v18, &v29, &a5, &a6, &a7, v14);
          }
        }
        v20 = (__int64 *)_DeferWindowPosAndBand(v17, v18, v27, (unsigned int)v29, a5, a6, a7, v14, a9, a10 != 0);
        if ( v20 )
          v16 = *v20;
      }
      else if ( a10 )
      {
        DestroySMWP(v17);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v16;
}
