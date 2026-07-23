/*
 * XREFs of PiDcResetChildDeviceContainers @ 0x14082AE94
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     _CmEnumDevicesInContainerWithCallback @ 0x1408FA13C (_CmEnumDevicesInContainerWithCallback.c)
 *     _CmRemoveDeviceFromContainer @ 0x1408FAA54 (_CmRemoveDeviceFromContainer.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainers(__int64 a1, const wchar_t *a2)
{
  int v3; // edi
  PVOID *v4; // rbx
  int DeviceRegProp; // eax
  int v6; // eax
  PVOID *v7; // rax
  int v9; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-41h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-31h] BYREF
  int v12; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v13[80]; // [rsp+70h] [rbp-19h] BYREF

  v10[0] = a1;
  v10[1] = a2;
  P[1] = P;
  P[0] = P;
  v3 = 0;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    CmEnumDevicesInContainerWithCallback(
      PiPnpRtlCtx,
      (_DWORD)a2,
      0,
      (unsigned int)PiDcResetChildDeviceContainerCallback,
      (__int64)v10);
    v4 = (PVOID *)P[0];
    if ( P[0] == P )
      goto LABEL_14;
    do
    {
      v9 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)(v4 + 2),
                        0LL,
                        37,
                        (__int64)&v12,
                        (__int64)v13,
                        (__int64)&v9,
                        0);
      v3 = DeviceRegProp;
      if ( DeviceRegProp == -1073741275 || v12 != 1 || v9 != 78 )
        goto LABEL_11;
      if ( DeviceRegProp < 0 )
        break;
      v3 = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, a2, v13, v4 + 2);
      if ( v3 < 0 )
        break;
      v6 = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, (__int64)(v4 + 2), 0LL, 0x25u, 1u, 0LL, 0, 0);
      v3 = v6;
      if ( v6 == -1073741275 )
      {
LABEL_11:
        v3 = 0;
      }
      else if ( v6 < 0 )
      {
        break;
      }
      v4 = (PVOID *)*v4;
    }
    while ( v4 != P );
  }
  while ( 1 )
  {
    v4 = (PVOID *)P[0];
LABEL_14:
    if ( v4 == P )
      break;
    if ( v4[1] != P || (v7 = (PVOID *)*v4, *((PVOID **)*v4 + 1) != v4) )
      __fastfail(3u);
    P[0] = *v4;
    v7[1] = P;
    ExFreePoolWithTag(v4, 0x47706E50u);
  }
  return (unsigned int)v3;
}
