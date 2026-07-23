/*
 * XREFs of KeXorAffinityEx @ 0x14028E658
 * Callers:
 *     PpmParkComputeDiff @ 0x1402E805C (PpmParkComputeDiff.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 KeXorAffinityEx()
{
  unsigned __int16 v0; // ax
  __int16 *v1; // r9
  int *v2; // r11
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // edx
  signed __int64 v6; // r11
  _QWORD *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v0 = PpmPerfNewCoreParkingMask;
  v1 = (__int16 *)PpmPerfCoreParkingMask;
  v2 = &PpmPerfNewCoreParkingMask;
  if ( PpmPerfCoreParkingMask[0] <= (unsigned __int16)PpmPerfNewCoreParkingMask )
  {
    v0 = PpmPerfCoreParkingMask[0];
    v2 = (int *)PpmPerfCoreParkingMask;
    v1 = (__int16 *)&PpmPerfNewCoreParkingMask;
  }
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v0 )
  {
    v6 = (char *)v2 - (char *)v1;
    v7 = v1 + 4;
    v5 = v0;
    v8 = v0;
    do
    {
      v9 = *v7 ^ *(_QWORD *)((char *)v7 + v6);
      v4 |= v9;
      *(_QWORD *)((char *)v7++ + (char *)PpmPerfChangedCoreParkingMask - (char *)v1) = v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = (unsigned __int16)*v1;
  PpmPerfChangedCoreParkingMask[0] = *v1;
  while ( v5 < v10 )
  {
    v11 = v5++;
    *(_QWORD *)&PpmPerfChangedCoreParkingMask[4 * v11 + 4] = *(_QWORD *)&v1[4 * v11 + 4];
    v10 = (unsigned __int16)PpmPerfChangedCoreParkingMask[0];
  }
  dword_140406244 = 0;
  word_140406242 = 20;
  if ( v5 < 0x14 )
    memset(&PpmPerfChangedCoreParkingMask[4 * v5 + 4], 0, 8LL * (20 - v5));
  LOBYTE(v3) = v4 != 0;
  return v3;
}
