/*
 * XREFs of CcGetNumberOfMappedPages @ 0x140166BB0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetVacbLargeOffset @ 0x140022BD4 (CcGetVacbLargeOffset.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CcGetNumberOfMappedPages(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  __int64 result; // rax
  __int64 *v5; // r15
  signed __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 VacbLargeOffset; // rax

  v3 = *(_QWORD **)(a1 + 8);
  result = 0LL;
  *a2 = 0LL;
  v5 = a3;
  *a3 = 0LL;
  if ( v3 )
  {
    v7 = (v3[1] + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v3 + 13), 0LL);
    if ( v7 > 0 )
    {
      v11 = v3[4];
      v12 = 0;
      do
      {
        if ( v11 <= 0x2000000 )
          VacbLargeOffset = *(_QWORD *)(v3[11] + 8 * ((unsigned __int64)v12 >> 18));
        else
          VacbLargeOffset = CcGetVacbLargeOffset((__int64)v3, v8);
        if ( VacbLargeOffset )
        {
          ++v9;
          if ( *(_WORD *)(VacbLargeOffset + 16) )
            ++v10;
        }
        v8 += 0x40000LL;
        v12 = v8;
      }
      while ( v8 < v7 );
      v5 = a3;
    }
    *a2 = v9 << 18 >> 12;
    *v5 = v10 << 18 >> 12;
    return ExReleasePushLockEx((ULONG_PTR)(v3 + 13), 0LL);
  }
  return result;
}
