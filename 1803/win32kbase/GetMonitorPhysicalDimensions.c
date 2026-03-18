/*
 * XREFs of GetMonitorPhysicalDimensions @ 0x1C00D6660
 * Callers:
 *     RIMGetMonitorPhysicalSize @ 0x1C00E91F0 (RIMGetMonitorPhysicalSize.c)
 * Callees:
 *     GetRegEDID @ 0x1C0052580 (GetRegEDID.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorPhysicalDimensions(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r15
  wchar_t *v9; // rdi
  int v10; // r14d
  unsigned int v11; // ebp
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-278h] BYREF
  PVOID Object; // [rsp+38h] [rbp-270h] BYREF
  struct _DEVICE_OBJECT *v18; // [rsp+40h] [rbp-268h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-260h]
  _DWORD *v20; // [rsp+50h] [rbp-258h]
  unsigned int v21[128]; // [rsp+60h] [rbp-248h] BYREF

  v5 = 0;
  v16 = 0LL;
  v20 = a3;
  v19 = a2;
  UpdateMonitorDevices();
  if ( !a1 )
    return (unsigned int)-1073741823;
  v8 = *(_QWORD *)(a1 + 2568);
  if ( !*(_DWORD *)(v8 + 216) )
    return (unsigned int)-1073741810;
  v9 = gpGraphicsDeviceList;
  v10 = 0;
  if ( !gpGraphicsDeviceList )
    return (unsigned int)-1073741810;
  while ( v9 != (wchar_t *)v8 )
  {
LABEL_13:
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    if ( !v9 )
      return (unsigned int)-1073741810;
  }
  v11 = 0;
  if ( !*((_DWORD *)v9 + 54) )
  {
LABEL_12:
    if ( v10 )
      return (unsigned int)-1073741823;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v9 + 28);
    v13 = 32LL * v11;
    if ( (*(_BYTE *)(v13 + v12) & 3) != 3
      || (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C01A1BE0)(
                v13 + v12 + 8,
                *(unsigned int *)(v13 + v12 + 4),
                &Object,
                &v18) < 0 )
    {
      goto LABEL_11;
    }
    v10 = 1;
    if ( (unsigned int)GetRegEDID(v18, v21, &v16) )
      break;
    ObfDereferenceObject(Object);
LABEL_11:
    if ( ++v11 >= *((_DWORD *)v9 + 54) )
      goto LABEL_12;
  }
  v15 = v16;
  *v19 = *(unsigned __int8 *)(v16 + 21);
  *v20 = *(unsigned __int8 *)(v15 + 22);
  ObfDereferenceObject(Object);
  if ( a4 )
    *a4 = *(_DWORD *)(32LL * v11 + *((_QWORD *)v9 + 28) + 4);
  if ( a5 )
    *a5 = *(_QWORD *)(32LL * v11 + *((_QWORD *)v9 + 28) + 8);
  return v5;
}
