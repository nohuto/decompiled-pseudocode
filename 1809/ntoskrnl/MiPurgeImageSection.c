/*
 * XREFs of MiPurgeImageSection @ 0x140176720
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiInvalidateCollidedIos @ 0x140117DB8 (MiInvalidateCollidedIos.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rsi
  struct _KEVENT *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r9
  char v10; // di
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // r12
  ULONG_PTR v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r15
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r11
  bool v21; // zf
  ULONG_PTR v22; // rbx
  __int64 v23; // rdx
  int v24; // r8d
  bool v25; // zf
  int v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+28h] [rbp-80h]
  struct _KEVENT *v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  unsigned __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned __int8 v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+18h]
  unsigned int v37; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  LOBYTE(CurrentThread) = qword_14043B808;
  v3 = *(_WORD *)(a1 + 60) & 0x3FF;
  v4 = 0LL;
  v35 = 17;
  v5 = a1;
  v28 = 0LL;
  v6 = *(struct _KEVENT **)(qword_14043B808 + 8 * v3);
  v29 = v6;
  while ( 1 )
  {
    v30 = v1;
    if ( !v1 )
      return CurrentThread;
    if ( (*(_WORD *)(v1 + 34) & 2) == 0 )
      goto LABEL_4;
    v8 = MiSwizzleInvalidPte(16LL * (*(_WORD *)(v1 + 32) & 0x3E));
    v31 = v8;
    v10 = v8;
    v37 = 0;
    v36 = 0;
    if ( *(_DWORD *)(v1 + 36) )
    {
      v10 = MiSwizzleInvalidPte(16 * (v7 | (v1 << 12) | 0x40));
      v37 = (*(_DWORD *)(v1 + 40) << 9) | (v11 >> 4);
    }
    v12 = *(_QWORD *)(v1 + 8);
    CurrentThread = v12 + 8LL * *(unsigned int *)(v1 + 44);
    v33 = CurrentThread;
    if ( v12 < CurrentThread )
    {
      while ( 1 )
      {
        if ( (v12 & 0xFFF) == 0 || v35 == 17 )
        {
          if ( v35 != 17 )
            MiUnlockProtoPoolPage(v9, v35);
          while ( 1 )
          {
            v28 = MiLockProtoPoolPage(v12, &v35);
            if ( v28 )
              break;
            MmAccessFault(2uLL, v12, 0LL, 0LL);
          }
          LOBYTE(v8) = v31;
        }
        v13 = MiLockLeafPage((__int64 *)v12, 0);
        CurrentThread = MI_READ_PTE_LOCK_FREE(v12);
        v15 = CurrentThread;
        if ( !CurrentThread )
        {
LABEL_20:
          v1 = v30;
          v9 = v28;
          break;
        }
        if ( v13 )
        {
          if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 || (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
          {
            v16 = (_DWORD *)(v13 + 16);
            if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
              MiDereferenceControlAreaPfnList(v5, 0LL, v14, 2);
            v17 = 0LL;
            v32 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL;
            if ( !*(_WORD *)(v13 + 32) )
            {
              MiUnlinkPageFromList(v13, 0);
              if ( (*v16 & 0x400LL) == 0 )
                v17 = MiCapturePageFileInfoInline((_QWORD *)(v13 + 16), 0, 1);
              if ( qword_14043B180 )
              {
                if ( (v15 & 0x10) != 0 )
                  v15 &= ~0x10uLL;
                else
                  v15 &= ~qword_14043B180;
              }
              MiInsertPageInFreeOrZeroedList((v15 >> 12) & 0xFFFFFFFFFLL, 2);
              goto LABEL_38;
            }
            *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
            if ( (*(_BYTE *)(v13 + 34) & 0x28) == 0x20 )
            {
              v4 = *(_QWORD *)v13 - 32LL;
              if ( *(_QWORD *)(v4 + 16) == v4 + 16 )
                v4 = 0LL;
            }
            if ( (*v16 & 0x400LL) != 0 )
            {
LABEL_38:
              v6 = v29;
            }
            else
            {
              v6 = v29;
              MiChargeCommit((__int64)v29, 1uLL, 4u);
            }
            if ( MiPteInShadowRange(v12) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v19 = 1LL;
                if ( HIBYTE(word_14043B26C) == v20 )
                {
                  v21 = (v10 & 1) == 0;
LABEL_50:
                  if ( !v21 )
                    v18 |= 0x8000000000000000uLL;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
              {
                v21 = (v10 & 1) == 0;
                goto LABEL_50;
              }
            }
            *(_QWORD *)v12 = v18;
            if ( (_DWORD)v19 )
              MiWritePteShadow(v12, v18);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v4 )
              MiInvalidateCollidedIos(v4);
            v22 = 48 * v32 - 0x58000000000LL;
            v4 = 0LL;
            v27 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v27, v18, v19);
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
            MiDecrementShareCount(v22);
            LOBYTE(CurrentThread) = -1;
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v17 )
              LOBYTE(CurrentThread) = MiReleasePageFileInfo(v6, v17, 1);
            v5 = a1;
            goto LABEL_17;
          }
          LOBYTE(CurrentThread) = -1;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (CurrentThread & 0x400) == 0 )
        {
          CurrentThread = MiSwizzleInvalidPte(768LL);
          if ( v15 != CurrentThread )
          {
            MiReleasePageFileSpace(v6, v15);
            LODWORD(CurrentThread) = MiPteInShadowRange(v12);
            if ( (_DWORD)CurrentThread )
            {
              LODWORD(CurrentThread) = MiPteHasShadow();
              if ( (_DWORD)CurrentThread )
              {
                v24 = 1;
                if ( !HIBYTE(word_14043B26C) )
                {
                  v25 = (v10 & 1) == 0;
LABEL_69:
                  if ( !v25 )
                  {
                    LOBYTE(CurrentThread) = 0;
                    v23 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                CurrentThread = (unsigned __int64)KeGetCurrentThread();
                if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 1740LL) & 0x1000) != 0 )
                {
                  v25 = (v10 & 1) == 0;
                  goto LABEL_69;
                }
              }
            }
            *(_QWORD *)v12 = v23;
            if ( v24 )
              LOBYTE(CurrentThread) = MiWritePteShadow(v12, v23);
          }
        }
LABEL_17:
        v12 += 8LL;
        v9 = v28;
        v36 += 4096;
        if ( v36 >= v37 )
          v10 = v8;
        if ( v12 >= v33 )
          goto LABEL_20;
      }
    }
    if ( v35 != 17 )
    {
      LOBYTE(CurrentThread) = MiUnlockProtoPoolPage(v9, v35);
      v35 = 17;
    }
LABEL_4:
    v1 = *(_QWORD *)(v1 + 16);
  }
}
