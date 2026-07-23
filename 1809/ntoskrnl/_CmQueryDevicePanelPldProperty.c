/*
 * XREFs of _CmQueryDevicePanelPldProperty @ 0x1406EA2CC
 * Callers:
 *     _CmUpdateDevicePanel @ 0x1406E9878 (_CmUpdateDevicePanel.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmQueryDevicePanelPldProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PVOID *a5,
        int *a6,
        _QWORD *NumberOfBytes,
        _DWORD *a8)
{
  _QWORD *v8; // rsi
  _DWORD *v10; // r14
  PVOID v14; // r10
  int ObjectProperty; // ecx
  unsigned int v17; // eax
  PVOID PoolWithTag; // rax
  int v19; // edx
  _BYTE *v20; // r8
  unsigned int v21; // eax

  v8 = NumberOfBytes;
  v10 = a8;
  *NumberOfBytes = 0LL;
  *v10 = 0;
  v14 = *a5;
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1u,
                       a3,
                       0LL,
                       a4,
                       (__int64)&a8,
                       (__int64)v14,
                       *a6,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    v17 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes <= *a6 )
      return (unsigned int)-1073741823;
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0);
      v17 = (unsigned int)NumberOfBytes;
    }
    *a6 = v17;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x52504E50u);
    *a5 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ObjectProperty = -1073741801;
      break;
    }
  }
  if ( ObjectProperty < 0 )
    return (unsigned int)ObjectProperty;
  if ( (_DWORD)a8 != 4099 || (v19 = (int)NumberOfBytes) == 0 )
    return (unsigned int)-1073741823;
  v20 = *a5;
  v21 = *(_DWORD *)*a5 & 0x7F;
  if ( v21
    && (v21 != 1 || (unsigned int)NumberOfBytes >= 0x10)
    && (v21 < 2 || (unsigned int)NumberOfBytes >= 0x14)
    && (v20[8] & 0x38u) < 0x30 )
  {
    *v8 = v20;
    *v10 = v19;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ObjectProperty;
}
