/*
 * XREFs of SmcCacheStart @ 0x1408B0034
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408ACF68 (SmcProcessCreateRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400E31F8 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408AF8C4 (SmKmVolumeQueryUniqueId.c)
 */

__int64 __fastcall SmcCacheStart(__int64 a1, __int64 *a2, __int64 a3)
{
  PVOID v3; // rsi
  int v5; // ecx
  int UniqueId; // ebx
  __int64 v9; // r12
  unsigned int v10; // r8d
  struct _DEVICE_OBJECT *v11; // rcx
  int v12; // eax
  int v14; // [rsp+28h] [rbp-48h]
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  PDEVICE_OBJECT v17; // [rsp+A8h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a2 + 2);
  Object = 0LL;
  if ( !v5 || ((v5 - 1) & v5) != 0 )
  {
    UniqueId = -1073741811;
  }
  else
  {
    if ( !*a2 )
      return (unsigned int)-1073741811;
    if ( (unsigned __int64)*a2 > 0x800000000LL )
      return (unsigned int)-1073739516;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
    v9 = a3 & 1;
    *(_QWORD *)(a1 + 32) = a2[2];
    v10 = *(_DWORD *)(a1 + 24);
    LODWORD(v17) = *((_DWORD *)a2 + 3) & 1;
    v16 = *a2;
    UniqueId = SmKmStoreFileCreate(
                 a1 + 4,
                 a3,
                 v10,
                 v10,
                 &v16,
                 v14,
                 (unsigned int *)&v17,
                 (_OWORD *)(a1 + 40),
                 (_DWORD *)(a1 + 4),
                 (_DWORD *)(a1 + 8),
                 (__int64)&v18);
    if ( UniqueId < 0 )
      return (unsigned int)UniqueId;
    if ( (-(__int64)(v9 != 0) & a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && v16 != *a2 )
      return (unsigned int)-1073741792;
    *(_DWORD *)(a1 + 28) = (unsigned __int8)v17 & 1 | *(_DWORD *)(a1 + 28) & 0xFFFFFFFC | (2 * (v18 & 1));
    v11 = *(struct _DEVICE_OBJECT **)(a1 + 64);
    v17 = v11;
    if ( v11 )
      goto LABEL_14;
    v12 = SmKmStoreFileOpenVolume(*(_QWORD *)(a1 + 48), &Object, &v17);
    v3 = Object;
    UniqueId = v12;
    if ( v12 >= 0 )
    {
      v11 = v17;
LABEL_14:
      UniqueId = SmKmVolumeQueryUniqueId(v11, (unsigned __int16 *)(a1 + 552), 0x200u);
      if ( UniqueId >= 0 )
      {
        UniqueId = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 104), *(_DWORD *)(a1 + 24));
        if ( UniqueId >= 0 )
          UniqueId = 0;
      }
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)UniqueId;
}
