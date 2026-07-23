/*
 * XREFs of PnprIdentifyUnits @ 0x140836020
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2, _QWORD *a3, __int64 a4)
{
  int Interface; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  _QWORD v20[7]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v21[7]; // [rsp+70h] [rbp+Fh] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  Interface = PnpQueryInterface(a2, (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD, 1u, 0x38u, 0LL, (USHORT *)v20);
  if ( Interface < 0 )
  {
    v9 = PnprContext;
    v10 = 3LL;
    v11 = *(_DWORD *)(PnprContext + 20984);
    if ( !v11 )
      v11 = 1304;
    *(_DWORD *)(PnprContext + 20984) = v11;
    v12 = *(_DWORD *)(v9 + 20988);
    if ( !v12 )
      v12 = 3;
    *(_DWORD *)(v9 + 20988) = v12;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(
                DeviceObject,
                (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD,
                1u,
                0x38u,
                0LL,
                (USHORT *)v21);
  if ( Interface >= 0 )
  {
    if ( v21[4] && v20[4] && v20[6] )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD *))v21[4])(v21[1], a3);
      if ( Interface < 0 )
      {
        v9 = 1336LL;
        goto LABEL_9;
      }
      Interface = ((__int64 (__fastcall *)(_QWORD, __int64))v20[4])(v20[1], a4);
      if ( Interface < 0 )
      {
        v9 = 1344LL;
        goto LABEL_9;
      }
      if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))v20[6])(v20[1], *a3) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v16 = PnprContext;
      v17 = *(_DWORD *)(PnprContext + 20984);
      if ( !v17 )
        v17 = 1357;
      v9 = 4LL;
      *(_DWORD *)(PnprContext + 20984) = v17;
      v18 = *(_DWORD *)(v16 + 20988);
      if ( !v18 )
        v18 = 4;
      *(_DWORD *)(v16 + 20988) = v18;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v9 = 1316LL;
LABEL_9:
  v13 = PnprContext;
  v10 = 3LL;
  v14 = *(_DWORD *)(PnprContext + 20984);
  if ( !v14 )
    v14 = v9;
  *(_DWORD *)(PnprContext + 20984) = v14;
  v15 = *(_DWORD *)(v13 + 20988);
  if ( !v15 )
    v15 = 3;
  *(_DWORD *)(v13 + 20988) = v15;
LABEL_28:
  if ( v20[1] )
    ((void (__fastcall *)(_QWORD, __int64, __int64))v20[3])(v20[1], v9, v10);
  if ( v21[1] )
    ((void (__fastcall *)(_QWORD, __int64, __int64))v21[3])(v21[1], v9, v10);
  return (unsigned int)Interface;
}
