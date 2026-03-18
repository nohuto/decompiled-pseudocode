/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C003E00C
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0233E80 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235D28 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C02377D0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C0237A10 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C970 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rax
  struct _KTHREAD *v9; // r8
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rax
  DXGKEYEDMUTEX *v13; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)a3 + 62) )
    goto LABEL_7;
  v9 = a3[29];
  v10 = *((_DWORD *)v9 + 4 * v8 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v9 + 16 * v8 + 8) & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_7;
  v11 = v10 & 0x1F;
  if ( (_BYTE)v11 != 9 )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 316LL;
    WdLogEvent5_WdError(v12);
LABEL_7:
    v13 = 0LL;
    goto LABEL_8;
  }
  v13 = (DXGKEYEDMUTEX *)*((_QWORD *)v9 + 2 * (unsigned int)v8);
LABEL_8:
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    DXGKEYEDMUTEX::AcquireReference(v13);
    v13 = *(DXGKEYEDMUTEX **)this;
  }
  *a4 = v13;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return this;
}
