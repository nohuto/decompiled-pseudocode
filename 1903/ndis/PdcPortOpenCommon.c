/*
 * XREFs of PdcPortOpenCommon @ 0x1C0129BD8
 * Callers:
 *     PdcTaskClientRegister @ 0x1C0129920 (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     PdcpPortReleaseResources @ 0x1C0129D58 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        struct _EX_RUNDOWN_REF **a9)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  NTSTATUS v13; // edi
  _QWORD InputBuffer[22]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[100]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(InputBuffer, 0, 0xA8uLL);
  *a9 = 0LL;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x6E8uLL, 0x50636450u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741801;
LABEL_6:
    if ( v12 )
      PdcpPortReleaseResources(v12);
    return (unsigned int)v13;
  }
  memset(PoolWithTag, 0, 0x6E8uLL);
  v12[218].Count = a3;
  LODWORD(v12->Count) = 1348691024;
  HIDWORD(v12[2].Ptr) = 4;
  LODWORD(v12[2].Count) = 95;
  ExInitializeRundownProtection(v12 + 1);
  v12[219].Count = *a4;
  memset(v16, 0, sizeof(v16));
  v16[1] = 0LL;
  v16[2] = 0LL;
  InputBuffer[1] = v16;
  HIDWORD(v16[5]) = 5;
  v16[7] = 0x40000005FLL;
  v16[0] = 52429560LL;
  LODWORD(InputBuffer[0]) = 1;
  InputBuffer[2] = v12;
  v13 = ZwPowerInformation(PdcInvocation, InputBuffer, 0xA8u, 0LL, 0);
  if ( v13 >= 0 )
  {
    *a9 = v12;
    v13 = 0;
  }
  if ( v13 < 0 )
    goto LABEL_6;
  return (unsigned int)v13;
}
