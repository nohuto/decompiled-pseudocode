/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140299A00
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     IopGetDevicePDO @ 0x1400EC010 (IopGetDevicePDO.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x14029EBA4 (PnpDisableUserModeNotifications.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CD9B0 (ObDereferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _DWORD *DevicePDO; // rax
  void *v8; // rdi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _QWORD v16[28]; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+190h] [rbp+90h] BYREF

  v10[1] = 0;
  v14 = 0;
  if ( !(unsigned __int8)PsIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v16, 0, 0xD8uLL);
  v11 = 0LL;
  v12 = a1;
  v10[0] = 48;
  v13 = 576;
  v15 = 0LL;
  LODWORD(v16[0]) = 14155784;
  LODWORD(v16[4]) = 1;
  memset(&v16[20], 0, 0x28uLL);
  LOWORD(v16[20]) = 40;
  v16[24] = 1LL;
  v16[24] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(v10, IoFileObjectType, 0LL, 0LL, 0, v16, v16[24], &v17);
  if ( LODWORD(v16[4]) == -1096154543 )
  {
    v6 = v16[2];
    if ( SLODWORD(v16[2]) >= 0 )
    {
      Object[0] = (PVOID)v16[5];
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
