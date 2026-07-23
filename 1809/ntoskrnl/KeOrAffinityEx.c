/*
 * XREFs of KeOrAffinityEx @ 0x1400DC970
 * Callers:
 *     KiForwardTick @ 0x140061720 (KiForwardTick.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 *     KiStartProfileTarget @ 0x1402962A0 (KiStartProfileTarget.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall KeOrAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  unsigned __int16 *v4; // r11
  unsigned int v5; // r10d
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r8
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[176]; // [rsp+0h] [rbp-D8h] BYREF

  v3 = v12;
  v4 = a2;
  v5 = 0;
  if ( a3 )
    v3 = a3;
  v6 = *a1;
  v7 = 0;
  if ( *a1 >= *a2 )
  {
    v6 = *a2;
    v4 = a1;
  }
  *((_WORD *)v3 + 1) = 20;
  *(_WORD *)v3 = *v4;
  if ( v6 )
  {
    do
    {
      v8 = (*(_QWORD *)&a2[4 * v7 + 4] | *(_QWORD *)&a1[4 * v7 + 4]) == 0LL;
      *(_QWORD *)&v3[8 * v7 + 8] = *(_QWORD *)&a2[4 * v7 + 4] | *(_QWORD *)&a1[4 * v7 + 4];
      if ( !v8 )
        v5 = 1;
      ++v7;
    }
    while ( v7 < v6 );
  }
  while ( v7 < *v4 )
  {
    v9 = *(_QWORD *)&v4[4 * v7 + 4];
    *(_QWORD *)&v3[8 * v7 + 8] = v9;
    if ( v9 )
      v5 = 1;
    ++v7;
  }
  if ( v3 != v12 )
  {
    *((_DWORD *)v3 + 1) = 0;
    while ( v7 < *((_WORD *)v3 + 1) )
    {
      v10 = v7++;
      *(_QWORD *)&v3[8 * v10 + 8] = 0LL;
    }
  }
  return v5;
}
