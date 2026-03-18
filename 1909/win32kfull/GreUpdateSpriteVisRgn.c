/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0065BF0
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066520 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00676D0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C00FEA54 (DwmAsyncShowSprite.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r15d
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  struct DwmState *v14; // rdx
  struct DwmState *v15; // rcx
  char *v16; // r13
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  struct _KTHREAD *v19; // rbp
  __int64 v20; // rbp
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // r14
  _QWORD *v24; // rbp
  unsigned __int16 v25; // dx
  __int64 Prop; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // esi
  _QWORD *v31; // rcx
  unsigned int v32; // r14d
  __int64 v33; // rdx
  char v34; // al
  _QWORD *v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  int v39; // ecx
  int v40; // eax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  BOOL v45; // ebp
  void *v46; // rax
  __int64 v47; // [rsp+20h] [rbp-68h] BYREF
  char v48[8]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v49[2]; // [rsp+30h] [rbp-58h] BYREF
  int v50; // [rsp+40h] [rbp-48h]

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v8 = 0;
  if ( g_pDwmState )
  {
    v9 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(v6, v5, v7)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v12 = *ThreadWin32Thread) == 0
      || !*(_DWORD *)(v12 + 104) && !*(_DWORD *)(v12 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v9 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v14 = g_pDwmState;
    if ( g_pDwmState )
    {
      v15 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v15 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          v16 = (char *)v15 - 24;
          if ( !v15 )
            v16 = 0LL;
          if ( !v16 )
          {
LABEL_79:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_80;
          }
          v17 = *((_QWORD *)v16 + 5);
          if ( v17 )
            break;
LABEL_78:
          v14 = g_pDwmState;
          v15 = (struct DwmState *)*((_QWORD *)v16 + 3);
          if ( v15 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_79;
        }
        v18 = *(_QWORD *)v14;
        v19 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v13) )
          PsGetThreadWin32Thread(v19);
        if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_68;
        v20 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]);
        v21 = v17 >> 16;
        v23 = (_QWORD *)HMPkheFromPhe(v20);
        if ( (_WORD)v21 != *(_WORD *)(v20 + 26)
          && (_WORD)v21 != 0xFFFF
          && ((_WORD)v21 || !PsGetCurrentProcessWow64Process(v22)) )
        {
          goto LABEL_68;
        }
        if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
          goto LABEL_68;
        if ( *(_BYTE *)(v20 + 24) != 1 )
          goto LABEL_68;
        v24 = (_QWORD *)*v23;
        if ( !*v23 )
          goto LABEL_68;
        if ( (*(_DWORD *)(v24[5] + 232LL) & 0x20) != 0 )
        {
          v25 = *(_WORD *)(gpsi + 900LL);
          if ( **(_WORD **)(v24[17] + 8LL) == v25 )
            goto LABEL_32;
          Prop = RealGetProp(v24[18], v25, 1LL);
          if ( Prop )
          {
            if ( Prop == -1 )
              goto LABEL_32;
          }
          else
          {
            Prop = RealGetProp(v24[18], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v27) = 1, (v28 = HMValidateHandleNoSecure(Prop, v27)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v28) )
          {
LABEL_32:
            if ( (RealGetProp(v24[18], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v29 = v24[5];
LABEL_34:
              SetRectRgnIndirect(*(_QWORD *)(v18 + 184), v29 + 88);
              v30 = 1;
LABEL_69:
              if ( v30 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v49, *((HRGN *)g_pDwmState + 23), 0);
                v44 = v49[0];
                if ( v49[0] )
                  v30 = *(_DWORD *)(v49[0] + 84LL) != 1;
                if ( !v50 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)v49);
                  v44 = v49[0];
                }
                if ( v44 )
                  _InterlockedDecrement((volatile signed __int32 *)(v44 + 12));
              }
              v45 = v30 != 0;
              if ( v45 != (*((_DWORD *)v16 + 41) & 1) )
              {
                *((_DWORD *)v16 + 41) = v45 | *((_DWORD *)v16 + 41) & 0xFFFFFFFE;
                v46 = (void *)UserReferenceDwmApiPort();
                DwmAsyncShowSprite(v46);
              }
              goto LABEL_78;
            }
          }
        }
        v29 = v24[5];
        if ( (*(_BYTE *)(v29 + 26) & 0x20) == 0 )
        {
          v31 = v24;
          v32 = (4 * (*(_BYTE *)(v29 + 31) & 4)) | 0x4401;
          do
          {
            v33 = v31[5];
            v34 = *(_BYTE *)(v33 + 31);
            if ( (v34 & 0x10) == 0 || (v34 & 0x20) != 0 && v31 != v24 )
            {
LABEL_67:
              SetOrCreateRectRgnIndirectPublic(v18 + 184, gZero);
              goto LABEL_68;
            }
            if ( (*(_WORD *)(v33 + 42) & 0x3FFF) == 0x29D )
              break;
            v31 = (_QWORD *)v31[13];
          }
          while ( v31 );
          v35 = v24;
          while ( 1 )
          {
            v36 = v35[5];
            if ( (*(_BYTE *)(v36 + 27) & 0x20) != 0 )
              break;
            v35 = (_QWORD *)v35[13];
            if ( !v35 )
              goto LABEL_52;
          }
          if ( (*(_WORD *)(v36 + 42) & 0x3FFF) != 0x29D || v35 == v24 )
          {
            v37 = (_QWORD *)RealGetProp(v35[18], (unsigned __int16)atomLayer, 1LL);
            if ( !v37 || !*v37 )
              goto LABEL_67;
          }
LABEL_52:
          UpdatesLockedForDwm();
          v38 = v24;
          while ( 1 )
          {
            v39 = *(_DWORD *)(v38[5] + 24LL);
            if ( (v39 & 0x80000) != 0 || (v39 & 0x20000000) != 0 )
              break;
            v38 = (_QWORD *)v38[13];
            if ( !v38 )
              goto LABEL_66;
          }
          if ( v38 == v24 || (LOBYTE(v40) = IsDesktopWindow((__int64)v38), !v40) )
          {
            if ( v38 )
            {
              v41 = (_QWORD *)RealGetProp(v38[18], (unsigned __int16)atomLayer, 1LL);
              if ( v41 )
              {
                if ( *v41 )
                {
                  v42 = v38[5];
                  if ( (*(_DWORD *)(v42 + 24) & 0x20000000) != 0 )
                  {
                    v43 = *(_DWORD *)(v42 + 232);
                    if ( (v43 & 0x20) != 0 && (v43 & 4) == 0 )
                      v32 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_66:
          v30 = CalcVisRgnWorker((struct tagWND *const)v24, (HRGN *)(v18 + 184), v32);
          goto LABEL_69;
        }
        if ( (*(_BYTE *)(v29 + 31) & 0x10) != 0 )
          goto LABEL_34;
LABEL_68:
        v30 = 0;
        goto LABEL_69;
      }
    }
LABEL_80:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v47 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v48, (struct PDEVOBJ *)&v47);
  if ( *(_DWORD *)(v2 + 148) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 152) + 8LL * v8++), v3);
    while ( v8 < *(_DWORD *)(v2 + 148) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 88), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v48);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
