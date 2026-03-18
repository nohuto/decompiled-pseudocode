/*
 * XREFs of xxxSBTrackInit @ 0x1C0229BD0
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     GetWndSBDisableFlags @ 0x1C0106D0C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01C424C (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0226E2C (zzzShowCaret.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022856C (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228A8C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct tagWND **v11; // r15
  __int128 v12; // xmm0
  struct tagWND **v13; // r12
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ecx
  __int128 *v25; // r8
  __int128 *v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // r13d
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int WndSBDisableFlags; // [rsp+30h] [rbp-49h]
  __int128 v37; // [rsp+40h] [rbp-39h] BYREF
  char v38; // [rsp+50h] [rbp-29h] BYREF

  result = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = result;
  if ( !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 720LL) && (result || a3) )
  {
    result = Win32AllocPoolWithQuota(104LL, 1953723221LL);
    v10 = result;
    if ( result )
    {
      *(_DWORD *)result &= ~1u;
      v11 = (struct tagWND **)(result + 16);
      *(_QWORD *)(result + 64) = 0LL;
      *((_QWORD *)&v37 + 1) = a1;
      *(_QWORD *)(result + 48) = xxxTrackBox;
      *(_QWORD *)&v37 = result + 8;
      v12 = v37;
      *(_QWORD *)(result + 8) = 0LL;
      *(_QWORD *)(result + 16) = 0LL;
      v13 = (struct tagWND **)(result + 24);
      *(_QWORD *)(result + 24) = 0LL;
      v37 = v12;
      HMAssignmentLock(&v37);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = v10;
      v14 = *(_DWORD *)v10 & 0xFFFFFFFB;
      *(_DWORD *)v10 = v14 | (a3 == 0 ? 4 : 0);
      if ( v14 & 4 | (a3 == 0 ? 4 : 0) )
      {
        *(_QWORD *)&v37 = v10 + 16;
        *((_QWORD *)&v37 + 1) = a1;
        HMAssignmentLock(&v37);
        v15 = 2 * *(_DWORD *)(v9 + 8);
        *(_QWORD *)&v37 = v10 + 24;
        *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ v15) & 2;
        *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 10);
        HMAssignmentLock(&v37);
        v16 = *(unsigned int *)(v9 + 12);
        v17 = (char *)(v9 + 16);
        WndSBDisableFlags = v16;
        *(_DWORD *)(v10 + 88) = 2;
      }
      else
      {
        v18 = *((_QWORD *)a1 + 5);
        v19 = (unsigned __int16)(WORD1(a2) - *(_WORD *)(v18 + 92)) << 16;
        if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
          v20 = (unsigned __int16)(*(_WORD *)(v18 + 96) - a2);
        else
          v20 = (unsigned __int16)(a2 - *(_WORD *)(v18 + 88));
        *(_QWORD *)&v37 = v10 + 24;
        *((_QWORD *)&v37 + 1) = a1;
        a2 = v19 | v20;
        HMAssignmentLock(&v37);
        v37 = (unsigned __int64)v11;
        HMAssignmentLock(&v37);
        v21 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * a3)) & 2;
        *(_DWORD *)v10 = v21;
        WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v21 >> 1) & 1, v22, v23);
        v16 = WndSBDisableFlags;
        v17 = (char *)&unk_1C03198E0;
        *(_DWORD *)(v10 + 88) = a3 != 6;
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
          v17 = &v38;
      }
      *(_QWORD *)(v10 + 96) = v17;
      if ( (v16 & 3) == 3 )
        goto LABEL_24;
      v24 = *(_DWORD *)v10;
      if ( (*(_DWORD *)v10 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, (__int64)v17, (v24 >> 1) & 1);
        v24 = *(_DWORD *)v10;
        v16 = WndSBDisableFlags;
      }
      v25 = &v37;
      if ( (v24 & 2) == 0 )
        v25 = (__int128 *)((char *)&v37 + 4);
      v26 = (__int128 *)((char *)&v37 + 4);
      if ( (v24 & 2) != 0 )
      {
        v27 = a2 >> 16;
      }
      else
      {
        v26 = &v37;
        LOWORD(v27) = a2;
      }
      v28 = (__int16)v27;
      *(_DWORD *)v25 = *((_DWORD *)v17 + 6);
      *(_DWORD *)v26 = *((_DWORD *)v17 + 4);
      *((_DWORD *)v25 + 2) = *((_DWORD *)v17 + 7);
      v29 = *((_DWORD *)v17 + 5);
      *(_DWORD *)(v10 + 56) = -1;
      *((_DWORD *)v26 + 2) = v29;
      if ( v28 >= *((_DWORD *)v17 + 9) )
      {
        if ( v28 >= *((_DWORD *)v17 + 10) )
        {
          if ( (v16 & 2) == 0 )
          {
            *(_DWORD *)(v10 + 56) = 1;
            *(_DWORD *)v26 = *((_DWORD *)v17 + 10);
            goto LABEL_42;
          }
          if ( (v24 & 4) != 0 )
          {
            zzzShowCaret(*v11, (__int64)v26, (__int64)v25, v16);
LABEL_23:
            result = *((_QWORD *)a1 + 2);
            if ( v10 != *(_QWORD *)(result + 720) )
              return result;
          }
LABEL_24:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          v30 = v10 + 16;
LABEL_25:
          HMAssignmentUnlock(v30);
          HMAssignmentUnlock(v10 + 8);
          return Win32FreePool(v10);
        }
        if ( v28 >= *((_DWORD *)v17 + 13) )
        {
          if ( v28 < *((_DWORD *)v17 + 12) )
            goto LABEL_38;
          *(_DWORD *)(v10 + 56) = 3;
          *(_DWORD *)v26 = *((_DWORD *)v17 + 12);
          v31 = *((_DWORD *)v17 + 10);
        }
        else
        {
          *(_DWORD *)(v10 + 56) = 2;
          *(_DWORD *)v26 = *((_DWORD *)v17 + 9);
          v31 = *((_DWORD *)v17 + 13);
        }
      }
      else
      {
        if ( (v16 & 1) != 0 )
        {
          if ( (v24 & 4) != 0 )
            goto LABEL_23;
          goto LABEL_24;
        }
        *(_DWORD *)(v10 + 56) = 0;
        v31 = *((_DWORD *)v17 + 9);
      }
      *((_DWORD *)v26 + 2) = v31;
LABEL_42:
      while ( 1 )
      {
        if ( a4 != 1 )
          goto LABEL_45;
        v34 = *(_DWORD *)(v10 + 56);
        if ( !v34 )
          break;
        if ( v34 == 1 )
        {
LABEL_45:
          if ( a4 != 2 )
            break;
        }
        if ( *(_DWORD *)(v10 + 56) == 4 )
        {
          *(_DWORD *)(v10 + 72) = *((_DWORD *)v17 + 8) / -2;
          break;
        }
LABEL_38:
        if ( *((_DWORD *)v17 + 10) - *((_DWORD *)v17 + 9) <= *((_DWORD *)v17 + 8) )
          goto LABEL_24;
        *(_DWORD *)(v10 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v10);
        *(_QWORD *)(v10 + 48) = xxxTrackThumb;
        v32 = *((_DWORD *)v17 + 13);
        *((_DWORD *)v17 + 11) = v32;
        *(_DWORD *)(v10 + 76) = v32;
        v33 = *((_DWORD *)v17 + 3);
        *(_DWORD *)(v10 + 80) = v33;
        *(_DWORD *)(v10 + 84) = v33;
        *(_DWORD *)(v10 + 72) = *((_DWORD *)v17 + 11) - v28;
        xxxCapture(gptiCurrent, (__int64 *)a1, 3);
        result = *((_QWORD *)a1 + 2);
        if ( v10 == *(_QWORD *)(result + 720) )
        {
          if ( !*v13 )
            continue;
          xxxDoScroll(*(struct tagWND **)(v10 + 16), *v13, 5LL, *(unsigned int *)(v10 + 80), (*(_DWORD *)v10 >> 1) & 1);
          result = *((_QWORD *)a1 + 2);
          if ( v10 == *(_QWORD *)(result + 720) )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, (__int64 *)a1, 3);
      result = *((_QWORD *)a1 + 2);
      if ( v10 == *(_QWORD *)(result + 720) )
      {
        if ( *(_DWORD *)(v10 + 56) != 4 )
          *(_OWORD *)(v10 + 32) = v37;
        xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v17);
        result = *((_QWORD *)a1 + 2);
        v10 = *(_QWORD *)(result + 720);
        if ( v10 )
        {
          *(_QWORD *)(result + 720) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          v30 = v10 + 16;
          goto LABEL_25;
        }
      }
    }
  }
  return result;
}
