/*
 * XREFs of xxxSBTrackInit @ 0x1C020117C
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     GetWndSBDisableFlags @ 0x1C012FA58 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C01FE0D4 (zzzShowCaret.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFB84 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct tagWND **v11; // r15
  __int128 v12; // xmm0
  struct tagWND **v13; // r12
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  char *v18; // rsi
  __int64 v19; // rcx
  __int16 v20; // dx
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int128 *v24; // r8
  __int128 *v25; // rdx
  int v26; // r13d
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char v34; // [rsp+34h] [rbp-45h]
  __int128 v36; // [rsp+40h] [rbp-39h] BYREF
  char v37; // [rsp+50h] [rbp-29h] BYREF

  result = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = result;
  if ( !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 704LL) && (result || v7) )
  {
    result = Win32AllocPoolWithQuota(104LL, 1953723221LL);
    v10 = result;
    if ( result )
    {
      *(_DWORD *)result &= ~1u;
      *(_QWORD *)&v36 = result + 8;
      v11 = (struct tagWND **)(result + 16);
      *(_QWORD *)(result + 64) = 0LL;
      *((_QWORD *)&v36 + 1) = a1;
      v12 = v36;
      *(_QWORD *)(result + 8) = 0LL;
      *(_QWORD *)(result + 16) = 0LL;
      v13 = (struct tagWND **)(result + 24);
      *(_QWORD *)(result + 24) = 0LL;
      v36 = v12;
      *(_QWORD *)(result + 48) = xxxTrackBox;
      HMAssignmentLock(&v36);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) = v10;
      v14 = *(_DWORD *)v10 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
      *(_DWORD *)v10 = v14;
      if ( (v14 & 4) != 0 )
      {
        *(_QWORD *)&v36 = v10 + 16;
        *((_QWORD *)&v36 + 1) = a1;
        HMAssignmentLock(&v36);
        v15 = 2 * *(_DWORD *)(v9 + 8);
        *(_QWORD *)&v36 = v10 + 24;
        *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ v15) & 2;
        *((_QWORD *)&v36 + 1) = *((_QWORD *)a1 + 10);
        HMAssignmentLock(&v36);
        v16 = *(_DWORD *)(v9 + 12);
        v17 = 2;
        v34 = v16;
        v18 = (char *)(v9 + 16);
      }
      else
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = *(_WORD *)(v19 + 92);
        if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
          a2 = (unsigned __int16)(*(_WORD *)(v19 + 96) - a2) | ((unsigned __int16)(WORD1(a2) - v20) << 16);
        else
          a2 = ((unsigned __int16)(WORD1(a2) - v20) << 16) | (unsigned __int16)(a2 - *(_WORD *)(v19 + 88));
        *(_QWORD *)&v36 = v10 + 24;
        *((_QWORD *)&v36 + 1) = a1;
        HMAssignmentLock(&v36);
        v36 = (unsigned __int64)v11;
        HMAssignmentLock(&v36);
        v21 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * a3)) & 2;
        *(_DWORD *)v10 = v21;
        v18 = &v37;
        LOBYTE(v16) = GetWndSBDisableFlags((__int64)a1, (v21 >> 1) & 1);
        v34 = v16;
        v17 = a3 != 6;
      }
      *(_DWORD *)(v10 + 88) = v17;
      *(_QWORD *)(v10 + 96) = v18;
      if ( (v16 & 3) == 3 )
      {
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) = 0LL;
        HMAssignmentUnlock(v10 + 24);
        HMAssignmentUnlock(v10 + 16);
        v22 = v10 + 8;
LABEL_26:
        HMAssignmentUnlock(v22);
        return Win32FreePool(v10);
      }
      v23 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, (__int64)v18, (v23 >> 1) & 1);
        v23 = *(_DWORD *)v10;
        LOBYTE(v16) = v34;
      }
      v24 = &v36;
      if ( ((v23 >> 1) & 1) == 0 )
        v24 = (__int128 *)((char *)&v36 + 4);
      v25 = (__int128 *)((char *)&v36 + 4);
      if ( ((v23 >> 1) & 1) != 0 )
      {
        v26 = SWORD1(a2);
      }
      else
      {
        v25 = &v36;
        v26 = (__int16)a2;
      }
      *(_DWORD *)v24 = *((_DWORD *)v18 + 6);
      *(_DWORD *)v25 = *((_DWORD *)v18 + 4);
      *((_DWORD *)v24 + 2) = *((_DWORD *)v18 + 7);
      v27 = *((_DWORD *)v18 + 5);
      *(_DWORD *)(v10 + 56) = -1;
      *((_DWORD *)v25 + 2) = v27;
      if ( v26 >= *((_DWORD *)v18 + 9) )
      {
        if ( v26 >= *((_DWORD *)v18 + 10) )
        {
          if ( (v16 & 2) == 0 )
          {
            *(_DWORD *)(v10 + 56) = 1;
            *(_DWORD *)v25 = *((_DWORD *)v18 + 10);
            goto LABEL_43;
          }
          if ( (v23 & 4) != 0 )
          {
            zzzShowCaret(*v11, (__int64)v25);
LABEL_23:
            result = *((_QWORD *)a1 + 2);
            if ( v10 != *(_QWORD *)(result + 704) )
              return result;
          }
LABEL_24:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          v28 = v10 + 16;
LABEL_25:
          HMAssignmentUnlock(v28);
          v22 = v10 + 8;
          goto LABEL_26;
        }
        if ( v26 >= *((_DWORD *)v18 + 13) )
        {
          if ( v26 < *((_DWORD *)v18 + 12) )
            goto LABEL_39;
          *(_DWORD *)(v10 + 56) = 3;
          *(_DWORD *)v25 = *((_DWORD *)v18 + 12);
          v29 = *((_DWORD *)v18 + 10);
        }
        else
        {
          *(_DWORD *)(v10 + 56) = 2;
          *(_DWORD *)v25 = *((_DWORD *)v18 + 9);
          v29 = *((_DWORD *)v18 + 13);
        }
      }
      else
      {
        if ( (v16 & 1) != 0 )
        {
          if ( (v23 & 4) != 0 )
            goto LABEL_23;
          goto LABEL_24;
        }
        *(_DWORD *)(v10 + 56) = 0;
        v29 = *((_DWORD *)v18 + 9);
      }
      *((_DWORD *)v25 + 2) = v29;
LABEL_43:
      while ( 1 )
      {
        if ( a4 != 1 )
          goto LABEL_46;
        v32 = *(_DWORD *)(v10 + 56);
        if ( !v32 )
          break;
        if ( v32 == 1 )
        {
LABEL_46:
          if ( a4 != 2 )
            break;
        }
        if ( *(_DWORD *)(v10 + 56) == 4 )
        {
          *(_DWORD *)(v10 + 72) = *((_DWORD *)v18 + 8) / -2;
          break;
        }
LABEL_39:
        if ( *((_DWORD *)v18 + 10) - *((_DWORD *)v18 + 9) <= *((_DWORD *)v18 + 8) )
          goto LABEL_24;
        *(_DWORD *)(v10 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v10);
        *(_QWORD *)(v10 + 48) = xxxTrackThumb;
        v30 = *((_DWORD *)v18 + 13);
        *((_DWORD *)v18 + 11) = v30;
        *(_DWORD *)(v10 + 76) = v30;
        v31 = *((_DWORD *)v18 + 3);
        *(_DWORD *)(v10 + 80) = v31;
        *(_DWORD *)(v10 + 84) = v31;
        *(_DWORD *)(v10 + 72) = *((_DWORD *)v18 + 11) - v26;
        xxxCapture(gptiCurrent, (__int64 *)a1, 3);
        result = *((_QWORD *)a1 + 2);
        if ( v10 == *(_QWORD *)(result + 704) )
        {
          if ( !*v13 )
            continue;
          xxxDoScroll(*(struct tagWND **)(v10 + 16), *v13, 5LL, *(unsigned int *)(v10 + 80), (*(_DWORD *)v10 >> 1) & 1);
          result = *((_QWORD *)a1 + 2);
          if ( v10 == *(_QWORD *)(result + 704) )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, (__int64 *)a1, 3);
      result = *((_QWORD *)a1 + 2);
      if ( v10 == *(_QWORD *)(result + 704) )
      {
        if ( *(_DWORD *)(v10 + 56) != 4 )
          *(_OWORD *)(v10 + 32) = v36;
        xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v18);
        result = *((_QWORD *)a1 + 2);
        v10 = *(_QWORD *)(result + 704);
        if ( v10 )
        {
          *(_QWORD *)(result + 704) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          v28 = v10 + 16;
          goto LABEL_25;
        }
      }
    }
  }
  return result;
}
