/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01D3534
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1)
{
  LARGE_INTEGER v1; // r14
  LARGE_INTEGER v2; // r12
  InputTransform *v3; // rdi
  __int64 GlobalValid; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // esi
  unsigned int v28; // r15d
  __int64 v29; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  _QWORD v40[31]; // [rsp+88h] [rbp-78h] BYREF
  int v41; // [rsp+198h] [rbp+98h] BYREF
  DWORD v42; // [rsp+1A0h] [rbp+A0h] BYREF

  v1.QuadPart = 0LL;
  v41 = 0;
  v2.QuadPart = 0LL;
  v3 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  while ( 1 )
  {
    HIDWORD(v38) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v40[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v40;
    v40[1] = GlobalValid;
    if ( GlobalValid )
      _InterlockedIncrement((volatile signed __int32 *)(GlobalValid + 8));
    v8 = xxxCallHook2((struct tagHOOK *)GlobalValid, 1u, 0LL, (unsigned int *)&v37, &v41, 0);
    if ( v8 == -1 )
    {
LABEL_44:
      ThreadUnlock1(v7, v6);
      return 0xFFFFFFFFLL;
    }
    memset(&v40[3], 0, 0xA8uLL);
    v6 = 128LL;
    v9 = *(_OWORD *)&v40[5];
    *(_OWORD *)a1 = *(_OWORD *)&v40[3];
    v10 = *(_OWORD *)&v40[7];
    *(_OWORD *)(a1 + 16) = v9;
    v11 = *(_OWORD *)&v40[9];
    *(_OWORD *)(a1 + 32) = v10;
    v12 = *(_OWORD *)&v40[11];
    *(_OWORD *)(a1 + 48) = v11;
    v13 = *(_OWORD *)&v40[13];
    *(_OWORD *)(a1 + 64) = v12;
    v14 = *(_OWORD *)&v40[15];
    *(_OWORD *)(a1 + 80) = v13;
    v15 = *(_OWORD *)&v40[17];
    *(_OWORD *)(a1 + 96) = v14;
    v16 = *(_OWORD *)&v40[19];
    *(_OWORD *)(a1 + 112) = v15;
    v17 = *(_OWORD *)&v40[21];
    v18 = v40[23];
    *(_OWORD *)(a1 + 128) = v16;
    *(_OWORD *)(a1 + 144) = v17;
    *(_QWORD *)(a1 + 160) = v18;
    v7 = (unsigned int)v37;
    *(_DWORD *)(a1 + 24) = v37;
    if ( v8 > 0 )
    {
      v19 = *(_DWORD *)(gptiCurrent + 488LL);
      if ( (v19 & 0x200000) == 0 )
      {
        ThreadUnlock1(v7, 128LL);
        return (unsigned int)v8;
      }
      *(_DWORD *)(gptiCurrent + 488LL) = v19 & 0xFFDFFFFF;
      v7 = (unsigned int)v37;
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
      break;
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v23 = 0;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v23 = 0x8000, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        v23 |= 0x2000u;
      v24 = v23 | 0x100;
      if ( (v38 & 0x8000) == 0 )
        v24 = v23;
      v25 = v24 | 0x4000;
      if ( ((unsigned __int8)(1 << (2 * (BYTE4(v37) & 3))) & *(_BYTE *)(((unsigned __int64)BYTE4(v37) >> 2)
                                                                      + *(_QWORD *)(gptiCurrent + 432LL)
                                                                      + 228)) == 0 )
        v25 = v24;
      v2.QuadPart = (((unsigned __int8)v38 | v25) << 16) | 1;
      if ( WORD2(v37) != 231 || (_BYTE)v38 )
      {
        v26 = 255;
        if ( (!v41 || (*gpsi & 2) != 0) && (v37 & 2) != 0 )
          v26 = 0xFFFF;
        v1.QuadPart = (unsigned int)v26 & HIDWORD(v37);
      }
      else
      {
        *(_WORD *)(gptiCurrent + 874LL) = HIWORD(v37);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !HIDWORD(v37)
        || (LOBYTE(v6) = 1, (v3 = (InputTransform *)HMValidateHandleNoSecure(SHIDWORD(v37), v6)) == 0LL) )
      {
        v3 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      }
      goto LABEL_37;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
      goto LABEL_44;
    xxxCallHook(2u, 0LL, 0LL, 1);
    ThreadUnlock1(v21, v20);
  }
  v27 = v38;
  v28 = HIDWORD(v37);
  v29 = WORD2(v37) | ((unsigned __int16)v38 << 16);
  v2.QuadPart = (int)v29;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v29, 128LL);
  if ( __PAIR64__(v27, v28) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
    zzzInternalSetCursorPos(v28, v27, 1, 0);
LABEL_37:
  SetHardwareInputSource(&v42);
  if ( v3 )
  {
    v31 = *(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL);
  }
  else
  {
    v32 = *(_QWORD *)(gptiCurrent + 432LL);
    v33 = *(_QWORD *)(v32 + 120);
    if ( v33 )
      v34 = *(_QWORD *)(v33 + 16);
    else
      v34 = *(_QWORD *)(v32 + 96);
    v31 = *(_DWORD *)(*(_QWORD *)(v34 + 424) + 280LL);
  }
  StoreQMessage((LARGE_INTEGER *)a1, v3, v37, v1, v2, 0, 0LL, 0, 0LL, 0, &v42, v31, 0LL, 0LL);
  ThreadUnlock1(v36, v35);
  return 0LL;
}
