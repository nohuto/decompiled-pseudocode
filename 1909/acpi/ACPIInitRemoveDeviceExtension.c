/*
 * XREFs of ACPIInitRemoveDeviceExtension @ 0x1C002B4BC
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 * Callees:
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C002B5A4 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInternalMoveList @ 0x1C0031358 (ACPIInternalMoveList.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 */

__int64 __fastcall ACPIInitRemoveDeviceExtension(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  char v10; // al
  __int64 result; // rax
  void *v12; // rcx
  char v13; // al

  v1 = a1 + 96;
  v3 = a1[96];
  if ( *(_QWORD **)(v3 + 8) != a1 + 96 )
    goto LABEL_12;
  v4 = (_QWORD *)a1[97];
  if ( (_QWORD *)*v4 != v1 )
    goto LABEL_12;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v1[1] = v1;
  *v1 = v1;
  ACPICleanDeviceDependenciesWithTreeLock(a1);
  v5 = a1 + 100;
  v6 = a1[100];
  if ( *(_QWORD **)(v6 + 8) != a1 + 100 || (v7 = (_QWORD *)a1[101], (_QWORD *)*v7 != v5) )
LABEL_12:
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = a1 + 98;
  a1[101] = a1 + 100;
  *v5 = v5;
  if ( (_QWORD *)*v8 != v8 )
    ACPIInternalMoveList(v8, &AcpiUnresolvedEjectList);
  v9 = a1[93];
  a1[93] = 0LL;
  v10 = AcpiSurpriseRemovedIndex + 1;
  AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = a1;
  result = v10 & 0x1F;
  AcpiSurpriseRemovedIndex = result;
  while ( 1 )
  {
    v12 = (void *)v9;
    if ( !v9 )
      break;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 684), 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    v9 = *(_QWORD *)(v9 + 744);
    v13 = AcpiSurpriseRemovedIndex + 1;
    AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = v12;
    AcpiSurpriseRemovedIndex = v13 & 0x1F;
    result = ACPIInitDeleteDeviceExtension(v12);
  }
  return result;
}
