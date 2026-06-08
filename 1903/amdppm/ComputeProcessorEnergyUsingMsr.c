/*
 * XREFs of ComputeProcessorEnergyUsingMsr @ 0x1C00010B0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0002910 (ProcLibTraceEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // edx
  unsigned __int64 *result; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  v15 = 0;
  v13[0] = &qword_1C0013428;
  v5 = 0LL;
  v14 = 32;
  v13[2] = 0LL;
  v13[1] = &qword_1C0013428;
  while ( !(unsigned int)EnumerateNextDevice(v13, &v12) )
  {
    if ( *(unsigned __int8 *)(v12 + 368) == a1 )
    {
      v7 = *(_QWORD *)(v12 + 360);
      v8 = *(_DWORD *)(v7 + 24);
      v9 = *(unsigned int *)(v7 + 32);
      v10 = *(_DWORD *)(v7 + 32);
      *(_QWORD *)(v7 + 24) = v9;
      v5 += v8 < (unsigned int)v9 ? v10 - v8 : 0;
      ProcLibTraceEnergyCounterUpdate();
    }
  }
  result = a5;
  *a5 = (unsigned __int64)(1000000 * v5) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  return result;
}
