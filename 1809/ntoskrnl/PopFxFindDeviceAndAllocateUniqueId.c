/*
 * XREFs of PopFxFindDeviceAndAllocateUniqueId @ 0x1406ECE3C
 * Callers:
 *     PoFxPrepareDevice @ 0x14015A65C (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxQueryBiosDeviceName @ 0x14015A77C (PopFxQueryBiosDeviceName.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140179CB4 (PopFxFindAcpiDeviceByUniqueId.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxFindDeviceAndAllocateUniqueId(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax
  int AcpiDeviceByUniqueId; // eax
  __int128 v8; // xmm0
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( PopFxQueryBiosDeviceName(a1, (__int64)&P) >= 0 )
  {
    AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(&P, &v10);
    v3 = v10;
    v5 = AcpiDeviceByUniqueId;
    if ( AcpiDeviceByUniqueId >= 0 )
    {
      v8 = *((_OWORD *)v10 + 13);
      *(_DWORD *)(a1 + 296) |= 0x2000u;
      v5 = 0;
      *(_OWORD *)(a1 + 280) = v8;
    }
    else if ( AcpiDeviceByUniqueId != -1073741738 )
    {
      v5 = 0;
      *(UNICODE_STRING *)(a1 + 280) = P;
      goto LABEL_3;
    }
    if ( P.Buffer )
      ExFreePoolWithTag(P.Buffer, 0x4D584650u);
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
