/*
 * XREFs of DoTimer @ 0x1C00D3BB8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C00D3E80 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     _IsChild @ 0x1C0154384 (_IsChild.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall DoTimer(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *i; // rsi
  LARGE_INTEGER *v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD HighPart; // eax
  LARGE_INTEGER *v10; // rax
  LARGE_INTEGER *v11; // rbp
  int v12; // eax
  LARGE_INTEGER **v13; // rax
  InputTransform *QuadPart; // rdx
  unsigned int v15; // r9d
  LARGE_INTEGER v16; // rcx
  _QWORD *v17; // rdx
  LARGE_INTEGER v18; // rax
  _QWORD *v19; // rcx
  LARGE_INTEGER *v21; // rbx
  LONGLONG v22; // rdx
  LARGE_INTEGER **v23; // rcx
  LARGE_INTEGER **v24; // rdx
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx

  v1 = gptiCurrent + 1192LL;
  for ( i = *(_QWORD **)(gptiCurrent + 1192LL); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v1 )
      return 0LL;
    v3 = (LARGE_INTEGER *)(i - 7);
    v4 = i[4];
    if ( !a1 || a1 == v4 || a1 == 1 && !v4 )
      v5 = 1;
    else
      v5 = IsChild(a1, v4);
    if ( v5 )
      break;
  }
  TimerStatistics((const struct tagTIMER *)(i - 7));
  HighPart = v3[16].HighPart;
  if ( v3[16].LowPart == HighPart )
    v3[16].LowPart = HighPart;
  if ( *(_DWORD *)(gptiCurrent + 824LL) >= gUserPostMessageLimit )
  {
    v29 = 1816LL;
  }
  else
  {
    v10 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0xA8uLL);
      v12 = 8;
      if ( *(_DWORD *)(gptiCurrent + 828LL) != 2 )
        v12 = 4;
      v11[12].HighPart |= v12;
      v13 = *(LARGE_INTEGER ***)(gptiCurrent + 816LL);
      if ( v13 )
      {
        *v13 = v11;
        v11[1] = *(LARGE_INTEGER *)(gptiCurrent + 816LL);
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 808LL) = v11;
      }
      *(_QWORD *)(gptiCurrent + 816LL) = v11;
      ++*(_DWORD *)(gptiCurrent + 824LL);
      QuadPart = (InputTransform *)v3[11].QuadPart;
      if ( QuadPart )
      {
        v15 = *(_DWORD *)(*((_QWORD *)QuadPart + 5) + 288LL);
      }
      else
      {
        v26 = *(_QWORD *)(gptiCurrent + 432LL);
        v27 = *(_QWORD *)(v26 + 120);
        if ( v27 )
          v28 = *(_QWORD *)(v27 + 16);
        else
          v28 = *(_QWORD *)(v26 + 96);
        v15 = *(_DWORD *)(*(_QWORD *)(v28 + 424) + 280LL);
      }
      if ( (v3[6].LowPart & 2) == 0 || (v16.QuadPart = 280LL, !v3[4].QuadPart) )
        v16 = v3[4];
      StoreQMessage(
        v11,
        QuadPart,
        (v3[6].LowPart & 2) != 0 ? 280 : 275,
        v3[12],
        v16,
        0,
        0LL,
        0,
        0LL,
        0,
        0LL,
        v15,
        0LL,
        0LL);
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x108u;
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x108u;
        if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) & 0x108) != 0 )
          KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
      }
      goto LABEL_21;
    }
    v29 = 8LL;
  }
  UserSetLastError(v29, v6, v7, v8);
LABEL_21:
  v3[6].LowPart &= ~1u;
  v17 = (_QWORD *)*i;
  v18 = v3[3];
  if ( *(_QWORD **)(*i + 8LL) != i )
    goto LABEL_46;
  v19 = (_QWORD *)i[1];
  if ( (_QWORD *)*v19 != i )
    goto LABEL_46;
  *v19 = v17;
  v17[1] = v19;
  if ( (*(_DWORD *)(v18.QuadPart + 604))-- == 1 )
    *(_WORD *)(*(_QWORD *)(v18.QuadPart + 448) + 6LL) &= ~0x10u;
  v21 = v3 + 9;
  v22 = v21->QuadPart;
  if ( *(LARGE_INTEGER **)(v21->QuadPart + 8) != v21
    || (v23 = (LARGE_INTEGER **)v21[1].QuadPart, *v23 != v21)
    || (*v23 = (LARGE_INTEGER *)v22,
        *(_QWORD *)(v22 + 8) = v23,
        v24 = (LARGE_INTEGER **)gtmrListHead[1],
        *v24 != (LARGE_INTEGER *)gtmrListHead[0]) )
  {
LABEL_46:
    __fastfail(3u);
  }
  *v21 = (LARGE_INTEGER)gtmrListHead[0];
  result = 1LL;
  v21[1].QuadPart = (LONGLONG)v24;
  *v24 = v21;
  gtmrListHead[1] = v21;
  return result;
}
