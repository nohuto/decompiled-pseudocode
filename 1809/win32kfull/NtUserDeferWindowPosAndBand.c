/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C006DF00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DestroySMWP @ 0x1C0038DB0 (DestroySMWP.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006E0F0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0071C20 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C0211988 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
  _DWORD *v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r14
  __int64 v18; // rdx
  struct tagWND *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagWND *v30; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v31; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF

  v33 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v32);
  v14 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004LL);
    v16 = 0LL;
  }
  else
  {
    LOBYTE(v13) = 4;
    v15 = (_DWORD *)HMValidateHandle(a1, v13);
    v16 = 0LL;
    v17 = v15;
    if ( v15 )
    {
      if ( (v15[6] & 4) != 0 )
      {
        if ( a10 )
          DestroySMWP(v15);
        UserSetLastError(1405LL);
      }
      else if ( (unsigned int)ValidateHWNDND(a2, &v30) && (unsigned int)ValidateHWNDIA(a3, &v31) )
      {
        v19 = v30;
        if ( v30 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 480) + 224LL) & 1) != 0
            || (v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 480),
                (*(_BYTE *)(v22 + 224) & 0x20) != 0) )
          {
            v19 = v30;
          }
          else
          {
            v19 = v30;
            v23 = *(_DWORD *)(*((_QWORD *)v30 + 5) + 288LL);
            if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                     v22,
                                                                                     v21) >> 8)) & 0x1FF) != 0 )
              TransformSWPCoords(v19, &v33, &a5, &a6, &a7, v14);
          }
        }
        v24 = (__int64 *)_DeferWindowPosAndBand(v17, v19, v31, (unsigned int)v33, a5, a6, a7, v14, a9, a10 != 0);
        if ( v24 )
          v16 = *v24;
      }
      else if ( a10 )
      {
        DestroySMWP(v17);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v32);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v16;
}
