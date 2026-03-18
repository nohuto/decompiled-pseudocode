/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0034050
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C00FEDA8 (DwmAsyncShowSprite.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  struct DwmState *v12; // rdx
  struct DwmState *v13; // rcx
  char *v14; // r13
  unsigned __int64 v15; // rsi
  __int64 v16; // r12
  struct _KTHREAD *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 *v23; // r15
  __int64 v24; // rsi
  unsigned __int16 v25; // dx
  unsigned __int64 Prop; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // esi
  char v30; // cl
  __int64 v31; // rax
  int v32; // ebp
  __int64 v33; // rdx
  char v34; // cl
  __int64 StyleWindow; // rax
  __int64 v36; // rax
  BOOL v37; // ebp
  __int64 v38; // rcx
  void *v39; // rax
  _BYTE v40[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v41[2]; // [rsp+28h] [rbp-60h] BYREF
  int v42; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v7 = 0;
  if ( g_pDwmState )
  {
    v8 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(v6, v5)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v11 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v8 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v12 = g_pDwmState;
    if ( g_pDwmState )
    {
      v13 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v13 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v14 = (char *)v13 - 24;
          if ( !v13 )
            v14 = 0LL;
          if ( !v14 )
          {
LABEL_59:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_60;
          }
          v15 = *((_QWORD *)v14 + 5);
          if ( v15 )
            break;
LABEL_58:
          v12 = g_pDwmState;
          v13 = (struct DwmState *)*((_QWORD *)v14 + 3);
          if ( v13 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_59;
        }
        v16 = *(_QWORD *)v12;
        v17 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12) )
          PsGetThreadWin32Thread(v17);
        v20 = (unsigned __int16)v15;
        if ( (unsigned __int64)(unsigned __int16)v15 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_48;
        v21 = v15 >> 16;
        v22 = gSharedInfo[1] + (unsigned int)(v20 * LODWORD(gSharedInfo[2]));
        v18 = 3 * ((__int64)(unsigned int)(v20 * LODWORD(gSharedInfo[2])) >> 5);
        v23 = (__int64 *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v20 * LODWORD(gSharedInfo[2])) >> 5));
        if ( (_WORD)v21 != *(_WORD *)(v22 + 26)
          && (_WORD)v21 != 0xFFFF
          && ((_WORD)v21 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable, v18, v20, v19)) )
        {
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(v22 + 25) & 1) != 0 )
          goto LABEL_48;
        if ( *(_BYTE *)(v22 + 24) != 1 )
          goto LABEL_48;
        v24 = *v23;
        if ( !*v23 )
          goto LABEL_48;
        if ( (*(_DWORD *)(*(_QWORD *)(v24 + 40) + 232LL) & 0x20) != 0 )
        {
          v25 = *(_WORD *)(gpsi + 900LL);
          if ( **(_WORD **)(*(_QWORD *)(v24 + 112) + 8LL) == v25 )
            goto LABEL_32;
          Prop = RealGetProp(*(_QWORD *)(v24 + 120), v25, 1LL);
          if ( Prop )
          {
            if ( Prop == -1LL )
              goto LABEL_32;
          }
          else
          {
            Prop = RealGetProp(*(_QWORD *)(v24 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v27) = 1, (v28 = HMValidateHandleNoSecure(Prop, v27)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v28) )
          {
LABEL_32:
            if ( (RealGetProp(*(_QWORD *)(v24 + 120), (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v18 = *(_QWORD *)(v24 + 40);
LABEL_34:
              SetRectRgnIndirect(*(_QWORD *)(v16 + 184), v18 + 88);
              v29 = 1;
LABEL_49:
              if ( v29 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v41, *((HRGN *)g_pDwmState + 23), 0);
                v36 = v41[0];
                if ( v41[0] )
                  v29 = *(_DWORD *)(v41[0] + 84LL) != 1;
                if ( !v42 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v41);
                  v36 = v41[0];
                }
                if ( v36 )
                  _InterlockedDecrement((volatile signed __int32 *)(v36 + 12));
              }
              v37 = v29 != 0;
              if ( v37 != (*((_DWORD *)v14 + 41) & 1) )
              {
                v38 = v37 | *((_DWORD *)v14 + 41) & 0xFFFFFFFE;
                *((_DWORD *)v14 + 41) = v38;
                v39 = (void *)UserReferenceDwmApiPort(v38, v18, v20, v19);
                DwmAsyncShowSprite(v39);
              }
              goto LABEL_58;
            }
          }
        }
        v18 = *(_QWORD *)(v24 + 40);
        v30 = *(_BYTE *)(v18 + 31);
        if ( (*(_BYTE *)(v18 + 26) & 0x20) != 0 )
        {
          if ( (v30 & 0x10) != 0 )
            goto LABEL_34;
        }
        else
        {
          v31 = v24;
          v32 = (4 * (v30 & 4)) | 0x4401;
          while ( 1 )
          {
            v33 = *(_QWORD *)(v31 + 40);
            v34 = *(_BYTE *)(v33 + 31);
            if ( (v34 & 0x10) == 0 || (v34 & 0x20) != 0 && v31 != v24 )
              break;
            if ( (*(_WORD *)(v33 + 42) & 0x3FFF) != 0x29D )
            {
              v31 = *(_QWORD *)(v31 + 80);
              if ( v31 )
                continue;
            }
            StyleWindow = GetStyleWindow(v24, 2848);
            if ( !StyleWindow || GetRedirectionBitmap(StyleWindow) )
            {
              UpdatesLockedForDwm();
              v29 = CalcVisRgnWorker((struct tagWND *const)v24, (HRGN *)(v16 + 184), v32);
              goto LABEL_49;
            }
            break;
          }
          SetOrCreateRectRgnIndirectPublic(v16 + 184, gZero, v20, v19);
        }
LABEL_48:
        v29 = 0;
        goto LABEL_49;
      }
    }
LABEL_60:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v45 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v40, (struct PDEVOBJ *)&v45);
  if ( *(_DWORD *)(v2 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 144) + 8LL * v7++), v3);
    while ( v7 < *(_DWORD *)(v2 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 80), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v40);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
