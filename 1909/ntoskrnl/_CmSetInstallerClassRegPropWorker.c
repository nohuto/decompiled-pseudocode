/*
 * XREFs of _CmSetInstallerClassRegPropWorker @ 0x140935C9C
 * Callers:
 *     _CmSetInstallerClassRegProp @ 0x140935B38 (_CmSetInstallerClassRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     _MapCmClassPropertyToRegValue @ 0x140145AB0 (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyRead @ 0x140145B20 (_CmClassPropertyRead.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     _CmClassPropertyWrite @ 0x14034AA64 (_CmClassPropertyWrite.c)
 *     _CmOpenInstallerClassRegKey @ 0x1405BD4A4 (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1624 (_PnpOpenPropertiesKey.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1406407B0 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmRaisePropertyChangeEvent @ 0x140705D24 (_CmRaisePropertyChangeEvent.c)
 *     _RegRtlSetValue @ 0x14071A884 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        ULONG a5,
        void *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int inited; // ebx
  void *v12; // r15
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // edx
  HANDLE v20; // rsi
  const wchar_t *v21; // rax
  int v22; // eax
  HANDLE v23; // r9
  __int64 v25; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  inited = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v12 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v12 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    goto LABEL_55;
  if ( !CmClassPropertyWrite(v13) )
    return (unsigned int)-1073741790;
  if ( a4 == 8 || a4 == 13 )
  {
    v18 = 1;
  }
  else
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741264;
    if ( a4 <= 19 )
    {
      v18 = 7;
    }
    else
    {
      if ( a4 != 24 )
      {
        if ( (unsigned int)(v17 - 26) <= 2 )
        {
          v18 = 4;
          goto LABEL_21;
        }
        return (unsigned int)-1073741264;
      }
      v18 = 3;
    }
  }
LABEL_21:
  if ( a5 != v18 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_31;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24 || !SecurityDescriptorLength )
  {
LABEL_31:
    if ( !a3 )
    {
      inited = CmOpenInstallerClassRegKey(a1, v14, v16, v17, 33554438, 0, (__int64)&Handle, 0LL);
      if ( inited < 0 )
        goto LABEL_56;
    }
    if ( a4 < 20 )
    {
      v20 = a3;
      if ( !a3 )
        v20 = Handle;
    }
    else
    {
      v19 = (int)Handle;
      if ( a3 )
        v19 = (int)a3;
      inited = PnpOpenPropertiesKey(a1, v19, 0LL, 2, 1, v25, &KeyHandle);
      if ( inited < 0 )
        goto LABEL_56;
      v20 = KeyHandle;
    }
    v21 = MapCmClassPropertyToRegValue(v15, a4);
    if ( v21 )
    {
      if ( SecurityDescriptorLength )
      {
        v22 = RegRtlSetValue(v20, v21, a5, v12, SecurityDescriptorLength);
        if ( v22 == -1073741444 )
        {
          inited = -1073741772;
          goto LABEL_56;
        }
        if ( v22 < 0 )
          inited = v22;
      }
      else
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, v21);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v20, &DestinationString);
        if ( inited == -1073741772 || inited == -1073741444 )
          inited = -1073741275;
      }
      if ( inited >= 0 )
      {
        v23 = Handle;
        if ( a3 )
          v23 = a3;
        CmRaisePropertyChangeEvent(a1, a2, 2u, (__int64)v23, a4);
      }
      goto LABEL_56;
    }
LABEL_55:
    inited = -1073741264;
    goto LABEL_56;
  }
  if ( RtlValidRelativeSecurityDescriptor(v12, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v12) == SecurityDescriptorLength )
  {
    v14 = a2;
    goto LABEL_31;
  }
  inited = -1073741811;
LABEL_56:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
