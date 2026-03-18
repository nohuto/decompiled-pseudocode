/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C0023250
 * Callers:
 *     <none>
 * Callees:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0023074 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0023460 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006AB10 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C0070CC0 (DestroySMWP.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02293C4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 v35; // rcx
  int *v37; // [rsp+20h] [rbp-50h]
  __int64 v38; // [rsp+28h] [rbp-48h]
  __int64 v39; // [rsp+30h] [rbp-40h]
  struct tagWND *v40; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v41; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v42[16]; // [rsp+60h] [rbp-10h] BYREF
  int v43; // [rsp+B8h] [rbp+48h] BYREF

  v43 = a4;
  v12 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v42);
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
      else if ( (unsigned int)ValidateHWNDND(a2, &v40) && (unsigned int)ValidateHWNDIA(a3, &v41) )
      {
        v19 = v40;
        if ( v40 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
            || (v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472),
                (*(_BYTE *)(v21 + 224) & 0x20) != 0) )
          {
            v19 = v40;
          }
          else
          {
            v19 = v40;
            v24 = *(_DWORD *)(*((_QWORD *)v40 + 5) + 288LL);
            if ( (((unsigned __int16)(v24 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                     v21,
                                                                                     v20,
                                                                                     v22,
                                                                                     v23) >> 8)) & 0x1FF) != 0 )
              goto LABEL_28;
            v28 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 288LL);
            if ( (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0xF) != 2 || (v29 = 1, (v28 & 0x20000000) == 0) )
              v29 = 0;
            if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v25, v26, v27) & 0xF) != 2
              || (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0x20000000) == 0 )
            {
              v12 = 0;
            }
            if ( v29 != v12 )
LABEL_28:
              TransformSWPCoords(v19, &v43, &a5, &a6, &a7, v15);
          }
        }
        LODWORD(v39) = a7;
        LODWORD(v38) = a6;
        LODWORD(v37) = a5;
        v34 = (__int64 *)_DeferWindowPosAndBand(
                           v18,
                           (__int64)v19,
                           v41,
                           (unsigned int)v43,
                           (__int64)v37,
                           v38,
                           v39,
                           v15,
                           a9,
                           a10 != 0);
        if ( v34 )
          v17 = *v34;
      }
      else if ( a10 )
      {
        DestroySMWP(v18);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v42);
  UserSessionSwitchLeaveCrit(v35);
  return v17;
}
