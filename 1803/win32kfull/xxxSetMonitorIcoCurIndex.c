/*
 * XREFs of xxxSetMonitorIcoCurIndex @ 0x1C006B19C
 * Callers:
 *     xxxEnsureMonitorCursors @ 0x1C0008198 (xxxEnsureMonitorCursors.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01A7FD4 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01A8058 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C01F96B4 (xxxSetSystemCursor.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C001E29C (FixupCursorForMonitor.c)
 *     GetCursorForDim @ 0x1C006B2A4 (GetCursorForDim.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C006C42C (xxxClientCopyImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetMonitorIcoCurIndex(int a1, int a2, int a3)
{
  __int64 result; // rax
  _DWORD *v4; // r13
  int v5; // r11d
  int v6; // edi
  int v7; // ebp
  unsigned int v8; // r10d
  unsigned int i; // r15d
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // edx
  _QWORD *v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r14
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 CursorForDim; // rax
  int v22; // r10d
  int v23; // ecx
  __int64 v24; // rbp
  __int128 v25; // xmm0
  __int128 v26; // [rsp+50h] [rbp-78h]
  __int128 v27; // [rsp+60h] [rbp-68h]
  _OWORD v28[5]; // [rsp+70h] [rbp-58h] BYREF

  result = gpsi;
  v4 = &gfCursorSizeNeeded;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v4 != v8 )
    {
      result = gasyscur[0];
      v10 = 2LL * v5;
      v11 = gasyscur[2 * v5 + 1];
      if ( v11 )
      {
        if ( i )
        {
          switch ( i )
          {
            case 1u:
              v12 = 48;
              break;
            case 2u:
              v12 = 64;
              break;
            case 3u:
              v12 = 96;
              break;
            default:
              v12 = 128;
              break;
          }
        }
        else
        {
          v12 = 32;
        }
        result = GetCursorForDim(v11, v12);
        v18 = v8;
        v17 = result;
        LOBYTE(v18) = result != 0;
        if ( !v16 && !result )
          goto LABEL_34;
        if ( v16 == 1 )
        {
          if ( !result )
            goto LABEL_3;
          switch ( v15 )
          {
            case 32:
LABEL_12:
              result = v8;
              break;
            case 48:
              result = 1LL;
              break;
            case 64:
              result = 2LL;
              break;
            case 96:
              result = 3LL;
              break;
            case 128:
              result = 4LL;
              break;
            default:
              goto LABEL_12;
          }
          if ( i == (_DWORD)result )
            goto LABEL_3;
LABEL_34:
          result = xxxClientLoadImage(v7, v13, 2, v12, v12, v6 | 0x40000u);
LABEL_37:
          v8 = 0;
          v19 = result;
          if ( result )
          {
            v20 = gasyscur[v10 + 1];
            if ( !v20 )
              goto LABEL_48;
            CursorForDim = GetCursorForDim(v20, v12);
            v23 = v22;
            v24 = CursorForDim;
            LOBYTE(v23) = CursorForDim != 0;
            if ( v18 != v23 )
              goto LABEL_48;
            *(_DWORD *)(v19 + 76) = v12;
            if ( !v17 )
            {
              if ( (*(_DWORD *)(v19 + 80) & 0x1000) != 0 && *(_QWORD *)(v19 + 48) == v19 )
              {
                *(_WORD *)(v19 + 72) = *(_WORD *)(v20 + 72);
                if ( *(_WORD *)(v19 + 56) != (_WORD)v22 )
                  Win32FreePool(*(_QWORD *)(v19 + 64));
                v25 = *(_OWORD *)(v20 + 56);
                *(_QWORD *)(v19 + 48) = v20;
                *(_QWORD *)&v26 = v19 + 40;
                *(_OWORD *)(v19 + 56) = v25;
                *((_QWORD *)&v26 + 1) = *(_QWORD *)(v20 + 40);
                v28[0] = v26;
                HMAssignmentLock(v28);
                *(_QWORD *)&v27 = v20 + 40;
                *((_QWORD *)&v27 + 1) = v19;
                v28[0] = v27;
                result = HMAssignmentLock(v28);
                goto LABEL_49;
              }
LABEL_48:
              result = DestroyCursor((struct tagCURSOR *)v19, 0);
              goto LABEL_49;
            }
            zzzSetSystemImage((struct tagCURSOR *)v19);
            result = FixupCursorForMonitor(gpcurLogCurrent);
            if ( result == v24 )
            {
              gpcurPhysCurrent = 0LL;
              gpcurLogCurrent = 0LL;
              result = zzzUpdateCursorImage();
            }
LABEL_49:
            v8 = 0;
          }
          v6 = a2;
          v5 = a3;
          goto LABEL_3;
        }
        if ( v16 == 2 && result )
        {
          result = xxxClientCopyImage(*v14, 2, v12, v12, v8);
          goto LABEL_37;
        }
      }
    }
LABEL_3:
    v7 = a1;
    ++v4;
  }
  return result;
}
