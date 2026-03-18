/*
 * XREFs of UsbhGetMsOsContainerID @ 0x1C0020938
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C0043C00 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMsOsContainerID(int a1, __int64 a2)
{
  char *v3; // rbx
  int v4; // r14d
  _DWORD *v5; // rsi
  int v6; // eax
  unsigned int MsOsFeatureDescriptor; // edi
  char *PoolWithTag; // rax
  int v10; // r8d
  int v11; // r8d
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  int v16; // [rsp+48h] [rbp-30h]
  int ValueData; // [rsp+90h] [rbp+18h] BYREF

  ValueData = 0;
  v3 = 0LL;
  v4 = a2;
  v5 = PdoExt(a2);
  v6 = v5[358];
  if ( (v6 & 0x400) == 0 || (v6 & 0x8000) != 0 )
    goto LABEL_2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v10, 6, (__int64)PoolWithTag, 8, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( *((_QWORD *)v5 + 142) )
    {
      v12 = (const WCHAR *)*((_QWORD *)v5 + 143);
      ValueData = 1;
      RtlWriteRegistryValue(0, v12, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v5[358] |= 0x8000u;
    }
    goto LABEL_3;
  }
  if ( !ValueData )
    goto LABEL_2;
  if ( ValueData != 8 || *((_WORD *)v3 + 2) != 256 || *((_WORD *)v3 + 3) != 6 || *(_DWORD *)v3 != 24 )
  {
    LOBYTE(v16) = 0;
    UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 808, v16);
    goto LABEL_27;
  }
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v11, 6, (__int64)v3, 24, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( *((_QWORD *)v5 + 142) )
    {
      v13 = (const WCHAR *)*((_QWORD *)v5 + 143);
      ValueData = 1;
      RtlWriteRegistryValue(0, v13, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v5[358] |= 0x8000u;
      LOBYTE(v16) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v5 + 714),
        135,
        (int)v3,
        24,
        MsOsFeatureDescriptor,
        0,
        usbfile_msos_c,
        837,
        v16);
    }
    goto LABEL_3;
  }
  if ( ValueData == 24 )
  {
    v14 = *((_QWORD *)v3 + 1) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v14 )
      v14 = *((_QWORD *)v3 + 2) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v14 )
    {
      LOBYTE(v16) = 0;
      UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 854, v16);
      goto LABEL_27;
    }
    v15 = *(_OWORD *)(v3 + 8);
    *((_BYTE *)v5 + 2732) = 1;
    *(_OWORD *)(v5 + 679) = v15;
LABEL_2:
    MsOsFeatureDescriptor = 0;
    goto LABEL_3;
  }
  LOBYTE(v16) = 0;
  UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 844, v16);
LABEL_27:
  MsOsFeatureDescriptor = -1073741637;
LABEL_3:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return MsOsFeatureDescriptor;
}
