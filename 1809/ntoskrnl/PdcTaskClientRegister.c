/*
 * XREFs of PdcTaskClientRegister @ 0x1407464C0
 * Callers:
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PdcPortOpen @ 0x140746570 (PdcPortOpen.c)
 */

__int64 __fastcall PdcTaskClientRegister(int a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63636450u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *v5 = 1667458128;
    v5[8] = a1;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
    v8 = 0LL;
    v6 = PdcPortOpen(a1, 4, (_DWORD)v5, (unsigned int)&v8);
    if ( !v6 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
