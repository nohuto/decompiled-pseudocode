/*
 * XREFs of MNPositionSysMenu @ 0x1C012D1EC
 * Callers:
 *     xxxSetSystemMenu @ 0x1C012D17C (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 */

struct _NT_TIB *__fastcall MNPositionSysMenu(__int64 a1, struct _NT_TIB *a2)
{
  __int64 v3; // rax
  int v4; // r14d
  unsigned int v5; // edi
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rax
  int WindowBordersForDpi; // eax
  struct _NT_TIB *result; // rax
  _DWORD *ArbitraryUserPointer; // rdx
  struct _NT_TIB **FiberData; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v25; // rax
  int DpiDependentMetric; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD v29[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return UserSetLastError(6LL, 0LL);
  if ( (PVOID)a1 != a2[1].SubSystemTib )
  {
    v29[0] = (char *)a2 + 80;
    v29[1] = a1;
    HMAssignmentLock(v29);
  }
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  v5 = 96;
  v6 = *(_DWORD *)(v3 + 232);
  if ( *(char *)(v3 + 24) < 0 )
  {
    if ( (v6 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v3 + 288) & 0xF) == 0
           && (v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    v27 = *(_QWORD *)(a1 + 40);
    v11 = DpiDependentMetric;
    if ( (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
    {
      v13 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v27 + 288) & 0xF) == 0
           && (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 52LL) & 1) != 0 )
    {
      v13 = 96;
    }
    else
    {
      v13 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v14 = 24LL;
  }
  else
  {
    if ( (v6 & 0x8000000) != 0 )
    {
      v8 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v3 + 288) & 0xF) == 0
           && (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 52LL) & 1) != 0 )
    {
      v8 = 96;
    }
    else
    {
      v8 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v9 = GetDpiDependentMetric(12LL, v8);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = v9;
    if ( (*(_DWORD *)(v10 + 232) & 0x8000000) != 0 )
    {
      v13 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v10 + 288) & 0xF) == 0
           && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
    {
      v13 = 96;
    }
    else
    {
      v13 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v14 = 13LL;
  }
  v15 = GetDpiDependentMetric(v14, v13);
  v17 = *(_QWORD *)(a1 + 40);
  v18 = v15;
  if ( (*(_BYTE *)(v17 + 31) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(v17 + 232) & 0x8000000) != 0 )
    {
      v5 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v17 + 288) & 0xF) != 0
           || (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 52LL) & 1) == 0 )
    {
      v5 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    WindowBordersForDpi = GetWindowBordersForDpi(*(_DWORD *)(v17 + 28), *(_DWORD *)(v17 + 24), v17, v16, v5);
    v11 += WindowBordersForDpi;
    v4 = WindowBordersForDpi;
    v18 += WindowBordersForDpi;
  }
  result = a2;
  ArbitraryUserPointer = a2->ArbitraryUserPointer;
  if ( (ArbitraryUserPointer[10] & 0x10) == 0 && ArbitraryUserPointer[11] )
  {
    FiberData = (struct _NT_TIB **)a2[1].FiberData;
    if ( FiberData )
    {
      HIDWORD((*FiberData)[1].StackBase) = v4;
      LODWORD((*FiberData)[1].StackBase) = v4;
      HIDWORD((*FiberData)[1].StackLimit) = v18 - v4;
      result = *FiberData;
      LODWORD((*FiberData)[1].StackLimit) = v11 - v4;
    }
  }
  return result;
}
