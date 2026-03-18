/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0020584
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C0020290 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00B9EE0 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01B8CA0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01B8D20 (_ScaleSystemMetricForDPIWithoutCache.c)
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
  __int64 v16; // r8
  int v17; // r14d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r12d
  unsigned int v21; // r11d
  int DpiDependentMetric; // eax
  int v23; // r15d
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  char v33; // cl
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  char v37; // cl
  int v38; // eax
  int v39; // eax
  char *v40; // rcx
  unsigned int v41; // [rsp+60h] [rbp+8h]

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
             && (v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
      {
        v7 = 96;
      }
      else
      {
        v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v9 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v10 = *((_QWORD *)a1 + 5);
      CurrentThread = KeGetCurrentThread();
      v12 = *(_DWORD *)(v10 + 24);
      v41 = *(_DWORD *)(v10 + 28);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
      }
      v15 = 0;
      if ( *(_DWORD *)(v9 + 632) <= 0x9900u )
        v15 = *(_DWORD *)(v9 + 648);
      v16 = 1LL;
      if ( (v12 & 0x100) != 0 )
        v17 = 2;
      else
        v17 = (v12 & 0x20000) != 0;
      v18 = v41;
      v19 = v41 & 0xC00000;
      if ( (v41 & 0xC00000) != 0 || (v12 & 1) != 0 )
        ++v17;
      if ( (v15 & 0x10000000) != 0 || (v15 & 0x20000000) != 0 )
      {
        v20 = 0;
      }
      else
      {
        v13 = gpsi;
        if ( v7 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v20 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v7 == 96 )
        {
          v20 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v7, v41, 1LL) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v21, v7);
          else
            DpiDependentMetric = GetDpiDependentMetric(v21, v7);
          v18 = v41;
          v16 = 1LL;
          v20 = DpiDependentMetric;
        }
        v19 = v41 & 0xC00000;
      }
      if ( (v18 & 0x40000) != 0
        || v20 > 0
        && (LOBYTE(v13) = v19 != 12582912, v19 == 12582912 || (v18 & 0x40000) != 0)
        && (v15 & 0x30000000) == 0 )
      {
        if ( (v15 & 0x10000000) != 0 )
        {
          v23 = 1;
        }
        else
        {
          v24 = v7 * *(_DWORD *)(Get96DpiServerInfo(v13, v18, 1LL) + 4) + 48;
          LODWORD(v18) = (unsigned __int64)(715827883LL * v24) >> 32;
          v23 = v24 / 96;
          if ( (v15 & 0x20000000) != 0 )
          {
            if ( v7 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v25 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v7 == 96 )
            {
              v25 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v7, v18, v16) == -1 )
            {
              v25 = ScaleSystemMetricForDPIWithoutCache(29LL, v7);
            }
            else
            {
              v25 = GetDpiDependentMetric(29LL, v7);
            }
            v23 += v25;
          }
        }
        v17 += v20 + v23;
      }
      *((_DWORD *)a2 + 1) += v17;
      *((_DWORD *)a2 + 3) -= v17;
      *((_DWORD *)a2 + 2) += v17;
      *((_DWORD *)a2 + 4) -= v17;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
      {
        v27 = 120LL * (int)GetDpiCacheSlot(v7, v18, v16);
        v28 = *(_DWORD *)(v27 + gpsi + 2292);
        if ( v28 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v7);
          v28 = *(_DWORD *)(v27 + gpsi + 2292);
          if ( v28 == -1 )
            v28 = 0;
        }
        v26 = v28 + *((_DWORD *)a2 + 2);
      }
      else
      {
        v26 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v7);
      }
      *((_DWORD *)a2 + 4) = v26;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v29 = *((_DWORD *)a2 + 4);
        v30 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v30 - v29 + 1;
        else
          *((_DWORD *)a2 + 1) += v29 - v30 - 1;
      }
      v31 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v31 + 30) & 8) != 0 || (*(_BYTE *)(v31 + 21) & 2) == 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v32 = *((_QWORD *)a1 + 5);
      v33 = *(_BYTE *)(v32 + 30);
      if ( (v33 & 8) != 0 || (*(_BYTE *)(v32 + 21) & 2) == 0 )
      {
        if ( (v33 & 1) == 0 )
        {
          v34 = *((_DWORD *)a2 + 8);
          if ( (v33 & 2) != 0 )
            v35 = v34 | 1;
          else
            v35 = v34 | 0x8000;
          *((_DWORD *)a2 + 8) = v35;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v36 = *((_QWORD *)a1 + 5);
      v37 = *(_BYTE *)(v36 + 30);
      if ( (v37 & 8) != 0 || (*(_BYTE *)(v36 + 21) & 2) == 0 )
      {
        if ( (v37 & 2) == 0 )
        {
          v38 = *((_DWORD *)a2 + 7);
          if ( (v37 & 1) != 0 )
            v39 = v38 | 1;
          else
            v39 = v38 | 0x8000;
          *((_DWORD *)a2 + 7) = v39;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v40 = (char *)*((_QWORD *)a1 + 5);
      if ( (v40[25] & 4) == 0 || (v40[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v40[21] < 0 )
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
