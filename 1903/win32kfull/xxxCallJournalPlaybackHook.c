/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01E8124
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00D0ADC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1)
{
  LARGE_INTEGER v1; // r14
  LARGE_INTEGER v2; // r12
  InputTransform *v4; // rdi
  __int64 GlobalValid; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r15d
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // ecx
  unsigned int v27; // esi
  unsigned int v28; // r15d
  __int64 v29; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  _OWORD v41[14]; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+198h] [rbp+98h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp+A0h] BYREF

  v1.QuadPart = 0LL;
  v42 = 0;
  v2.QuadPart = 0LL;
  v43 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    HIDWORD(v36) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v38 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v38;
    v39 = GlobalValid;
    if ( GlobalValid )
      HMLockObject(GlobalValid);
    v9 = xxxCallHook2((struct tagHOOK *)GlobalValid, 1u, 0LL, (int *)&v35, &v42, 0);
    if ( v9 == -1 )
    {
LABEL_41:
      ThreadUnlock1(v7, v6, v8);
      return 0xFFFFFFFFLL;
    }
    memset(v41, 0, 0xA8uLL);
    v6 = 128LL;
    v10 = 0LL;
    v11 = v41[1];
    *(_OWORD *)a1 = v41[0];
    v12 = v41[2];
    *(_OWORD *)(a1 + 16) = v11;
    v13 = v41[3];
    *(_OWORD *)(a1 + 32) = v12;
    v14 = v41[4];
    *(_OWORD *)(a1 + 48) = v13;
    v15 = v41[5];
    *(_OWORD *)(a1 + 64) = v14;
    v16 = v41[6];
    *(_OWORD *)(a1 + 80) = v15;
    v17 = v41[7];
    *(_OWORD *)(a1 + 96) = v16;
    v18 = v41[8];
    *(_OWORD *)(a1 + 112) = v17;
    v19 = v41[9];
    v20 = *(_QWORD *)&v41[10];
    *(_OWORD *)(a1 + 128) = v18;
    *(_OWORD *)(a1 + 144) = v19;
    *(_QWORD *)(a1 + 160) = v20;
    v7 = (unsigned int)v35;
    *(_DWORD *)(a1 + 24) = v35;
    if ( v9 > 0 )
    {
      v21 = *(_DWORD *)(gptiCurrent + 480LL);
      if ( (v21 & 0x200000) == 0 )
      {
        ThreadUnlock1(v7, 128LL, v8);
        return (unsigned int)v9;
      }
      *(_DWORD *)(gptiCurrent + 480LL) = v21 & 0xFFDFFFFF;
      v7 = (unsigned int)v35;
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
      break;
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v6 = 0LL;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v6 = 0x8000LL, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        LODWORD(v6) = v6 | 0x2000;
      v8 = (unsigned int)v6;
      LODWORD(v8) = v6 | 0x100;
      if ( (v36 & 0x8000) == 0 )
        v8 = (unsigned int)v6;
      v26 = v8 | 0x4000;
      LOBYTE(v6) = (1 << (2 * (BYTE4(v35) & 3))) & *(_BYTE *)(((unsigned __int64)BYTE4(v35) >> 2)
                                                            + *(_QWORD *)(gptiCurrent + 424LL)
                                                            + 236);
      if ( !(_BYTE)v6 )
        v26 = v8;
      v2.QuadPart = (((unsigned __int8)v36 | v26) << 16) | 1;
      if ( WORD2(v35) != 231 || (_BYTE)v36 )
      {
        v6 = 255LL;
        if ( (!v42 || (*gpsi & 2) != 0) && (v35 & 2) != 0 )
          v6 = 0xFFFFLL;
        v1.QuadPart = (unsigned int)v6 & HIDWORD(v35);
      }
      else
      {
        *(_WORD *)(gptiCurrent + 874LL) = HIWORD(v35);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !HIDWORD(v35)
        || (LOBYTE(v6) = 1, (v4 = (InputTransform *)HMValidateHandleNoSecure(SHIDWORD(v35), v6, v8, 0LL)) == 0LL) )
      {
        v4 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
      }
      goto LABEL_37;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
      goto LABEL_41;
    xxxCallHook(2, 0LL, 0LL, 1);
    ThreadUnlock1(v23, v22, v24);
  }
  v27 = v36;
  v28 = HIDWORD(v35);
  v29 = WORD2(v35) | ((unsigned __int16)v36 << 16);
  v2.QuadPart = (int)v29;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v29, 128LL, v8, 0LL);
  if ( __PAIR64__(v27, v28) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
    zzzInternalSetCursorPos(v28, v27, 1, 0);
LABEL_37:
  SetHardwareInputSource(&v43, v6, v8, v10);
  if ( v4 )
    v31 = *(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL);
  else
    v31 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(gptiCurrent + 424LL)) + 416) + 280LL);
  StoreQMessage((LARGE_INTEGER *)a1, v4, v35, v1, v2, 0, 0LL, 0, 0LL, 0, (DWORD *)&v43, v31, 0LL, 0LL);
  ThreadUnlock1(v33, v32, v34);
  return 0LL;
}
