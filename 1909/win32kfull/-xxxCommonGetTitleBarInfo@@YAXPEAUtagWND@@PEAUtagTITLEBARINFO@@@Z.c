/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0016514 (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x1C0046CC0 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C004A144 (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCB20 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v12; // r15d
  __int64 v13; // rcx
  __int64 *ThreadWin32Thread; // rax
  int v15; // r13d
  int v16; // r14d
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r12d
  unsigned int v20; // r11d
  int DpiDependentMetric; // eax
  int v22; // r15d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r14
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // cl
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  char v34; // cl
  int v35; // eax
  int v36; // eax
  char *v37; // rcx
  unsigned int v38; // [rsp+60h] [rbp+8h]

  v4 = *((unsigned int *)a2 + 5);
  LODWORD(v4) = v4 | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      if ( (*(_DWORD *)(v5 + 232) & 0x8000000) != 0 )
      {
        v6 = *(_WORD *)(v5 + 286);
        if ( !v6 )
          v6 = *(_WORD *)(v5 + 284);
        v7 = v6;
      }
      else if ( (*(_DWORD *)(v5 + 288) & 0xF) == 0
             && (v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
      {
        v7 = 96;
      }
      else
      {
        v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v9 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v10 = *((_QWORD *)a1 + 5);
      CurrentThread = KeGetCurrentThread();
      v12 = *(_DWORD *)(v10 + 24);
      v38 = *(_DWORD *)(v10 + 28);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v4, v5) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
      }
      v15 = 0;
      if ( *(_DWORD *)(v9 + 624) <= 0x9900u )
        v15 = *(_DWORD *)(v9 + 640);
      if ( (v12 & 0x100) != 0 )
        v16 = 2;
      else
        v16 = (v12 & 0x20000) != 0;
      v17 = v38;
      v18 = v38 & 0xC00000;
      if ( (v38 & 0xC00000) != 0 || (v12 & 1) != 0 )
        ++v16;
      if ( (v15 & 0x10000000) != 0 || (v15 & 0x20000000) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v13 = gpsi;
        if ( v7 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v19 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v7 == 96 )
        {
          v19 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v7) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v20, v7);
          else
            DpiDependentMetric = GetDpiDependentMetric(v20, v7);
          v17 = v38;
          v19 = DpiDependentMetric;
        }
        v18 = v38 & 0xC00000;
      }
      if ( (v17 & 0x40000) != 0
        || v19 > 0
        && (LOBYTE(v13) = v18 != 12582912, v18 == 12582912 || (v17 & 0x40000) != 0)
        && (v15 & 0x30000000) == 0 )
      {
        if ( (v15 & 0x10000000) != 0 )
        {
          v22 = 1;
        }
        else
        {
          v22 = (int)(v7 * *(_DWORD *)(Get96DpiServerInfo(v13, v17, 1LL) + 4) + 48) / 96;
          if ( (v15 & 0x20000000) != 0 )
          {
            if ( v7 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v23 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v7 == 96 )
            {
              v23 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v7) == -1 )
            {
              v23 = ScaleSystemMetricForDPIWithoutCache(29LL, v7);
            }
            else
            {
              v23 = GetDpiDependentMetric(29LL, v7);
            }
            v22 += v23;
          }
        }
        v16 += v19 + v22;
      }
      *((_DWORD *)a2 + 1) += v16;
      *((_DWORD *)a2 + 3) -= v16;
      *((_DWORD *)a2 + 2) += v16;
      *((_DWORD *)a2 + 4) -= v16;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
      {
        v26 = 120LL * (int)GetDpiCacheSlot(v7);
        v25 = *(unsigned int *)(v26 + gpsi + 2292);
        if ( (_DWORD)v25 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v7);
          v25 = *(unsigned int *)(v26 + gpsi + 2292);
          if ( (_DWORD)v25 == -1 )
            v25 = 0LL;
        }
        v24 = v25 + *((_DWORD *)a2 + 2);
      }
      else
      {
        v24 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v7);
      }
      *((_DWORD *)a2 + 4) = v24;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v27 = *((_DWORD *)a2 + 4);
        v25 = *((unsigned int *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
        {
          v25 = (unsigned int)(v25 - v27 + 1);
          *((_DWORD *)a2 + 3) += v25;
        }
        else
        {
          *((_DWORD *)a2 + 1) += v27 - v25 - 1;
        }
      }
      v28 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v28 + 30) & 8) != 0 || (*(_BYTE *)(v28 + 21) & 2) == 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1, v25) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v29 = *((_QWORD *)a1 + 5);
      v30 = *(_BYTE *)(v29 + 30);
      if ( (v30 & 8) != 0 || (*(_BYTE *)(v29 + 21) & 2) == 0 )
      {
        if ( (v30 & 1) == 0 )
        {
          v31 = *((_DWORD *)a2 + 8);
          if ( (v30 & 2) != 0 )
            v32 = v31 | 1;
          else
            v32 = v31 | 0x8000;
          *((_DWORD *)a2 + 8) = v32;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(_BYTE *)(v33 + 30);
      if ( (v34 & 8) != 0 || (*(_BYTE *)(v33 + 21) & 2) == 0 )
      {
        if ( (v34 & 2) == 0 )
        {
          v35 = *((_DWORD *)a2 + 7);
          if ( (v34 & 1) != 0 )
            v36 = v35 | 1;
          else
            v36 = v35 | 0x8000;
          *((_DWORD *)a2 + 7) = v36;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v37 = (char *)*((_QWORD *)a1 + 5);
      if ( (v37[25] & 4) == 0 || (v37[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v37[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v4 | 0x10000;
      *(_QWORD *)((char *)a2 + 4) = 0LL;
      *(_QWORD *)((char *)a2 + 12) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
  }
}
