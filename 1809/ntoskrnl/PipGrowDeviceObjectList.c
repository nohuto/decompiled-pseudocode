/*
 * XREFs of PipGrowDeviceObjectList @ 0x14083BF6C
 * Callers:
 *     PipDeviceObjectListAdd @ 0x1406EDD74 (PipDeviceObjectListAdd.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipDeviceObjectListAdd @ 0x1406EDD74 (PipDeviceObjectListAdd.c)
 *     PiAllocateDeviceObjectList @ 0x1406EFC74 (PiAllocateDeviceObjectList.c)
 *     PiClearDeviceObjectList @ 0x1406EFD2C (PiClearDeviceObjectList.c)
 *     PipDeviceObjectListElementAt @ 0x140702174 (PipDeviceObjectListElementAt.c)
 */

__int64 __fastcall PipGrowDeviceObjectList(unsigned int **a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  int v5; // edx
  unsigned int *DeviceObjectList; // rax
  unsigned int i; // esi
  int v9; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+38h] BYREF
  unsigned int *v11; // [rsp+70h] [rbp+40h] BYREF
  void *v12; // [rsp+78h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v10 = 0;
  v4 = v1[3];
  v5 = 2 * v1[1];
  v9 = 0;
  DeviceObjectList = PiAllocateDeviceObjectList(v4, v5);
  v11 = DeviceObjectList;
  if ( DeviceObjectList )
  {
    for ( i = 0; i < *v1; ++i )
    {
      PipDeviceObjectListElementAt(v1, i, &v12, &v10, &v9);
      PipDeviceObjectListAdd(&v11, v12, v10, v9);
    }
    PiClearDeviceObjectList(v1);
    ExFreePoolWithTag(v1, 0);
    DeviceObjectList = v11;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = DeviceObjectList;
  return v2;
}
