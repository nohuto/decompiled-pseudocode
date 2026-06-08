/*
 * XREFs of ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001160
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0002910 (ProcLibTraceEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeHyperThreadedProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 *result; // rax
  unsigned int FirstSetLeftGroupAffinity; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  v22 = 32;
  v23 = 0;
  v5 = 0LL;
  v21[2] = 0LL;
  memset(v20, 0, sizeof(v20));
  v21[0] = &qword_1C0013428;
  v21[1] = &qword_1C0013428;
  while ( !(unsigned int)EnumerateNextDevice(v21, &v19) )
  {
    v7 = v19;
    if ( *(unsigned __int8 *)(v19 + 368) == a1 )
    {
      v8 = v19 + 1200;
      FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v19 + 1200);
      if ( FirstSetLeftGroupAffinity == *(_DWORD *)(v7 + 56) )
      {
        v9 = 0LL;
        v10 = 0LL;
        v11 = 0;
        v12 = 0;
        KeInitializeEnumerationContextFromGroup(v20, v8);
        while ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, v20) )
        {
          v13 = *(_QWORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + FirstSetLeftGroupAffinity) + 360LL);
          v14 = *(_QWORD *)(v13 + 128);
          v15 = *(unsigned int *)(v13 + 32);
          if ( v10 < v14 || v10 == v14 && v12 < (unsigned int)v15 )
          {
            v10 = *(_QWORD *)(v13 + 128);
            v12 = *(_DWORD *)(v13 + 32);
          }
          v16 = *(_QWORD *)(v13 + 120);
          if ( v9 < v16 || v9 == v16 && v11 < *(_DWORD *)(v13 + 24) )
          {
            v9 = *(_QWORD *)(v13 + 120);
            v11 = *(_DWORD *)(v13 + 24);
          }
          *(_QWORD *)(v13 + 24) = v15;
          *(_QWORD *)(v13 + 120) = v14;
          ProcLibTraceEnergyCounterUpdate();
        }
        v5 += v11 < v12 ? v12 - v11 : 0;
      }
    }
  }
  result = a5;
  *a5 = (unsigned __int64)(1000000 * v5) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  return result;
}
