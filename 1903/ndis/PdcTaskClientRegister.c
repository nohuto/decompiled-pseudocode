/*
 * XREFs of PdcTaskClientRegister @ 0x1C0129920
 * Callers:
 *     ndisMRegisterPDCTaskClient @ 0x1C011952C (ndisMRegisterPDCTaskClient.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     PdcPortOpenCommon @ 0x1C0129BD8 (PdcPortOpenCommon.c)
 */

__int64 __fastcall PdcTaskClientRegister(__int64 a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63636450u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v9 = 0LL;
    *v4 = 1667458128;
    v4[8] = 95;
    v5 = PdcPortOpenCommon(v7, v6, (_DWORD)v4, (unsigned int)&v9);
    if ( !v5 )
    {
      *a2 = v4;
      v4 = 0LL;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
