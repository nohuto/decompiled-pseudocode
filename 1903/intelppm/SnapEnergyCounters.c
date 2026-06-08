/*
 * XREFs of SnapEnergyCounters @ 0x1C00062D0
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x1C000625C (DeactivateFixedFunctionCounters.c)
 */

_DWORD *__fastcall SnapEnergyCounters(unsigned int a1, char a2, char a3)
{
  _DWORD *result; // rax
  __int64 v5; // r9
  _DWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  _LIST_ENTRY *Blink; // rdi
  unsigned int *v10; // r10
  _QWORD *v11; // r11
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx

  result = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v5 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
  if ( !v5 )
    return result;
  v6 = *(_DWORD **)(v5 + 360);
  if ( !v6 || !*v6 )
    return result;
  v7 = 3LL;
  if ( !a2 )
  {
    if ( __readmsr(0x38Du) == 819
      && (v8 = __readmsr(0x38Fu),
          ((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) & 0x700000000LL) == 0x700000000LL) )
    {
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) != 0 )
      {
        Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
        v10 = (unsigned int *)&CounterId;
        v11 = v6 + 8;
        v12 = 3LL;
        do
        {
          v13 = __readmsr(*v10++);
          result = (_DWORD *)((unsigned __int64)Blink & (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13));
          *v11 = result;
          v11 += 3;
          --v12;
        }
        while ( v12 );
        goto LABEL_10;
      }
    }
    else
    {
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type &= ~0x40u;
    }
    return DeactivateFixedFunctionCounters();
  }
LABEL_10:
  if ( a3 )
  {
    v14 = v6 + 4;
    do
    {
      result = (_DWORD *)v14[2];
      *v14 = result;
      v14 += 3;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
