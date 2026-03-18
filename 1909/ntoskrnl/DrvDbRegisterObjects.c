/*
 * XREFs of DrvDbRegisterObjects @ 0x1407563D0
 * Callers:
 *     DrvDbOpenContext @ 0x140756290 (DrvDbOpenContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDbRegisterObjects(__int64 a1, __int64 a2)
{
  int *v3; // r9
  unsigned int i; // r10d
  __int64 v5; // r11
  int v6; // r8d
  __int64 v7; // rcx

  v3 = (int *)&unk_1403753F0;
  for ( i = 0; i < 5; ++i )
  {
    v5 = *v3;
    v6 = 0;
    if ( (unsigned int)(v5 - 1) > 0xA )
      v6 = -1073741811;
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v5 + 296), *((_QWORD *)v3 + 1));
    if ( v6 < 0 )
      break;
    v7 = *v3;
    v6 = 0;
    if ( (unsigned int)(v7 - 1) > 0xA )
      v6 = -1073741811;
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v7 + 392), a2);
    if ( v6 < 0 )
      break;
    v3 += 4;
  }
  return (unsigned int)v6;
}
