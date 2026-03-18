/*
 * XREFs of ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C00DA2A8
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DA0B0 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1C00DA23C (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C02C6754 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CCD_SET_STRING_ID::_GetDescriptorLength(CCD_SET_STRING_ID *this, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int16 v4; // ax

  v2 = a2 + 1;
  v3 = *((_QWORD *)this + 3);
  if ( (unsigned int)v2 < *((unsigned __int16 *)this + 16) )
    v4 = *(_WORD *)(v3 + 8 * v2) - 1;
  else
    v4 = *((_WORD *)this + 4);
  return v4 - *(_WORD *)(v3 + 8LL * a2);
}
