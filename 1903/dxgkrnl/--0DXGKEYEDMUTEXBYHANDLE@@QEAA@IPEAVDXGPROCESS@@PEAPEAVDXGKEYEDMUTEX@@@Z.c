/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0044ACC
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C02683B0 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C026A5F4 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C026C0A0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C026C2F0 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00431C8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _KTHREAD *v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGKEYEDMUTEX *v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 56) )
    goto LABEL_7;
  v10 = a3[26];
  v8 = (unsigned int)v9;
  v11 = *((_DWORD *)v10 + 4 * v9 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) || (v11 & 0x2000) != 0 || (v11 & 0x1F) == 0 )
    goto LABEL_7;
  v8 = 2LL * (unsigned int)v9;
  v12 = v11 & 0x1F;
  if ( (_BYTE)v12 != 9 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v8, v10);
    *(_QWORD *)(v13 + 24) = 267LL;
    WdLogEvent5_WdError(v13);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = (DXGKEYEDMUTEX *)*((_QWORD *)v10 + 2 * (unsigned int)v9);
LABEL_8:
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    DXGKEYEDMUTEX::AcquireReference(v14, v8);
    v14 = *(DXGKEYEDMUTEX **)this;
  }
  *a4 = v14;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
