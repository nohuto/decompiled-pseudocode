/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 *     NtUserGetTitleBarInfo @ 0x1C00A5EE0 (NtUserGetTitleBarInfo.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCCB0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCD30 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v14; // r15d
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  int v17; // r13d
  int v18; // r14d
  __int64 v19; // rdx
  int v20; // eax
  int v21; // r12d
  unsigned int v22; // r11d
  int DpiDependentMetric; // eax
  int v24; // r15d
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

  v6 = *((unsigned int *)a2 + 5);
  LODWORD(v6) = v6 | 0x100000;
  *((_DWORD *)a2 + 5) = v6;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0 || (*(_BYTE *)(v7 + 16) & 8) != 0 )
    {
      if ( (*(_DWORD *)(v7 + 232) & 0x8000000) != 0 )
      {
        v8 = *(_WORD *)(v7 + 286);
        if ( !v8 )
          v8 = *(_WORD *)(v7 + 284);
        v9 = v8;
      }
      else if ( (*(_DWORD *)(v7 + 288) & 0xF) == 0
             && (v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        v9 = 96;
      }
      else
      {
        v9 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v11 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v7 + 88);
      v12 = *((_QWORD *)a1 + 5);
      CurrentThread = KeGetCurrentThread();
      v14 = *(_DWORD *)(v12 + 24);
      v41 = *(_DWORD *)(v12 + 28);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v6, v7, a4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v11 = *ThreadWin32Thread;
      }
      v17 = 0;
      if ( *(_DWORD *)(v11 + 624) <= 0x9900u )
        v17 = *(_DWORD *)(v11 + 640);
      if ( (v14 & 0x100) != 0 )
        v18 = 2;
      else
        v18 = (v14 & 0x20000) != 0;
      v19 = v41;
      v20 = v41 & 0xC00000;
      if ( (v41 & 0xC00000) != 0 || (v14 & 1) != 0 )
        ++v18;
      if ( (v17 & 0x10000000) != 0 || (v17 & 0x20000000) != 0 )
      {
        v21 = 0;
      }
      else
      {
        v15 = gpsi;
        if ( v9 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v21 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v9 == 96 )
        {
          v21 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v9) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v22, v9);
          else
            DpiDependentMetric = GetDpiDependentMetric(v22, v9);
          v19 = v41;
          v21 = DpiDependentMetric;
        }
        v20 = v41 & 0xC00000;
      }
      if ( (v19 & 0x40000) != 0
        || v21 > 0
        && (LOBYTE(v15) = v20 != 12582912, v20 == 12582912 || (v19 & 0x40000) != 0)
        && (v17 & 0x30000000) == 0 )
      {
        if ( (v17 & 0x10000000) != 0 )
        {
          v24 = 1;
        }
        else
        {
          v24 = (int)(v9 * *(_DWORD *)(Get96DpiServerInfo(v15, v19, 1LL) + 4) + 48) / 96;
          if ( (v17 & 0x20000000) != 0 )
          {
            if ( v9 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v25 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v9 == 96 )
            {
              v25 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v9) == -1 )
            {
              v25 = ScaleSystemMetricForDPIWithoutCache(29LL, v9);
            }
            else
            {
              v25 = GetDpiDependentMetric(29LL, v9);
            }
            v24 += v25;
          }
        }
        v18 += v21 + v24;
      }
      *((_DWORD *)a2 + 1) += v18;
      *((_DWORD *)a2 + 3) -= v18;
      *((_DWORD *)a2 + 2) += v18;
      *((_DWORD *)a2 + 4) -= v18;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
      {
        v27 = 120LL * (int)GetDpiCacheSlot(v9);
        v28 = *(_DWORD *)(v27 + gpsi + 2292);
        if ( v28 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v9);
          v28 = *(_DWORD *)(v27 + gpsi + 2292);
          if ( v28 == -1 )
            v28 = 0;
        }
        v26 = v28 + *((_DWORD *)a2 + 2);
      }
      else
      {
        v26 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v9);
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
      *((_DWORD *)a2 + 5) = v6 | 0x10000;
      *(_QWORD *)((char *)a2 + 4) = 0LL;
      *(_QWORD *)((char *)a2 + 12) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v6 | 0x8000;
  }
}
