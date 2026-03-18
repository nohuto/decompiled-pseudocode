/*
 * XREFs of MNPositionSysMenu @ 0x1C01549AC
 * Callers:
 *     xxxSetSystemMenu @ 0x1C015493C (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 */

__int64 __fastcall MNPositionSysMenu(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v7; // ebp
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v25; // rax
  int DpiDependentMetric; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD v29[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6LL, 0LL, a3, a4);
  if ( a1 != a2[10] )
  {
    v29[0] = a2 + 10;
    v29[1] = a1;
    HMAssignmentLock(v29);
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = 0;
  v8 = 96;
  if ( *(char *)(v6 + 24) < 0 )
  {
    if ( __CFSHR__(*(_DWORD *)(v6 + 232), 28) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v6 + 288) & 0xF) == 0
           && (v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    v27 = *(_QWORD *)(a1 + 40);
    v13 = DpiDependentMetric;
    if ( (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v27 + 288) & 0xF) == 0
           && (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v16 = 24LL;
  }
  else
  {
    if ( __CFSHR__(*(_DWORD *)(v6 + 232), 28) )
    {
      v10 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v6 + 288) & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      v10 = 96;
    }
    else
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v11 = GetDpiDependentMetric(12LL, v10);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v11;
    if ( (*(_DWORD *)(v12 + 232) & 0x8000000) != 0 )
    {
      v15 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v12 + 288) & 0xF) == 0
           && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
    {
      v15 = 96;
    }
    else
    {
      v15 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v16 = 13LL;
  }
  result = GetDpiDependentMetric(v16, v15);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = result;
  if ( (*(_BYTE *)(v19 + 31) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(v19 + 232) & 0x8000000) != 0 )
    {
      v8 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v19 + 288) & 0xF) != 0
           || (v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 64LL) & 1) == 0 )
    {
      v8 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(v19 + 28), *(unsigned int *)(v19 + 24), v19, v18, v8);
    v13 += result;
    v7 = result;
    v20 += result;
  }
  v22 = a2[5];
  if ( (*(_DWORD *)(v22 + 40) & 0x10) == 0 && *(_DWORD *)(v22 + 44) )
  {
    v23 = (__int64 *)a2[11];
    if ( v23 )
    {
      *(_DWORD *)(*v23 + 68) = v7;
      *(_DWORD *)(*v23 + 64) = v7;
      *(_DWORD *)(*v23 + 76) = v20 - v7;
      result = *v23;
      *(_DWORD *)(*v23 + 72) = v13 - v7;
    }
  }
  return result;
}
