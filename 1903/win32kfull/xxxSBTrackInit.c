/*
 * XREFs of xxxSBTrackInit @ 0x1C0242698
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     GetWndSBDisableFlags @ 0x1C000C034 (GetWndSBDisableFlags.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     CalcSBStuff @ 0x1C00AA7A4 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D7560 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C023EADC (zzzShowCaret.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0240938 (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0240A7C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240BF8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241AB8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

unsigned __int8 **__fastcall xxxSBTrackInit(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned __int8 **result; // rax
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 **v10; // rcx
  __int64 v11; // rbx
  struct tagWND **v12; // r15
  char **v13; // r12
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // r9
  int v17; // eax
  int *v18; // rsi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r14d
  unsigned int v22; // edx
  unsigned int WndSBDisableFlags; // eax
  unsigned int v24; // ecx
  __int128 *v25; // r8
  char *v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // r10d
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int128 v35; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-49h]
  int v37; // [rsp+44h] [rbp-45h]
  int v38; // [rsp+48h] [rbp-41h]
  __int128 v39; // [rsp+50h] [rbp-39h] BYREF
  char v40; // [rsp+60h] [rbp-29h] BYREF

  v38 = a4;
  v39 = 0uLL;
  v37 = a3;
  result = (unsigned __int8 **)safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = (__int64)result;
  if ( !*(_QWORD *)(*(_QWORD *)(v8 + 16) + 712LL) && (result || v7) )
  {
    result = gpUserTypeIsolation;
    v10 = (__int64 **)gpUserTypeIsolation[5];
    if ( v10 )
    {
      result = (unsigned __int8 **)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v10, 0LL);
      v11 = (__int64)result;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      *(_DWORD *)v11 &= ~1u;
      *(_QWORD *)&v35 = v11 + 8;
      *((_QWORD *)&v35 + 1) = a1;
      v12 = (struct tagWND **)(v11 + 16);
      v13 = (char **)(v11 + 24);
      *(_QWORD *)(v11 + 64) = 0LL;
      *(_QWORD *)(v11 + 48) = xxxTrackBox;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      HMAssignmentLock(&v35);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = v11;
      v14 = *(_DWORD *)v11 & 0xFFFFFFFB | (v37 == 0 ? 4 : 0);
      *(_DWORD *)v11 = v14;
      if ( (v14 & 4) != 0 )
      {
        *(_QWORD *)&v35 = v11 + 16;
        *((_QWORD *)&v35 + 1) = a1;
        HMAssignmentLock(&v35);
        v15 = 2 * *(_DWORD *)(v9 + 8);
        *(_QWORD *)&v35 = v11 + 24;
        *(_DWORD *)v11 ^= (*(_DWORD *)v11 ^ v15) & 2;
        *((_QWORD *)&v35 + 1) = *((_QWORD *)a1 + 13);
        HMAssignmentLock(&v35);
        v16 = *(unsigned int *)(v9 + 12);
        v17 = 2;
        v36 = *(_DWORD *)(v9 + 12);
        v18 = (int *)(v9 + 16);
      }
      else
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = (unsigned __int16)(WORD1(a2) - *(_WORD *)(v19 + 92)) << 16;
        if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
          v21 = (unsigned __int16)(*(_WORD *)(v19 + 96) - a2);
        else
          v21 = (unsigned __int16)(a2 - *(_WORD *)(v19 + 88));
        *(_QWORD *)&v35 = v11 + 24;
        *((_QWORD *)&v35 + 1) = a1;
        LODWORD(a2) = v20 | v21;
        HMAssignmentLock(&v35);
        v35 = (unsigned __int64)v12;
        HMAssignmentLock(&v35);
        v22 = *(_DWORD *)v11 ^ (*(_DWORD *)v11 ^ (2 * v37)) & 2;
        *(_DWORD *)v11 = v22;
        WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v22 >> 1) & 1);
        v18 = (int *)&v40;
        v16 = WndSBDisableFlags;
        v36 = WndSBDisableFlags;
        a2 = (int)a2;
        v17 = v37 != 6;
      }
      *(_DWORD *)(v11 + 88) = v17;
      *(_QWORD *)(v11 + 96) = v18;
      if ( (v16 & 3) == 3 )
        goto LABEL_26;
      v24 = *(_DWORD *)v11;
      if ( (*(_DWORD *)v11 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, v18, (v24 >> 1) & 1);
        v24 = *(_DWORD *)v11;
        v16 = v36;
      }
      v25 = &v39;
      if ( (v24 & 2) == 0 )
        v25 = (__int128 *)((char *)&v39 + 4);
      v26 = (char *)&v39 + 4;
      if ( (v24 & 2) != 0 )
      {
        v27 = a2 >> 16;
      }
      else
      {
        v26 = (char *)&v39;
        LOWORD(v27) = a2;
      }
      v28 = (__int16)v27;
      *(_DWORD *)v25 = v18[6];
      *(_DWORD *)v26 = v18[4];
      *((_DWORD *)v25 + 2) = v18[7];
      v29 = v18[5];
      *(_DWORD *)(v11 + 56) = -1;
      v36 = v28;
      *((_DWORD *)v26 + 2) = v29;
      if ( v28 >= v18[9] )
      {
        if ( v28 >= v18[10] )
        {
          if ( (v16 & 2) == 0 )
          {
            *(_DWORD *)(v11 + 56) = 1;
            *(_DWORD *)v26 = v18[10];
            goto LABEL_44;
          }
          if ( (v24 & 4) != 0 )
          {
            zzzShowCaret(*v12);
LABEL_25:
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
            if ( (unsigned __int8 *)v11 != result[89] )
              return result;
          }
LABEL_26:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = 0LL;
          HMAssignmentUnlock(v11 + 24);
          HMAssignmentUnlock(v11 + 16);
          v30 = v11 + 8;
LABEL_27:
          HMAssignmentUnlock(v30);
          return FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v11);
        }
        if ( v28 >= v18[13] )
        {
          if ( v28 < v18[12] )
            goto LABEL_40;
          *(_DWORD *)(v11 + 56) = 3;
          *(_DWORD *)v26 = v18[12];
          v31 = v18[10];
        }
        else
        {
          *(_DWORD *)(v11 + 56) = 2;
          *(_DWORD *)v26 = v18[9];
          v31 = v18[13];
        }
      }
      else
      {
        if ( (v16 & 1) != 0 )
        {
          if ( (v24 & 4) != 0 )
            goto LABEL_25;
          goto LABEL_26;
        }
        *(_DWORD *)(v11 + 56) = 0;
        v31 = v18[9];
      }
      *((_DWORD *)v26 + 2) = v31;
LABEL_44:
      while ( 1 )
      {
        if ( v38 != 1 )
          goto LABEL_47;
        v34 = *(_DWORD *)(v11 + 56);
        if ( !v34 )
          break;
        if ( v34 == 1 )
        {
LABEL_47:
          if ( v38 != 2 )
            break;
        }
        if ( *(_DWORD *)(v11 + 56) == 4 )
        {
          *(_DWORD *)(v11 + 72) = v18[8] / -2;
          break;
        }
LABEL_40:
        if ( v18[10] - v18[9] <= v18[8] )
          goto LABEL_26;
        *(_DWORD *)(v11 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v11, (__int64)v26, (__int64)v25, v16);
        *(_QWORD *)(v11 + 48) = xxxTrackThumb;
        v32 = v18[13];
        v18[11] = v32;
        *(_DWORD *)(v11 + 76) = v32;
        v33 = v18[3];
        *(_DWORD *)(v11 + 80) = v33;
        *(_DWORD *)(v11 + 84) = v33;
        *(_DWORD *)(v11 + 72) = v18[11] - v36;
        xxxCapture(gptiCurrent, a1, 3);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v11 == result[89] )
        {
          v26 = *v13;
          if ( !*v13 )
            continue;
          xxxDoScroll(
            *(struct tagWND **)(v11 + 16),
            (struct tagWND *)v26,
            5LL,
            *(unsigned int *)(v11 + 80),
            (*(_DWORD *)v11 >> 1) & 1);
          result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
          if ( (unsigned __int8 *)v11 == result[89] )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, a1, 3);
      result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
      if ( (unsigned __int8 *)v11 == result[89] )
      {
        if ( *(_DWORD *)(v11 + 56) != 4 )
          *(_OWORD *)(v11 + 32) = v39;
        xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v18);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        v11 = (__int64)result[89];
        if ( v11 )
        {
          result[89] = 0LL;
          HMAssignmentUnlock(v11 + 24);
          HMAssignmentUnlock(v11 + 16);
          v30 = v11 + 8;
          goto LABEL_27;
        }
      }
    }
  }
  return result;
}
