/*
 * XREFs of IopAddPageDumpRange @ 0x140295FC4
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1402965B4 (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     IoSetDumpRange @ 0x140295270 (IoSetDumpRange.c)
 *     IoSetDumpRangeForPartialKernelDump @ 0x14029C8A0 (IoSetDumpRangeForPartialKernelDump.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  __int64 result; // rax
  char v8; // r14
  unsigned __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  _QWORD v17[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v4 & 0xFF0;
  v6 = v5 ^ v4;
  *(_DWORD *)(a1 + 8) = v6;
  if ( (v6 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v6 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    v6 &= ~0x80000000;
    v8 = 1;
    *(_DWORD *)(a1 + 8) = v6;
  }
  if ( ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
    return 0LL;
  v10 = (v6 & 1) == 0;
  v11 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  if ( v10 )
    v5 |= 2u;
  v17[3] = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v15 = *(_QWORD *)(v11 + 48);
  v16 = v11 + 56;
  v17[2] = &v15;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
  {
    v19 = 0LL;
    DWORD2(v18) |= 3u;
    v12 = RtlNumberOfSetBitsEx(&v15);
    v13 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(CrashdmpDumpBlock + 1424) - v12;
    v14 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v18 = &v19;
    result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))IoSetDumpRangeForPartialKernelDump)(
               v17,
               v14,
               v13,
               v5,
               v15,
               v16);
  }
  else
  {
    result = IoSetDumpRange((__int64)v17, *(char **)(a1 + 16), v9, v5);
  }
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v8;
  }
  return result;
}
