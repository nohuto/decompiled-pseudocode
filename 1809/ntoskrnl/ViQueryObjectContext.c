/*
 * XREFs of ViQueryObjectContext @ 0x140928E00
 * Callers:
 *     VfQueryDeviceContext @ 0x140309E50 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140309E90 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140309ED0 (VfQueryIrpContext.c)
 *     VfQueryThreadContext @ 0x140309F10 (VfQueryThreadContext.c)
 * Callees:
 *     ViGetContextPointer @ 0x140928D34 (ViGetContextPointer.c)
 *     ViLockContextPointer @ 0x140928DBC (ViLockContextPointer.c)
 */

signed __int64 *__fastcall ViQueryObjectContext(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  signed __int64 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  volatile signed __int64 *v8; // rdi
  __int64 v9; // rdx

  v3 = a3;
  v4 = 0LL;
  result = (signed __int64 *)ViGetContextPointer(a1, a2);
  v8 = result;
  if ( result )
  {
    if ( ViLockContextPointer(result, v6, v7) )
    {
      v9 = *(_QWORD *)(*v8 + 8 * v3 + 8);
      if ( v9 )
      {
        v4 = *(_QWORD *)(*v8 + 8 * v3 + 8);
        _InterlockedAdd((volatile signed __int32 *)(v9 + 4), 1u);
      }
      _InterlockedExchangeAdd64(v8, 1uLL);
    }
    return (signed __int64 *)v4;
  }
  return result;
}
