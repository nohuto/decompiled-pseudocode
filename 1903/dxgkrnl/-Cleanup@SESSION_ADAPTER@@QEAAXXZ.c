/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C0144640
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014447C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C014C1CC (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01446B4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  SESSION_ADAPTER *v5; // rcx
  __int64 v6; // r8
  SESSION_ADAPTER *v7; // rdi
  DXGADAPTER *v8; // rcx
  _QWORD *v9; // rax
  SESSION_ADAPTER *v10; // r14
  SESSION_ADAPTER *v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  SESSION_ADAPTER **v17; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v9[3] = *((unsigned int *)this + 12);
    v9[4] = *((int *)this + 3);
    v9[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v9);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v7 = this[14];
  while ( v7 != (SESSION_ADAPTER *)(this + 14) )
  {
    v10 = v7;
    v11 = v7;
    v7 = *(SESSION_ADAPTER **)v7;
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
    v12[3] = *((unsigned int *)v11 + 10);
    v12[4] = *((unsigned int *)v11 - 4);
    v12[5] = *((int *)this + 3);
    v12[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v12);
    if ( *((_QWORD *)v11 + 7) || *((_QWORD *)v11 + 71) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = 2439LL;
      WdLogEvent5_WdAssertion(v15);
    }
    memset((char *)v11 + 56, 0, 0x200uLL);
    v16 = *((_DWORD *)v11 - 4);
    *((_QWORD *)v11 + 71) = 0LL;
    *((_DWORD *)v11 + 10) = 0;
    *((_DWORD *)this + 26) &= ~(1 << v16);
    *((_QWORD *)v11 - 1) = 0LL;
    v5 = *(SESSION_ADAPTER **)v10;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v10 + 8LL) != v10
      || (v17 = (SESSION_ADAPTER **)*((_QWORD *)v10 + 1), *v17 != v10) )
    {
      __fastfail(3u);
    }
    *v17 = v5;
    *((_QWORD *)v5 + 1) = v17;
    --*((_DWORD *)this + 27);
  }
  v8 = this[2];
  if ( v8 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v8);
    this[2] = 0LL;
  }
}
