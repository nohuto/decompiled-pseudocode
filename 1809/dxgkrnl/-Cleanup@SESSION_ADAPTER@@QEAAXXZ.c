/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01392AC
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00BB9FC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C013BA34 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0139320 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this)
{
  SESSION_ADAPTER *v2; // rcx
  SESSION_ADAPTER *v3; // rdi
  DXGADAPTER *v4; // rcx
  _QWORD *v5; // rax
  SESSION_ADAPTER *v6; // r14
  SESSION_ADAPTER *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  SESSION_ADAPTER **v12; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v5[3] = *((unsigned int *)this + 12);
    v5[4] = *((int *)this + 3);
    v5[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v5);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v3 = this[14];
  while ( v3 != (SESSION_ADAPTER *)(this + 14) )
  {
    v6 = v3;
    v7 = v3;
    v3 = *(SESSION_ADAPTER **)v3;
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v2);
    v8[3] = *((unsigned int *)v7 + 10);
    v8[4] = *((unsigned int *)v7 - 4);
    v8[5] = *((int *)this + 3);
    v8[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v8);
    if ( *((_QWORD *)v7 + 7) || *((_QWORD *)v7 + 71) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 2322LL;
      WdLogEvent5_WdAssertion(v10);
    }
    memset((char *)v7 + 56, 0, 0x200uLL);
    v11 = *((_DWORD *)v7 - 4);
    *((_QWORD *)v7 + 71) = 0LL;
    *((_DWORD *)v7 + 10) = 0;
    *((_DWORD *)this + 26) &= ~(1 << v11);
    *((_QWORD *)v7 - 1) = 0LL;
    v2 = *(SESSION_ADAPTER **)v6;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v6 + 8LL) != v6 || (v12 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 1), *v12 != v6) )
      __fastfail(3u);
    *v12 = v2;
    *((_QWORD *)v2 + 1) = v12;
    --*((_DWORD *)this + 27);
  }
  v4 = this[2];
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    this[2] = 0LL;
  }
}
