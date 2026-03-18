/*
 * XREFs of HMInitHandleTable @ 0x1C0267308
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0072BD8 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMInitHandleTable(__int64 a1, __int64 a2, __int64 a3)
{
  struct _HANDLEENTRY *v3; // rdi
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct _HANDLEENTRY *)gpvSharedBase;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v7,
    a2,
    a3);
  v4 = 0;
  v5 = gpKernelHandleTable;
  gHandlePages = 0LL;
  qword_1C0213700 = 0LL;
  qword_1C02136F8 = 0LL;
  qword_1C0213758 = v3;
  dword_1C0213760 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v5 = 0LL;
    *((_BYTE *)v3 + 24) = 0;
    v4 = 1;
    *((_WORD *)v3 + 13) = 1;
    qword_1C02136F8 = 2LL;
  }
  else
  {
    qword_1C0213758 = 0LL;
  }
  return v4;
}
