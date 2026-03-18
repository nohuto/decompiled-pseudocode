/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01B052C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C000F7EC (PhkFirstGlobalValid.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1)
{
  LARGE_INTEGER v1; // r15
  LARGE_INTEGER v2; // r12
  InputTransform *v3; // rdi
  __int64 GlobalValid; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r14d
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v24; // r8
  unsigned __int16 v25; // r10
  __int16 v26; // r8
  int v27; // edx
  unsigned int v28; // esi
  unsigned int v29; // r14d
  __int64 v30; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  _QWORD v42[29]; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+188h] [rbp+88h] BYREF
  DWORD v44; // [rsp+190h] [rbp+90h] BYREF

  v1.QuadPart = 0LL;
  v43 = 0;
  v2.QuadPart = 0LL;
  v3 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  while ( 1 )
  {
    HIDWORD(v40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v42[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v42;
    v42[1] = GlobalValid;
    if ( GlobalValid )
      _InterlockedIncrement((volatile signed __int32 *)(GlobalValid + 8));
    v9 = xxxCallHook2((struct tagHOOK *)GlobalValid, 1u, 0LL, (unsigned int *)&v39, &v43, 0);
    if ( v9 == -1 )
    {
      v9 = -1;
LABEL_47:
      ThreadUnlock1(v7, v6, v8);
      return (unsigned int)v9;
    }
    memset(&v42[3], 0, 0xA0uLL);
    v7 = (unsigned int)v39;
    v6 = 128LL;
    v10 = *(_OWORD *)&v42[5];
    *(_OWORD *)a1 = *(_OWORD *)&v42[3];
    v11 = *(_OWORD *)&v42[7];
    *(_OWORD *)(a1 + 16) = v10;
    v12 = *(_OWORD *)&v42[9];
    *(_OWORD *)(a1 + 32) = v11;
    v13 = *(_OWORD *)&v42[11];
    *(_OWORD *)(a1 + 48) = v12;
    v14 = *(_OWORD *)&v42[13];
    *(_OWORD *)(a1 + 64) = v13;
    v15 = *(_OWORD *)&v42[15];
    *(_OWORD *)(a1 + 80) = v14;
    v16 = *(_OWORD *)&v42[17];
    *(_OWORD *)(a1 + 96) = v15;
    v17 = *(_OWORD *)&v42[19];
    *(_OWORD *)(a1 + 112) = v16;
    v18 = *(_OWORD *)&v42[21];
    *(_OWORD *)(a1 + 128) = v17;
    *(_OWORD *)(a1 + 144) = v18;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v9 > 0 )
    {
      v19 = *(_DWORD *)(gptiCurrent + 480LL);
      if ( (v19 & 0x200000) == 0 )
        goto LABEL_47;
      *(_DWORD *)(gptiCurrent + 480LL) = v19 & 0xFFDFFFFF;
      v7 = (unsigned int)v39;
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
      break;
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v24 = 0;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v24 = 0x8000, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        v24 |= 0x2000u;
      v25 = v24;
      if ( (v40 & 0x8000) != 0 )
        v24 |= 0x100u;
      if ( (*(_BYTE *)(((unsigned __int64)BYTE4(v39) >> 2) + *(_QWORD *)(gptiCurrent + 424LL) + 228) & (unsigned __int8)(1 << (2 * (BYTE4(v39) & 3)))) != 0 )
      {
        v26 = v25 | 0x100;
        if ( (v40 & 0x8000) == 0 )
          v26 = v25;
        v24 = v26 | 0x4000;
      }
      v2.QuadPart = ((v24 | (unsigned __int8)v40) << 16) | 1;
      if ( WORD2(v39) != 231 || (_BYTE)v40 )
      {
        v27 = 255;
        if ( (!v43 || (*gpsi & 2) != 0) && (v39 & 2) != 0 )
          v27 = 0xFFFF;
        v1.QuadPart = HIDWORD(v39) & (unsigned int)v27;
      }
      else
      {
        *(_WORD *)(gptiCurrent + 866LL) = HIWORD(v39);
      }
      goto LABEL_39;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !HIDWORD(v39)
        || (LOBYTE(v6) = 1, (v3 = (InputTransform *)HMValidateHandleNoSecure(SHIDWORD(v39), v6)) == 0LL) )
      {
        v3 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
      }
      goto LABEL_39;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v7, 128LL, v8);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2u, 0LL, 0LL, 1);
    ThreadUnlock1(v21, v20, v22);
  }
  v28 = v40;
  v29 = HIDWORD(v39);
  v30 = WORD2(v39) | ((unsigned __int16)v40 << 16);
  v2.QuadPart = (int)v30;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v30, 128LL);
  if ( __PAIR64__(v28, v29) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
    zzzInternalSetCursorPos(v29, v28, 1, 0);
LABEL_39:
  SetHardwareInputSource(&v44);
  if ( v3 )
  {
    v32 = *(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL);
  }
  else
  {
    v33 = *(_QWORD *)(gptiCurrent + 424LL);
    v34 = *(_QWORD *)(v33 + 120);
    if ( v34 )
      v35 = *(_QWORD *)(v34 + 16);
    else
      v35 = *(_QWORD *)(v33 + 96);
    v32 = *(_DWORD *)(*(_QWORD *)(v35 + 416) + 280LL);
  }
  StoreQMessage((LARGE_INTEGER *)a1, v3, v39, v1, v2, 0, 0LL, 0, 0LL, 0, &v44, v32, 0LL, 0LL);
  ThreadUnlock1(v37, v36, v38);
  return 0LL;
}
