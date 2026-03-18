/*
 * XREFs of xxxCalcClientRect @ 0x1C0022534
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C01FBBF0 (xxxUpdateClientRect.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0022390 (GetWindowBordersWithDpiAwareness.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0026380 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall xxxCalcClientRect(_QWORD *a1, _DWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // r14d
  int WindowBordersWithDpiAwareness; // eax
  unsigned int v14; // r14d
  int v15; // r15d
  int v16; // edi
  int v17; // esi
  int v18; // edx
  __int64 v19; // rdx
  bool v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  unsigned int v28; // r13d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rbx
  __int64 *v40; // rax
  _QWORD *result; // rax
  __int64 v42; // [rsp+30h] [rbp-50h]
  __int128 v43; // [rsp+38h] [rbp-48h]
  __int64 *v45; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int64 v48; // [rsp+60h] [rbp-20h] BYREF
  __int64 v49; // [rsp+68h] [rbp-18h]
  char v50; // [rsp+C0h] [rbp+40h]
  int v52; // [rsp+D8h] [rbp+58h]
  int DpiDependentMetric; // [rsp+D8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v46 = 0LL;
  v45 = (__int64 *)gSmartObjNullRef;
  v46 = *(_QWORD *)(v6 + 1456);
  *(_QWORD *)(v6 + 1456) = &v46;
  v8 = a1[5];
  v47 = 0LL;
  v50 = *(_BYTE *)(v8 + 16) & 0xF;
  SetOrClrWF(0LL, a1, 15LL, 1LL);
  SetOrClrWF(0LL, a1, 1040LL, 1LL);
  v10 = a1[5];
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v11 = HIDWORD(*(_QWORD *)a2);
    v12 = HIDWORD(*(_QWORD *)a2);
    v43 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(v10 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1LL, a1, 8LL, 1LL);
      v12 = GetCaptionHeight(a1) + v11;
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
    v14 = v12 + WindowBordersWithDpiAwareness;
    v15 = v43 + WindowBordersWithDpiAwareness;
    v52 = WindowBordersWithDpiAwareness;
    v16 = DWORD2(v43) - WindowBordersWithDpiAwareness;
    v17 = HIDWORD(v43) - WindowBordersWithDpiAwareness;
    LODWORD(v43) = v43 + WindowBordersWithDpiAwareness;
    DWORD2(v43) -= WindowBordersWithDpiAwareness;
    v18 = v14;
    DWORD1(v43) = v14;
    HIDWORD(v43) -= WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0xC0) != 0x40 )
    {
      v19 = a1[18];
      v47 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v45, v19);
      v20 = v47 || *v45 != 0;
      v18 = v14;
      if ( v20 )
      {
        SetOrClrWF(1LL, a1, 1LL, 1LL);
        v18 = v14;
        if ( !a3 )
        {
          v21 = v47;
          v42 = v47;
          if ( !v47 )
          {
            v21 = *v45;
            v42 = *v45;
          }
          *(_DWORD *)(*(_QWORD *)(v21 + 40) + 40LL) |= 0x200u;
          v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v48 = *(_QWORD *)(v22 + 408);
          *(_QWORD *)(v22 + 408) = &v48;
          v49 = v42;
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
          v14 += xxxMenuBarCompute((__int64)&v45, (__int64)a1, v14 - (unsigned int)v11, v52, v16 - v15);
          DWORD1(v43) = v14;
          v23 = *(_QWORD *)(v49 + 40);
          *(_DWORD *)(v23 + 40) &= ~0x200u;
          ThreadUnlock1(v23, v24, v25);
          v18 = v14;
        }
      }
    }
    v26 = 0;
    if ( v18 >= v17 )
    {
      v17 = v14;
      HIDWORD(v43) = v14;
      v26 = 1;
    }
    v9 = a1[5];
    if ( (*(_BYTE *)(v9 + 21) & 2) != 0 && v15 >= v16 )
    {
      v16 = v15;
      DWORD2(v43) = v15;
      v26 = 1;
    }
    if ( !v26 )
    {
      v27 = a1[5];
      if ( (*(_BYTE *)(v9 + 25) & 2) != 0 && v16 - v15 >= 4 && (int)(v17 - v14) >= 4 )
      {
        SetOrClrWF(1LL, a1, 1040LL, 1LL);
        v27 = a1[5];
        v15 += 2;
        v16 -= 2;
        LODWORD(v43) = v15;
        v14 += 2;
        v17 -= 2;
        *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(v16, v14);
        HIDWORD(v43) = v17;
      }
      v28 = 96;
      if ( (*(_BYTE *)(v27 + 30) & 0x10) != 0
        && ((*(_DWORD *)(v27 + 232) & 0x8000000) == 0
          ? ((*(_DWORD *)(v27 + 288) & 0xF) != 0
          || (v30 = *(_QWORD *)(a1[2] + 448LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v30 + 8) + 52LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 416LL) + 284LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify(a1)),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify),
            (int)(v17 - v14) > DpiDependentMetric) )
      {
        SetOrClrWF(1LL, a1, 4LL, 1LL);
        v31 = a3;
        if ( !a3 )
          HIDWORD(v43) = v17 - DpiDependentMetric;
      }
      else
      {
        v31 = a3;
      }
      v32 = a1[5];
      if ( (*(_BYTE *)(v32 + 30) & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
        {
          v28 = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(v32 + 288) & 0xF) != 0
               || (v33 = *(_QWORD *)(a1[2] + 448LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 52LL) & 1) == 0 )
        {
          v28 = *(unsigned __int16 *)(*(_QWORD *)(a1[2] + 416LL) + 284LL);
        }
        v34 = GetDpiDependentMetric(0LL, v28);
        if ( v16 - v15 >= v34 )
        {
          SetOrClrWF(1LL, a1, 2LL, 1LL);
          if ( !v31 )
          {
            v35 = a1[5];
            v36 = *(unsigned __int8 *)(v35 + 25);
            v9 = v36 ^ (unsigned int)*(unsigned __int8 *)(v35 + 26);
            if ( (((unsigned __int8)v36 ^ *(_BYTE *)(v35 + 26)) & 0x40) != 0 )
              LODWORD(v43) = v34 + v15;
            else
              DWORD2(v43) = v16 - v34;
          }
        }
      }
    }
    *(_OWORD *)a2 = v43;
  }
  v37 = a1[5];
  if ( v50 != (*(_BYTE *)(v37 + 16) & 0xF) && *(char *)(v37 + 23) < 0 )
    xxxWindowEvent(0x8004u, (__int64)a1, 0, 0, 1);
  v38 = KeGetCurrentThread();
  v39 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v9) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v40 )
      v39 = *v40;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v45);
  result = *(_QWORD **)(v39 + 1456);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v39 + 1456) = result;
  }
  return result;
}
