/*
 * XREFs of KeSubtractAffinityEx @ 0x1400ED840
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1400ED370 (KiIpiSendRequest.c)
 *     PpmParkReportUnparkedCores @ 0x1401223A0 (PpmParkReportUnparkedCores.c)
 *     PpmIdleSelectStates @ 0x140180090 (PpmIdleSelectStates.c)
 *     KiStartProfileTarget @ 0x1402960B0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140296320 (KiStopProfileTarget.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x14087A7A8 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall KeSubtractAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v13; // rdx
  _BYTE v14[176]; // [rsp+0h] [rbp-C8h] BYREF

  if ( !a3 )
    a3 = v14;
  *((_WORD *)a3 + 1) = 20;
  v5 = 0;
  *(_WORD *)a3 = *a1;
  v6 = *a1;
  v7 = v6;
  v8 = 0;
  if ( v6 >= *a2 )
    v7 = *a2;
  if ( v7 )
  {
    do
    {
      v9 = 4LL * v8;
      v10 = (*(_QWORD *)&a1[v9 + 4] & ~*(_QWORD *)&a2[v9 + 4]) == 0LL;
      *(_QWORD *)&a3[v9 * 2 + 8] = *(_QWORD *)&a1[v9 + 4] & ~*(_QWORD *)&a2[v9 + 4];
      if ( !v10 )
        v5 = 1;
      ++v8;
    }
    while ( v8 < v7 );
    v6 = *a1;
  }
  if ( v8 < v6 )
  {
    do
    {
      v13 = *(_QWORD *)&a1[4 * v8 + 4];
      *(_QWORD *)&a3[8 * v8 + 8] = v13;
      if ( v13 )
        v5 = 1;
      ++v8;
    }
    while ( v8 < *a1 );
  }
  if ( a3 != v14 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v8 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v11 + 8] = 0LL )
      v11 = v8++;
  }
  return v5;
}
