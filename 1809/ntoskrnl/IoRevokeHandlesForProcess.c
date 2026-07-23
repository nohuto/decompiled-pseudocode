/*
 * XREFs of IoRevokeHandlesForProcess @ 0x1402848B0
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     IopGetDevicePDO @ 0x140019CF4 (IopGetDevicePDO.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x140288C24 (PnpDisableUserModeNotifications.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ExEnumHandleTable @ 0x140690C90 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406AA820 (ObDereferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _DWORD *DevicePDO; // rax
  void *v8; // rdi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[28]; // [rsp+80h] [rbp-80h] BYREF
  char v16; // [rsp+190h] [rbp+90h] BYREF

  if ( !(unsigned __int8)PsIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v15, 0, sizeof(v15));
  v11 = 0LL;
  v12 = a1;
  v10 = 48;
  v13 = 576;
  v14 = 0LL;
  LODWORD(v15[0]) = 14680072;
  LODWORD(v15[4]) = 1;
  memset(&v15[20], 0, 0x28uLL);
  LOWORD(v15[20]) = 40;
  v15[24] = 1LL;
  v15[24] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(&v10, IoFileObjectType, 0LL, 0LL, 0, v15, v15[24], &v16);
  if ( LODWORD(v15[4]) == -1096154543 )
  {
    v6 = v15[2];
    if ( SLODWORD(v15[2]) >= 0 )
    {
      Object[0] = (PVOID)v15[5];
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
