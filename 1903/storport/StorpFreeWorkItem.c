/*
 * XREFs of StorpFreeWorkItem @ 0x1C003CC9C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003783C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeWorkItem(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  signed __int32 v7; // eax

  v2 = 0;
  v4 = **(_QWORD **)(a1 - 16);
  if ( a2 )
  {
    if ( !*(_QWORD *)a2 )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return (unsigned int)-1056964607;
      }
      v6 = 65;
LABEL_26:
      WPP_SF_((__int64)v5->AttachedDevice, v6, (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
      return (unsigned int)-1056964607;
    }
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x42u,
          (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
      }
      return (unsigned int)-1056964596;
    }
    else if ( KeGetCurrentIrql() <= 2u )
    {
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), 2, 1);
      if ( v7 )
      {
        if ( v7 == 2 )
        {
          v5 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            return (unsigned int)-1056964607;
          }
          v6 = 68;
          goto LABEL_26;
        }
      }
      else
      {
        IoFreeWorkItem(*(PIO_WORKITEM *)a2);
        *(_QWORD *)a2 = 0LL;
        ExFreePoolWithTag((PVOID)a2, 0x49576152u);
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 4968));
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x43u,
          (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
      }
      return (unsigned int)-1056964600;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x40u,
        (__int64)&WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids,
        a1,
        0LL);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
