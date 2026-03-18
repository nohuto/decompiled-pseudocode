/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C002DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002D954 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002DD40 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00C9440 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C00CF5F0 (DestroySMWP.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02299E4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
        unsigned int a9,
        int a10)
{
  int v12; // r15d
  __int64 v14; // rdx
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  struct tagWND *v19; // rsi
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 *v22; // rax
  __int64 v23; // rcx
  struct tagWND *v25; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v26; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+B8h] [rbp+48h] BYREF

  v28 = a4;
  v12 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v15 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL);
    v17 = 0LL;
  }
  else
  {
    LOBYTE(v14) = 4;
    v16 = HMValidateHandle(a1, v14);
    v17 = 0LL;
    v18 = v16;
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 24) & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v16);
        UserSetLastError(1405LL);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v25) && (unsigned int)ValidateHWNDIA(a3, &v26) )
      {
        v19 = v25;
        if ( v25 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
            || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x20) != 0 )
          {
            v19 = v25;
          }
          else
          {
            v19 = v25;
            v20 = *(_DWORD *)(*((_QWORD *)v25 + 5) + 288LL);
            if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
              goto LABEL_28;
            if ( (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0xF) != 2
              || (v21 = 1, (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0x20000000) == 0) )
            {
              v21 = 0;
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
              || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
            {
              v12 = 0;
            }
            if ( v21 != v12 )
LABEL_28:
              TransformSWPCoords(v19, &v28, &a5, &a6, &a7, v15);
          }
        }
        v22 = (__int64 *)_DeferWindowPosAndBand(v18, (__int64)v19, v26, v28, a5, a6, a7, v15, a9, a10 != 0);
        if ( v22 )
          v17 = *v22;
      }
      else if ( a10 )
      {
        DestroySMWP(v18);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v23);
  return v17;
}
