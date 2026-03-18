/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C00C4520
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00C4E50 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     DwmAsyncShowSprite @ 0x1C0124124 (DwmAsyncShowSprite.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct DwmState *v16; // rdx
  struct DwmState *v17; // rcx
  char *v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // r12
  struct _KTHREAD *v21; // rbp
  __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // rbp
  unsigned __int16 v27; // dx
  __int64 Prop; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  _QWORD *v33; // rcx
  unsigned int v34; // r14d
  __int64 v35; // rdx
  char v36; // al
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rsi
  int v41; // ecx
  int v42; // eax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  BOOL v47; // ebp
  void *v48; // rax
  __int64 v49; // [rsp+20h] [rbp-68h] BYREF
  char v50[8]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-58h] BYREF
  int v52; // [rsp+40h] [rbp-48h]

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v9 = 0;
  if ( g_pDwmState )
  {
    v10 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v8)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v13 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v13 + 104) && !*(_DWORD *)(v13 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v10 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v16 = g_pDwmState;
    if ( g_pDwmState )
    {
      v17 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v17 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v18 = (char *)v17 - 24;
          if ( !v17 )
            v18 = 0LL;
          if ( !v18 )
          {
LABEL_79:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_80;
          }
          v19 = *((_QWORD *)v18 + 5);
          if ( v19 )
            break;
LABEL_78:
          v16 = g_pDwmState;
          v17 = (struct DwmState *)*((_QWORD *)v18 + 3);
          if ( v17 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_79;
        }
        v20 = *(_QWORD *)v16;
        v21 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v14, v15) )
          PsGetThreadWin32Thread(v21);
        if ( (unsigned __int64)(unsigned __int16)v19 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_68;
        v22 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v19 * LODWORD(gSharedInfo[2]);
        v23 = v19 >> 16;
        v25 = (_QWORD *)HMPkheFromPhe(v22);
        if ( (_WORD)v23 != *(_WORD *)(v22 + 26)
          && (_WORD)v23 != 0xFFFF
          && ((_WORD)v23 || !PsGetCurrentProcessWow64Process(v24)) )
        {
          goto LABEL_68;
        }
        if ( (*(_BYTE *)(v22 + 25) & 1) != 0 )
          goto LABEL_68;
        if ( *(_BYTE *)(v22 + 24) != 1 )
          goto LABEL_68;
        v26 = (_QWORD *)*v25;
        if ( !*v25 )
          goto LABEL_68;
        if ( (*(_DWORD *)(v26[5] + 232LL) & 0x20) != 0 )
        {
          v27 = *(_WORD *)(gpsi + 900LL);
          if ( **(_WORD **)(v26[17] + 8LL) == v27 )
            goto LABEL_32;
          Prop = RealGetProp(v26[18], v27, 1LL);
          if ( Prop )
          {
            if ( Prop == -1 )
              goto LABEL_32;
          }
          else
          {
            Prop = RealGetProp(v26[18], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v29) = 1, (v30 = HMValidateHandleNoSecure(Prop, v29)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v30) )
          {
LABEL_32:
            if ( (RealGetProp(v26[18], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v31 = v26[5];
LABEL_34:
              SetRectRgnIndirect(*(_QWORD *)(v20 + 184), v31 + 88);
              v32 = 1;
LABEL_69:
              if ( v32 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v51, *((HRGN *)g_pDwmState + 23), 0);
                v46 = v51[0];
                if ( v51[0] )
                  v32 = *(_DWORD *)(v51[0] + 84LL) != 1;
                if ( !v52 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v51);
                  v46 = v51[0];
                }
                if ( v46 )
                  _InterlockedDecrement((volatile signed __int32 *)(v46 + 12));
              }
              v47 = v32 != 0;
              if ( v47 != (*((_DWORD *)v18 + 41) & 1) )
              {
                *((_DWORD *)v18 + 41) = v47 | *((_DWORD *)v18 + 41) & 0xFFFFFFFE;
                v48 = (void *)UserReferenceDwmApiPort();
                DwmAsyncShowSprite(v48);
              }
              goto LABEL_78;
            }
          }
        }
        v31 = v26[5];
        if ( (*(_BYTE *)(v31 + 26) & 0x20) == 0 )
        {
          v33 = v26;
          v34 = (4 * (*(_BYTE *)(v31 + 31) & 4)) | 0x4401;
          do
          {
            v35 = v33[5];
            v36 = *(_BYTE *)(v35 + 31);
            if ( (v36 & 0x10) == 0 || (v36 & 0x20) != 0 && v33 != v26 )
            {
LABEL_67:
              SetOrCreateRectRgnIndirectPublic(v20 + 184, gZero);
              goto LABEL_68;
            }
            if ( (*(_WORD *)(v35 + 42) & 0x3FFF) == 0x29D )
              break;
            v33 = (_QWORD *)v33[13];
          }
          while ( v33 );
          v37 = v26;
          while ( 1 )
          {
            v38 = v37[5];
            if ( (*(_BYTE *)(v38 + 27) & 0x20) != 0 )
              break;
            v37 = (_QWORD *)v37[13];
            if ( !v37 )
              goto LABEL_52;
          }
          if ( (*(_WORD *)(v38 + 42) & 0x3FFF) != 0x29D || v37 == v26 )
          {
            v39 = (_QWORD *)RealGetProp(v37[18], (unsigned __int16)atomLayer, 1LL);
            if ( !v39 || !*v39 )
              goto LABEL_67;
          }
LABEL_52:
          UpdatesLockedForDwm();
          v40 = v26;
          while ( 1 )
          {
            v41 = *(_DWORD *)(v40[5] + 24LL);
            if ( (v41 & 0x80000) != 0 || (v41 & 0x20000000) != 0 )
              break;
            v40 = (_QWORD *)v40[13];
            if ( !v40 )
              goto LABEL_66;
          }
          if ( v40 == v26 || (LOBYTE(v42) = IsDesktopWindow((__int64)v40), !v42) )
          {
            if ( v40 )
            {
              v43 = (_QWORD *)RealGetProp(v40[18], (unsigned __int16)atomLayer, 1LL);
              if ( v43 )
              {
                if ( *v43 )
                {
                  v44 = v40[5];
                  if ( (*(_DWORD *)(v44 + 24) & 0x20000000) != 0 )
                  {
                    v45 = *(_DWORD *)(v44 + 232);
                    if ( (v45 & 0x20) != 0 && (v45 & 4) == 0 )
                      v34 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_66:
          v32 = CalcVisRgnWorker((struct tagWND *const)v26, (HRGN *)(v20 + 184), v34);
          goto LABEL_69;
        }
        if ( (*(_BYTE *)(v31 + 31) & 0x10) != 0 )
          goto LABEL_34;
LABEL_68:
        v32 = 0;
        goto LABEL_69;
      }
    }
LABEL_80:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v49 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v50, (struct PDEVOBJ *)&v49);
  if ( *(_DWORD *)(v2 + 148) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 152) + 8LL * v9++), v3);
    while ( v9 < *(_DWORD *)(v2 + 148) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 88), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v50);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
