/*
 * XREFs of ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x1C02C6814
 * Callers:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA9CC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 * Callees:
 *     memcmp @ 0x1C0024FC0 (memcmp.c)
 *     ?_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z @ 0x1C00DA8E8 (-_GetDescriptorLength@CCD_SET_STRING_ID@@AEBAGI@Z.c)
 */

int __fastcall CCD_SET_STRING_ID::_CompareDescriptors(CCD_SET_STRING_ID *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  CCD_SET_STRING_ID *v5; // r11
  unsigned __int16 DescriptorLength; // ax
  unsigned __int16 v7; // r10
  __int64 v8; // r11

  v3 = a3;
  v4 = a2;
  CCD_SET_STRING_ID::_GetDescriptorLength(this, a2);
  DescriptorLength = CCD_SET_STRING_ID::_GetDescriptorLength(v5, v3);
  if ( v7 < DescriptorLength )
    return -1;
  if ( v7 <= DescriptorLength )
    return memcmp(
             (const void *)(*(_QWORD *)(v8 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 8 * v4)),
             (const void *)(*(_QWORD *)(v8 + 16) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 24) + 8 * v3)),
             v7);
  return 1;
}
