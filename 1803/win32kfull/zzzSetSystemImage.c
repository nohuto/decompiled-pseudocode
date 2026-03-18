/*
 * XREFs of zzzSetSystemImage @ 0x1C006B2C0
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01A7FD4 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01A8058 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C01F96B4 (xxxSetSystemCursor.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetSystemImage(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  int v10; // ecx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rcx

  if ( (struct tagCURSOR *)a2 != a1 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v12 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v13 = 0LL;
          do
          {
            v14 = *(_QWORD *)(v13 + *((_QWORD *)a1 + 12));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v14,
              gptiRit);
            ++v12;
            *(_QWORD *)(v14 + 24) = 0LL;
            v13 += 8LL;
          }
          while ( v12 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          GreDecQuotaCount(v4);
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 416LL));
          v4 = *((_QWORD *)a1 + 3);
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(v4);
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 416LL));
          v4 = *((_QWORD *)a1 + 3);
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(v4);
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 416LL));
        }
      }
    }
    v5 = *((_DWORD *)a1 + 37);
    v6 = *(_OWORD *)((char *)a1 + 84);
    v7 = *(_OWORD *)((char *)a1 + 100);
    v8 = *(_OWORD *)((char *)a1 + 116);
    v9 = *(_OWORD *)((char *)a1 + 132);
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)(a2 + 84);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)(a2 + 100);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)(a2 + 116);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)(a2 + 132);
    *((_DWORD *)a1 + 37) = *(_DWORD *)(a2 + 148);
    *(_OWORD *)(a2 + 84) = v6;
    *(_OWORD *)(a2 + 100) = v7;
    *(_OWORD *)(a2 + 116) = v8;
    *(_OWORD *)(a2 + 132) = v9;
    *(_DWORD *)(a2 + 148) = v5;
    v10 = *((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 20) = v10 ^ (*(_DWORD *)(a2 + 80) ^ v10) & 8;
    *(_DWORD *)(a2 + 80) ^= (*(_DWORD *)(a2 + 80) ^ v10) & 8;
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v15 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v16 = 0LL;
          do
          {
            ++v15;
            v17 = *(_QWORD *)(*((_QWORD *)a1 + 12) + v16);
            v16 += 8LL;
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(gptiRit + 416LL);
          }
          while ( v15 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 416LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 416LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 416LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
      }
      DestroyCursor(a1, 2);
    }
    if ( gpcurLogCurrent == a2 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      zzzUpdateCursorImage();
    }
    *(_DWORD *)(a2 + 80) |= 0x200u;
  }
  return 1LL;
}
