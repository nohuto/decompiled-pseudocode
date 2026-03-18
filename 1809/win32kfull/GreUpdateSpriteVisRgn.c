/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C003C0E0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C011C750 (DwmAsyncShowSprite.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r15d
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
  int v18; // r8d
  unsigned __int64 v19; // rsi
  __int64 v20; // rbp
  _QWORD *v21; // r14
  _QWORD *v22; // rbp
  unsigned __int16 v23; // dx
  unsigned __int64 Prop; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // esi
  _QWORD *v29; // rcx
  unsigned int v30; // r14d
  __int64 v31; // rdx
  char v32; // al
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  int v37; // ecx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  BOOL v42; // ebp
  void *v43; // rax
  __int64 v44; // [rsp+20h] [rbp-88h] BYREF
  char v45[8]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  char v47[40]; // [rsp+38h] [rbp-70h] BYREF
  int v48; // [rsp+60h] [rbp-48h]

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
LABEL_80:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_81;
          }
          v15 = *((_QWORD *)v14 + 5);
          if ( v15 )
            break;
LABEL_79:
          v12 = g_pDwmState;
          v13 = (struct DwmState *)*((_QWORD *)v14 + 3);
          if ( v13 == (struct DwmState *)((char *)g_pDwmState + 80) )
            goto LABEL_80;
        }
        v16 = *(_QWORD *)v12;
        v17 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12) )
          PsGetThreadWin32Thread(v17);
        v18 = (unsigned __int16)v15;
        if ( (unsigned __int64)(unsigned __int16)v15 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_68;
        v19 = v15 >> 16;
        v20 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v18 * *((_DWORD *)&gSharedInfo + 4));
        v21 = (_QWORD *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v18 * *((_DWORD *)&gSharedInfo + 4)) >> 5));
        if ( (_WORD)v19 != *(_WORD *)(v20 + 26)
          && (_WORD)v19 != 0xFFFF
          && ((_WORD)v19 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable)) )
        {
          goto LABEL_68;
        }
        if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
          goto LABEL_68;
        if ( *(_BYTE *)(v20 + 24) != 1 )
          goto LABEL_68;
        v22 = (_QWORD *)*v21;
        if ( !*v21 )
          goto LABEL_68;
        if ( (*(_DWORD *)(v22[5] + 232LL) & 0x20) != 0 )
        {
          v23 = *(_WORD *)(gpsi + 900LL);
          if ( **(_WORD **)(v22[14] + 8LL) == v23 )
            goto LABEL_32;
          Prop = RealGetProp(v22[15], v23, 1LL);
          if ( Prop )
          {
            if ( Prop == -1LL )
              goto LABEL_32;
          }
          else
          {
            Prop = RealGetProp(v22[15], *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
          }
          if ( !Prop
            || (LOBYTE(v25) = 1, (v26 = HMValidateHandleNoSecure(Prop, v25)) == 0)
            || (unsigned int)IsWindowBeingDestroyed(v26) )
          {
LABEL_32:
            if ( (RealGetProp(v22[15], (unsigned __int16)atomDispAffinity, 1LL) & 1) == 0 )
            {
              v27 = v22[5];
LABEL_34:
              SetRectRgnIndirect(*(_QWORD *)(v16 + 184), v27 + 88);
              v28 = 1;
LABEL_69:
              if ( v28 )
              {
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v46, *((HRGN *)g_pDwmState + 23), 0, 0);
                v41 = v46;
                if ( v46 )
                  v28 = *(_DWORD *)(v46 + 84) != 1;
                if ( !v48 )
                {
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v46);
                  v41 = v46;
                }
                if ( v41 )
                  _InterlockedDecrement((volatile signed __int32 *)(v41 + 12));
                UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v47);
              }
              v42 = v28 != 0;
              if ( v42 != (*((_DWORD *)v14 + 41) & 1) )
              {
                *((_DWORD *)v14 + 41) = v42 | *((_DWORD *)v14 + 41) & 0xFFFFFFFE;
                v43 = (void *)UserReferenceDwmApiPort();
                DwmAsyncShowSprite(v43);
              }
              goto LABEL_79;
            }
          }
        }
        v27 = v22[5];
        if ( (*(_BYTE *)(v27 + 26) & 0x20) == 0 )
        {
          v29 = v22;
          v30 = (4 * (*(_BYTE *)(v27 + 31) & 4)) | 0x4401;
          do
          {
            v31 = v29[5];
            v32 = *(_BYTE *)(v31 + 31);
            if ( (v32 & 0x10) == 0 || (v32 & 0x20) != 0 && v29 != v22 )
            {
LABEL_67:
              SetOrCreateRectRgnIndirectPublic(v16 + 184, gZero);
              goto LABEL_68;
            }
            if ( (*(_WORD *)(v31 + 42) & 0x2FFF) == 0x29D )
              break;
            v29 = (_QWORD *)v29[10];
          }
          while ( v29 );
          v33 = v22;
          while ( 1 )
          {
            v34 = v33[5];
            if ( (*(_BYTE *)(v34 + 27) & 0x20) != 0 )
              break;
            v33 = (_QWORD *)v33[10];
            if ( !v33 )
              goto LABEL_52;
          }
          if ( (*(_WORD *)(v34 + 42) & 0x2FFF) != 0x29D || v33 == v22 )
          {
            v35 = (_QWORD *)RealGetProp(v33[15], (unsigned __int16)atomLayer, 1LL);
            if ( !v35 || !*v35 )
              goto LABEL_67;
          }
LABEL_52:
          UpdatesLockedForDwm();
          v36 = v22;
          while ( 1 )
          {
            v37 = *(_DWORD *)(v36[5] + 24LL);
            if ( (v37 & 0x80000) != 0 || (v37 & 0x20000000) != 0 )
              break;
            v36 = (_QWORD *)v36[10];
            if ( !v36 )
              goto LABEL_66;
          }
          if ( v36 == v22 || !(unsigned int)IsDesktopWindow(v36) )
          {
            if ( v36 )
            {
              v38 = (_QWORD *)RealGetProp(v36[15], (unsigned __int16)atomLayer, 1LL);
              if ( v38 )
              {
                if ( *v38 )
                {
                  v39 = v36[5];
                  if ( (*(_DWORD *)(v39 + 24) & 0x20000000) != 0 )
                  {
                    v40 = *(_DWORD *)(v39 + 232);
                    if ( (v40 & 0x20) != 0 && (v40 & 4) == 0 )
                      v30 &= ~0x4000u;
                  }
                }
              }
            }
          }
LABEL_66:
          v28 = CalcVisRgnWorker((struct tagWND *const)v22, (HRGN *)(v16 + 184), v30);
          goto LABEL_69;
        }
        if ( (*(_BYTE *)(v27 + 31) & 0x10) != 0 )
          goto LABEL_34;
LABEL_68:
        v28 = 0;
        goto LABEL_69;
      }
    }
LABEL_81:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v44 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v45, (struct PDEVOBJ *)&v44);
  if ( *(_DWORD *)(v2 + 148) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 152) + 8LL * v7++), v3);
    while ( v7 < *(_DWORD *)(v2 + 148) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 88), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v45);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
