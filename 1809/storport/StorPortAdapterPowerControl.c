/*
 * XREFs of StorPortAdapterPowerControl @ 0x1C0043B20
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // rbx
  unsigned int v12; // edx
  _QWORD v14[8]; // [rsp+20h] [rbp-48h] BYREF

  v11 = 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 10) )
  {
    memset(v14, 0, sizeof(v14));
    v14[6] = a5;
    v14[4] = a6;
    v14[1] = 0LL;
    v14[0] = 0x4000000001LL;
    v14[2] = a2;
    v14[5] = a3;
    v14[3] = a4;
    v12 = RaCallMiniportAdapterControl(a1 + 312);
    v11 = *(_QWORD *)v14[7];
  }
  else
  {
    v12 = -1073741637;
  }
  *a7 = v11;
  return v12;
}
