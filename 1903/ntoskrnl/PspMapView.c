/*
 * XREFs of PspMapView @ 0x14030983C
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x14067A6E0 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall PspMapView(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID v3; // rdi
  int v4; // esi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(
             *(HANDLE *)(a1 + 16),
             *(_DWORD *)(a1 + 48),
             MmSectionObjectType,
             *(_BYTE *)(a1 + 52),
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v3 = Object;
    v4 = MmMapViewOfSection(
           Object,
           KeGetCurrentThread()->ApcState.Process,
           a1 + 24,
           0LL,
           0LL,
           a1 + 32,
           a1 + 40,
           1,
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 12));
    if ( v4 < 0 )
      ObfDereferenceObject(v3);
    else
      *(_QWORD *)(a1 + 16) = v3;
    return v4;
  }
  return result;
}
