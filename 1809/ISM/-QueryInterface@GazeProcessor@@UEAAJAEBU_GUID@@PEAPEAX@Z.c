/*
 * XREFs of ?QueryInterface@GazeProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EBDE0
 * Callers:
 *     ?QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC7F0 (-QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC800 (-QueryInterface@GazeProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC820 (-QueryInterface@GazeProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC830 (-QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::QueryInterface(GazeProcessor *this, const struct _GUID *a2, GazeProcessor **a3)
{
  GazeProcessor *v4; // rbx

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (GazeProcessor *)((char *)v4 + 32);
LABEL_9:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4 )
  {
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_9;
  }
  return 2147500034LL;
}
