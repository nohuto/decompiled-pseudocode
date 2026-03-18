/*
 * XREFs of ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0A@@std@@YAPEAVCUnpinResource@CD3DDeviceLevel1@@AEBV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J@Z @ 0x1800E9DF8
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800E9E74 (--$move@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_array_iterator@PE.c)
 *     ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800E9F38 (--$move_backward@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_array_it.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EA094 (--$uninitialized_copy@V-$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V-$checked_arr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>,__int64,0>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  bool v5; // sf

  v4 = a2 == 0;
  v5 = a2 < 0;
  if ( a2 < 0 )
  {
    if ( a1[2] < (unsigned __int64)-a2 )
      goto LABEL_6;
    v4 = a2 == 0;
    v5 = a2 < 0;
  }
  if ( !v5 && !v4 && a1[1] - a1[2] < (unsigned __int64)a2 )
  {
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    __debugbreak();
  }
  return *a1 + 16LL * a1[2];
}
