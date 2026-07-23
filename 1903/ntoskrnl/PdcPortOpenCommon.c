/*
 * XREFs of PdcPortOpenCommon @ 0x1407871DC
 * Callers:
 *     PdcTaskClientRegister @ 0x14075B038 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x1408D916C (PdcPortOpen.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401C0CB0 (ZwPowerInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PdcpPortReleaseResources @ 0x1408D91FC (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  NTSTATUS v16; // edi
  _QWORD InputBuffer[22]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v19[100]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(InputBuffer, 0, 0xA8uLL);
  *a9 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6E8uLL, 0x50636450u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741801;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x6E8uLL);
  v15 = *a4;
  v14[1] = 0LL;
  *(_DWORD *)v14 = 1348691024;
  v14[218] = a3;
  *((_DWORD *)v14 + 4) = a1;
  *((_DWORD *)v14 + 5) = a2;
  v14[219] = v15;
  if ( !v15 && (((a2 - 4) & 0xFFFFFFFA) != 0 || a2 == 9) )
  {
    v16 = -1073741583;
LABEL_11:
    if ( v14 )
      PdcpPortReleaseResources(v14);
    return (unsigned int)v16;
  }
  v19[1] = 0LL;
  v19[2] = 0LL;
  HIDWORD(v19[5]) = 5;
  v19[7] = __PAIR64__(a2, a1);
  v19[0] = 52429560LL;
  LODWORD(InputBuffer[0]) = 1;
  InputBuffer[1] = v19;
  InputBuffer[2] = v14;
  v16 = ZwPowerInformation(PdcInvocation, InputBuffer, 0xA8u, 0LL, 0);
  if ( v16 >= 0 )
  {
    *a9 = v14;
    v16 = 0;
  }
  if ( v16 < 0 )
    goto LABEL_11;
  return (unsigned int)v16;
}
