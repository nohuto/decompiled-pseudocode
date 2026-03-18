/*
 * XREFs of KeOrAffinityEx @ 0x1400FFF10
 * Callers:
 *     KiForwardTick @ 0x140036140 (KiForwardTick.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     PpmPerfApplyProcessorStates @ 0x1401760B0 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1402AC5E0 (KiStartProfileTarget.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmUpdateProcessorPolicy @ 0x14074760C (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v6; // r9
  unsigned __int16 *v7; // r11
  unsigned int v8; // r10d
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // bx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v14; // rcx
  _BYTE v15[176]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v15, 0, 0xA8uLL);
  v6 = v15;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  if ( a3 )
    v6 = a3;
  v10 = *a1;
  if ( *a1 >= *a2 )
  {
    v10 = *a2;
    v7 = a1;
  }
  *((_WORD *)v6 + 1) = 20;
  *(_WORD *)v6 = *v7;
  if ( v10 )
  {
    do
    {
      v11 = (*(_QWORD *)&a2[4 * v9 + 4] | *(_QWORD *)&a1[4 * v9 + 4]) == 0LL;
      *(_QWORD *)&v6[8 * v9 + 8] = *(_QWORD *)&a2[4 * v9 + 4] | *(_QWORD *)&a1[4 * v9 + 4];
      if ( !v11 )
        v8 = 1;
      ++v9;
    }
    while ( v9 < v10 );
  }
  while ( v9 < *v7 )
  {
    v12 = *(_QWORD *)&v7[4 * v9 + 4];
    *(_QWORD *)&v6[8 * v9 + 8] = v12;
    if ( v12 )
      v8 = 1;
    ++v9;
  }
  if ( v6 != v15 )
  {
    *((_DWORD *)v6 + 1) = 0;
    while ( v9 < *((_WORD *)v6 + 1) )
    {
      v14 = v9++;
      *(_QWORD *)&v6[8 * v14 + 8] = 0LL;
    }
  }
  return v8;
}
