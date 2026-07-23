/*
 * XREFs of RtlSetHeapInformation @ 0x180079240
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_180079304 @ 0x180079304 (sub_180079304.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( !HeapInformation || HeapInformationLength != 48 )
        return -1073741823;
      result = sub_1800EF484(HeapHandle);
LABEL_9:
      if ( result < 0 )
        return result;
      return 0;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_180079304();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      dword_180166044 = 0;
      return 0;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass == HeapOptimizeResources )
    {
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&stru_180163BE0);
        v8 = 28LL;
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
          v8 = 208LL;
        if ( *(_WORD *)((char *)HeapHandle + v8) != 0xFFFF )
          sub_18004F06C((__int64)HeapHandle);
        RtlLeaveCriticalSection(&stru_180163BE0);
      }
      else
      {
        sub_18006790C((__int64)sub_18004F050, 0LL, 0);
      }
      return 0;
    }
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass == 6 )
      {
        if ( HeapInformationLength < 0x28
          || *(_DWORD *)HeapInformation != 1
          || ((*((_QWORD *)HeapInformation + 1) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *((_QWORD *)HeapInformation + 1) )
        {
          return -1073741811;
        }
        if ( HeapHandle )
        {
          if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          {
            v6 = 32LL;
          }
          else
          {
            if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
              return 0;
            v6 = 376LL;
          }
          v7 = (__int64 *)((char *)HeapHandle + v6);
        }
        else
        {
          v7 = &qword_180163558;
        }
        v7[1] = *((_QWORD *)HeapInformation + 2);
        v7[3] = *((_QWORD *)HeapInformation + 4);
        *v7 = *((_QWORD *)HeapInformation + 1);
        v7[2] = *((_QWORD *)HeapInformation + 3);
      }
      return 0;
    }
    if ( !HeapInformation
      || HeapInformationLength < 0x10
      || *(_WORD *)HeapInformation != 1
      || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
    {
      return -1073741811;
    }
    result = sub_180102188(HeapInformation);
    goto LABEL_9;
  }
  if ( (byte_180166058 & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&stru_180166408, (PRTL_RUN_ONCE_INIT_FN)sub_18004EB80, &Parameter, 0LL);
  if ( result >= 0 )
  {
    byte_180166058 |= 2u;
    return 0;
  }
  return result;
}
