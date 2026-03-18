/*
 * XREFs of HMCreateHandleForObject @ 0x1C008D8D0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C008D840 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0094F90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006C820 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(__int64 a1, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r14
  char *v7; // rdx
  bool v8; // cc
  __int64 v9; // rsi
  __int64 v11; // rbx

  if ( a2 != 19 && a2 != 22 || !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( qword_1C01CCB30 && a2 != 1 )
    {
      v4 = &qword_1C01CCB30;
      goto LABEL_6;
    }
    if ( qword_1C01CCB28 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v4 = &qword_1C01CCB28;
LABEL_6:
  v5 = *v4;
  v6 = gpKernelHandleTable;
  v7 = (char *)qword_1C01CBA58 + 32 * *v4;
  v8 = (unsigned int)*v4 <= giheLast;
  v9 = 3 * *v4;
  *v4 = *((_QWORD *)gpKernelHandleTable + 3 * *v4);
  if ( !v8 )
    giheLast = v5;
  v7[24] = a2;
  v6[v9] = a1;
  *(_QWORD *)a1 = (int)v5 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C01CBA58
                                                                   + v5 * (unsigned int)dword_1C01CBA60
                                                                   + 26) << 16);
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  if ( a2 == 19 )
  {
    ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16);
    ObReferenceObjectByPointer(*(PVOID *)(v11 + 32), 3u, ExRawInputManagerObjectType, 0);
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  }
  v6[v9 + 2] = 0LL;
  return v6[v9];
}
