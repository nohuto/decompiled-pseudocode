/*
 * XREFs of xxxCalcClientRect @ 0x1C0068CE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C0224670 (xxxUpdateClientRect.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0065E94 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     GetCaptionHeight @ 0x1C00A7388 (GetCaptionHeight.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x1C00ACA90 (xxxMenuBarCompute.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall xxxCalcClientRect(__int64 a1, _DWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // r14d
  int WindowBordersWithDpiAwareness; // eax
  __int64 v15; // r8
  unsigned int v16; // r14d
  int v17; // r15d
  signed int v18; // edi
  int v19; // esi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rcx
  unsigned int v27; // r13d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rbx
  __int64 *v39; // rax
  _QWORD *result; // rax
  __int64 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+38h] [rbp-48h]
  __int64 *v44; // [rsp+48h] [rbp-38h] BYREF
  __int64 v45; // [rsp+50h] [rbp-30h] BYREF
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp-20h] BYREF
  __int64 v48; // [rsp+68h] [rbp-18h]
  char v49; // [rsp+C0h] [rbp+40h]
  int v51; // [rsp+D8h] [rbp+58h]
  int DpiDependentMetric; // [rsp+D8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v45 = 0LL;
  v44 = (__int64 *)gSmartObjNullRef;
  v45 = *(_QWORD *)(v6 + 1448);
  *(_QWORD *)(v6 + 1448) = &v45;
  v8 = *(_QWORD *)(a1 + 40);
  v46 = 0LL;
  v49 = *(_BYTE *)(v8 + 16) & 0xF;
  SetOrClrWF(0, a1, 0xFu, 1);
  SetOrClrWF(0, a1, 0x410u, 1);
  v11 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v11 + 31) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v12 = HIDWORD(*(_QWORD *)a2);
    v13 = HIDWORD(*(_QWORD *)a2);
    v42 = *(_OWORD *)a2;
    if ( (*(_BYTE *)(v11 + 30) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, a1, 8u, 1);
      v13 = GetCaptionHeight(a1) + v12;
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v9, v10);
    v16 = v13 + WindowBordersWithDpiAwareness;
    v17 = v42 + WindowBordersWithDpiAwareness;
    v51 = WindowBordersWithDpiAwareness;
    v18 = DWORD2(v42) - WindowBordersWithDpiAwareness;
    v19 = HIDWORD(v42) - WindowBordersWithDpiAwareness;
    LODWORD(v42) = v42 + WindowBordersWithDpiAwareness;
    DWORD2(v42) -= WindowBordersWithDpiAwareness;
    v20 = v16;
    DWORD1(v42) = v16;
    HIDWORD(v42) -= WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      v46 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v44);
      if ( v46 || (v20 = v16, *v44) )
      {
        SetOrClrWF(1, a1, 1u, 1);
        v20 = v16;
        if ( !a3 )
        {
          v21 = v46;
          v41 = v46;
          if ( !v46 )
          {
            v21 = *v44;
            v41 = *v44;
          }
          *(_DWORD *)(*(_QWORD *)(v21 + 40) + 40LL) |= 0x200u;
          v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
          v47 = *(_QWORD *)(v22 + 416);
          *(_QWORD *)(v22 + 416) = &v47;
          v48 = v41;
          _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
          v16 += xxxMenuBarCompute((unsigned int)&v44, a1, v16 - (unsigned int)v12, v51, v18 - v17);
          DWORD1(v42) = v16;
          v23 = *(_QWORD *)(v48 + 40);
          *(_DWORD *)(v23 + 40) &= ~0x200u;
          ThreadUnlock1(v23, v24);
          v20 = v16;
        }
      }
    }
    v25 = 0;
    if ( v20 >= v19 )
    {
      v19 = v16;
      HIDWORD(v42) = v16;
      v25 = 1;
    }
    v9 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v9 + 21) & 2) != 0 && v17 >= v18 )
    {
      v18 = v17;
      DWORD2(v42) = v17;
      v25 = 1;
    }
    if ( !v25 )
    {
      v26 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v9 + 25) & 2) != 0 && v18 - v17 >= 4 && (int)(v19 - v16) >= 4 )
      {
        SetOrClrWF(1, a1, 0x410u, 1);
        v26 = *(_QWORD *)(a1 + 40);
        v17 += 2;
        v18 -= 2;
        LODWORD(v42) = v17;
        v16 += 2;
        v19 -= 2;
        *(_QWORD *)((char *)&v42 + 4) = __PAIR64__(v18, v16);
        HIDWORD(v42) = v19;
      }
      v27 = 96;
      if ( (*(_BYTE *)(v26 + 30) & 0x10) != 0
        && ((*(_DWORD *)(v26 + 232) & 0x8000000) == 0
          ? ((*(_DWORD *)(v26 + 288) & 0xF) != 0
          || (v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify(a1)),
            DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify, v15),
            (int)(v19 - v16) > DpiDependentMetric) )
      {
        SetOrClrWF(1, a1, 4u, 1);
        v30 = a3;
        if ( !a3 )
          HIDWORD(v42) = v19 - DpiDependentMetric;
      }
      else
      {
        v30 = a3;
      }
      v31 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v31 + 30) & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(v31 + 232) & 0x8000000) != 0 )
        {
          v27 = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(v31 + 288) & 0xF) != 0
               || (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v32 + 8) + 64LL) & 1) == 0 )
        {
          v27 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
        }
        v33 = GetDpiDependentMetric(0LL, v27, v15);
        if ( v18 - v17 >= v33 )
        {
          SetOrClrWF(1, a1, 2u, 1);
          if ( !v30 )
          {
            v34 = *(_QWORD *)(a1 + 40);
            v35 = *(unsigned __int8 *)(v34 + 25);
            v9 = v35 ^ (unsigned int)*(unsigned __int8 *)(v34 + 26);
            if ( (((unsigned __int8)v35 ^ *(_BYTE *)(v34 + 26)) & 0x40) != 0 )
              LODWORD(v42) = v33 + v17;
            else
              DWORD2(v42) = v18 - v33;
          }
        }
      }
    }
    *(_OWORD *)a2 = v42;
  }
  v36 = *(_QWORD *)(a1 + 40);
  if ( v49 != (*(_BYTE *)(v36 + 16) & 0xF) && *(char *)(v36 + 23) < 0 )
    xxxWindowEvent(0x8004u, a1, 0, 0, 1u);
  v37 = KeGetCurrentThread();
  v38 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v9) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v39 )
      v38 = *v39;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v44);
  result = *(_QWORD **)(v38 + 1448);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v38 + 1448) = result;
  }
  return result;
}
