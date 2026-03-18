/*
 * XREFs of HMCreateHandleForObject @ 0x1C00B0FE0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0123FD0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01275D0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006782C (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(__int64 a1, char a2)
{
  bool i; // zf
  __int64 *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r14
  char *v9; // rdx
  bool v10; // cc
  __int64 v11; // rsi
  __int64 v12; // rbx

  if ( a2 == 19 || a2 == 22 )
  {
    for ( i = a1 == 0; ; i = (unsigned int)HMGrowHandleTable() == 0 )
    {
      if ( i )
        return 0LL;
      if ( a2 != 1 && qword_1C01A0AF8 )
        break;
      if ( qword_1C01A0AF0 )
      {
        v6 = &qword_1C01A0AF0;
        goto LABEL_12;
      }
    }
    v6 = &qword_1C01A0AF8;
LABEL_12:
    v7 = *v6;
    v8 = gpKernelHandleTable;
    v9 = (char *)qword_1C01A0E28 + 32 * *v6;
    v10 = (unsigned int)*v6 <= giheLast;
    v11 = 3 * *v6;
    *v6 = *((_QWORD *)gpKernelHandleTable + 3 * *v6);
    if ( !v10 )
      giheLast = v7;
    v9[24] = a2;
    v8[v11] = a1;
    *(_QWORD *)a1 = (int)v7 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C01A0E28
                                                                     + v7 * (unsigned int)dword_1C01A0E30
                                                                     + 26) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    if ( a2 == 19 )
    {
      ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
      ObReferenceObjectByPointer(*(PVOID *)(v12 + 32), 3u, ExRawInputManagerObjectType, 0);
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    }
    v8[v11 + 2] = 0LL;
    return v8[v11];
  }
  return 0LL;
}
