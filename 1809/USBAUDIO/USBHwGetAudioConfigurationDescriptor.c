/*
 * XREFs of USBHwGetAudioConfigurationDescriptor @ 0x1C0029090
 * Callers:
 *     USBDeviceStart @ 0x1C0028000 (USBDeviceStart.c)
 * Callees:
 *     memset @ 0x1C00113C0 (memset.c)
 *     USBHwGetDescriptor @ 0x1C0028FB4 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioConfigurationDescriptor(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _WORD *v3; // rdi
  int Descriptor; // ebx
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  _WORD *PoolWithTag; // rax
  unsigned int v10; // eax
  ULONG v12; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)a3 = 0LL;
  a3[8] = 0;
  v3 = a3;
  v12 = 9;
  Descriptor = USBHwGetDescriptor(a1, 2u, 0, 0, &v12, a3);
  if ( Descriptor < 0 )
    goto LABEL_12;
  v7 = v3[1];
  if ( v7 < 9u )
    Descriptor = -1073741668;
  if ( Descriptor < 0 )
    goto LABEL_12;
  v8 = v7;
  Descriptor = -1073741670;
  v12 = v7;
  ExFreePool(v3);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8 + 2, 0x41627845u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8 + 2);
    Descriptor = USBHwGetDescriptor(a1, 2u, 0, 0, &v12, v3);
    if ( Descriptor >= 0 )
    {
      v10 = (unsigned __int16)v3[1];
      if ( v10 > v8 || (unsigned __int16)v10 < 9u )
        Descriptor = -1073741668;
      if ( Descriptor >= 0 )
      {
        *a2 = v3;
        return (unsigned int)Descriptor;
      }
    }
LABEL_12:
    ExFreePool(v3);
  }
  return (unsigned int)Descriptor;
}
