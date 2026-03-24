/*
 * XREFs of IopAddBugcheckTriageCompletionQueue @ 0x140286F44
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x140286C98 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286D00 (IopAddBugcheckPnpWatchdogTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191CEC (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191DF4 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140287108 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageCompletionQueue(_QWORD **a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid((__int64)a1, 16LL) )
  {
    IoAddTriageDumpDataBlock((int)a1, 16);
    v4 = *a1;
    if ( *a1 && v4 != a1 )
    {
      v5 = a1;
      while ( v4 != a1 && v3 < 10 )
      {
        ++v3;
        if ( !KiIsAddressRangeValid((__int64)v4, 24LL) )
          return (unsigned int)-1073741823;
        IoAddTriageDumpDataBlock((int)v4, 24);
        if ( (_QWORD *)v4[1] != v5 )
          return (unsigned int)-1073741823;
        v5 = v4;
        v1 = IopAddBugcheckTriageDeviceNode(v4[2], v6, v7);
        v4 = (_QWORD *)*v4;
        if ( !v4 )
          return v1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
