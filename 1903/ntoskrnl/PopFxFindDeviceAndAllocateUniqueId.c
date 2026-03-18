/*
 * XREFs of PopFxFindDeviceAndAllocateUniqueId @ 0x14071817C
 * Callers:
 *     PoFxPrepareDevice @ 0x1401589B0 (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxQueryBiosDeviceName @ 0x140158AD8 (PopFxQueryBiosDeviceName.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14019210C (PopFxFindAcpiDeviceByUniqueId.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxFindDeviceAndAllocateUniqueId(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax
  int AcpiDeviceByUniqueId; // eax
  __int128 v8; // xmm0
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  v10 = 0LL;
  if ( PopFxQueryBiosDeviceName(a1, (__int64)P) >= 0 )
  {
    AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId((PCUNICODE_STRING)P, &v10);
    v3 = v10;
    v5 = AcpiDeviceByUniqueId;
    if ( AcpiDeviceByUniqueId >= 0 )
    {
      v8 = *(_OWORD *)(v10 + 27);
      *(_DWORD *)(a1 + 296) |= 0x2000u;
      v5 = 0;
      *(_OWORD *)(a1 + 280) = v8;
    }
    else if ( AcpiDeviceByUniqueId != -1073741738 )
    {
      v5 = 0;
      *(_OWORD *)(a1 + 280) = *(_OWORD *)P;
      goto LABEL_3;
    }
    if ( P[1] )
      ExFreePoolWithTag(P[1], 0x4D584650u);
  }
  else
  {
    v5 = 0;
    *(_OWORD *)(a1 + 280) = *(_OWORD *)(a1 + 40);
  }
LABEL_3:
  result = v5;
  *a2 = v3;
  return result;
}
