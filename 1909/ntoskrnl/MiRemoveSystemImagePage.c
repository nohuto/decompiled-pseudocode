/*
 * XREFs of MiRemoveSystemImagePage @ 0x1400F9CC4
 * Callers:
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiTerminateWsle @ 0x14004B1E0 (MiTerminateWsle.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v4 < PsNtosImageEnd && v4 >= (unsigned __int64)PsNtosImageBase
     || v4 < PsHalImageEnd && v4 >= (unsigned __int64)PsHalImageBase) )
  {
    v5 = (volatile signed __int32 *)&xmmword_140464640 + 2;
  }
  else
  {
    v5 = (volatile signed __int32 *)&xmmword_140464640 + 3;
  }
  _InterlockedDecrement(v5);
  result = MiTerminateWsle(a1, v4, 2, &v8);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v7);
      result = *(_QWORD *)(a3 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
