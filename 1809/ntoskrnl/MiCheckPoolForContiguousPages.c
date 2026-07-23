/*
 * XREFs of MiCheckPoolForContiguousPages @ 0x140164514
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiPhysicalPoolCheck @ 0x140164648 (MiPhysicalPoolCheck.c)
 */

__int64 MiCheckPoolForContiguousPages(__int128 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4, ...)
{
  unsigned __int64 v4; // xmm0_8
  unsigned __int64 v5; // rbx
  __int64 *v6; // r14
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 i; // r8
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v21; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v5 = a3 >> 9;
  v6 = a4;
  v17 = *a1;
  v4 = v17;
  *(_QWORD *)&v17 = 512LL;
  v8 = (a3 >> 9 << 9) + v19;
  v9 = (a3 >> 9 << 6) + *((_QWORD *)&v17 + 1);
  for ( i = a3 & 0x1FF; ; i = 0LL )
  {
    *((_QWORD *)&v17 + 1) = v9;
    if ( v5 >= v4 >> 9 )
      break;
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v17, i, i, (unsigned __int64 *)va);
      v12 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v13 = v19;
      if ( NextForwardRunClearCapped >= a2 )
      {
        v14 = MiPhysicalPoolCheck(v19, v8, NextForwardRunClearCapped, a2, v6[1], v6[2], v6[3], v21);
        v15 = v14;
        if ( v14 != -1LL )
        {
          RtlSetBitsEx((__int64)&v17, v14, a2);
          return v15 + v8;
        }
        v6 = a4;
      }
      i = v13 + v12;
    }
    v9 += 64LL;
    v8 += 512LL;
    ++v5;
  }
  return -1LL;
}
