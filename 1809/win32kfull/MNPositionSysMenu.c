/*
 * XREFs of MNPositionSysMenu @ 0x1C014D710
 * Callers:
 *     xxxSetSystemMenu @ 0x1C014D6A0 (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 */

struct _NT_TIB *__fastcall MNPositionSysMenu(__int64 a1, struct _NT_TIB *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // r14d
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // esi
  __int64 v22; // rax
  int WindowBordersForDpi; // eax
  struct _NT_TIB *result; // rax
  _DWORD *ArbitraryUserPointer; // rdx
  struct _NT_TIB **FiberData; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v28; // rax
  int DpiDependentMetric; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD v32[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return UserSetLastError(6LL, 0LL, a3, a4);
  if ( (PVOID)a1 != a2[1].SubSystemTib )
  {
    v32[0] = (char *)a2 + 80;
    v32[1] = a1;
    HMAssignmentLock(v32);
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0;
  v7 = 96;
  v8 = *(_DWORD *)(v5 + 232);
  if ( *(char *)(v5 + 24) < 0 )
  {
    if ( (v8 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v5 + 288) & 0xF) == 0
           && (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify, a3);
    v30 = *(_QWORD *)(a1 + 40);
    v14 = DpiDependentMetric;
    if ( (*(_DWORD *)(v30 + 232) & 0x8000000) != 0 )
    {
      v16 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v30 + 288) & 0xF) == 0
           && (v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 64LL) & 1) != 0 )
    {
      v16 = 96;
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v17 = 24LL;
  }
  else
  {
    if ( (v8 & 0x8000000) != 0 )
    {
      v10 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v5 + 288) & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v11 = GetDpiDependentMetric(12LL, v10, a3);
    v13 = *(_QWORD *)(a1 + 40);
    v14 = v11;
    if ( (*(_DWORD *)(v13 + 232) & 0x8000000) != 0 )
    {
      v16 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v13 + 288) & 0xF) == 0
           && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 64LL) & 1) != 0 )
    {
      v16 = 96;
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v17 = 13LL;
  }
  v18 = GetDpiDependentMetric(v17, v16, v12);
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v18;
  if ( (*(_BYTE *)(v20 + 31) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
    {
      v7 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v20 + 288) & 0xF) != 0
           || (v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(v20 + 28), *(_DWORD *)(v20 + 24), v20, v19, v7);
    v14 += WindowBordersForDpi;
    v6 = WindowBordersForDpi;
    v21 += WindowBordersForDpi;
  }
  result = a2;
  ArbitraryUserPointer = a2->ArbitraryUserPointer;
  if ( (ArbitraryUserPointer[10] & 0x10) == 0 && ArbitraryUserPointer[11] )
  {
    FiberData = (struct _NT_TIB **)a2[1].FiberData;
    if ( FiberData )
    {
      HIDWORD((*FiberData)[1].StackBase) = v6;
      LODWORD((*FiberData)[1].StackBase) = v6;
      HIDWORD((*FiberData)[1].StackLimit) = v21 - v6;
      result = *FiberData;
      LODWORD((*FiberData)[1].StackLimit) = v14 - v6;
    }
  }
  return result;
}
