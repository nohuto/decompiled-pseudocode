/*
 * XREFs of PiDcResetChildDeviceContainerCallback @ 0x14082AC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmIsRootDevice @ 0x1406EAA2C (_CmIsRootDevice.c)
 */

__int64 __fastcall PiDcResetChildDeviceContainerCallback(__int64 a1, const wchar_t *a2, __int64 a3)
{
  char v4; // r14
  WCHAR *PoolWithTag; // rdi
  const WCHAR *i; // rbx
  _QWORD *v9; // rax
  PVOID v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  int v14; // [rsp+60h] [rbp-59h] BYREF
  int v15; // [rsp+64h] [rbp-55h] BYREF
  int v16; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v17[4]; // [rsp+6Ch] [rbp-4Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  wchar_t Str1[40]; // [rsp+80h] [rbp-39h] BYREF

  v4 = 0;
  PoolWithTag = 0LL;
  for ( i = a2; !CmIsRootDevice(i); i = PoolWithTag )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, i) < 0 )
      goto LABEL_26;
    v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
    if ( v9 )
    {
      ObfDereferenceObject(v9);
      break;
    }
    if ( i != a2 )
    {
      v14 = 78;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)i,
                  0LL,
                  37,
                  (__int64)&v15,
                  (__int64)Str1,
                  (__int64)&v14,
                  0) < 0 )
        goto LABEL_26;
      if ( v15 != 1 || v14 != 78 || wcsicmp(Str1, *(const wchar_t **)(a3 + 8)) )
        break;
    }
    if ( !PoolWithTag )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
      if ( !PoolWithTag )
        return 0LL;
    }
    if ( (int)PnpGetObjectProperty(
                a1,
                (__int64)i,
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_LastKnownParent,
                (__int64)&v16,
                (__int64)PoolWithTag,
                400,
                (__int64)v17,
                0) < 0
      || v16 != 18 )
    {
      goto LABEL_26;
    }
    PoolWithTag[199] = 0;
    if ( !wcsicmp(PoolWithTag, *(const wchar_t **)a3) )
    {
      v4 = 1;
      break;
    }
  }
  if ( v4 )
  {
    v10 = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x47706E50u);
    v11 = v10;
    if ( v10 )
    {
      if ( RtlStringCbCopyW((NTSTRSAFE_PWSTR)v10 + 8, 0x190uLL, a2) >= 0 )
      {
        v12 = *(_QWORD **)(a3 + 24);
        if ( *v12 != a3 + 16 )
          __fastfail(3u);
        *v11 = a3 + 16;
        v11[1] = v12;
        *v12 = v11;
        *(_QWORD *)(a3 + 24) = v11;
        v11 = 0LL;
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x47706E50u);
    }
  }
LABEL_26:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
  return 0LL;
}
