/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0133620
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01334E0 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001B03C (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01337A0 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C0133990 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        void **this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGPRESENTHISTORYTOKENQUEUE *v16; // rdi
  int v17; // ebp
  SIZE_T v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // rsi
  const void *v24; // rdx
  __int64 v25; // rax

  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 190)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[96] + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 190) )
    {
      v17 = v8 + 4;
      v18 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v18 = -1LL;
      v19 = (char *)operator new[](v18, 0x4B677844u, PagedPool);
      v23 = v19;
      if ( !v19 )
      {
        v25 = WdLogNewEntry5_WdError(v21, v20, v22);
        *(_QWORD *)(v25 + 32) = v8;
        goto LABEL_23;
      }
      v24 = this[96];
      if ( v24 )
        memmove(v19, v24, 8LL * *((unsigned int *)this + 190));
      memset(&v23[8 * *((unsigned int *)this + 190)], 0, 8LL * (unsigned int)(v17 - *((_DWORD *)this + 190)));
      operator delete[](this[96]);
      this[96] = v23;
      *((_DWORD *)this + 190) = v17;
    }
    v10 = this[96];
    v11 = v8;
    if ( v10[v8] )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
    v12 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v12 )
      v16 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v12);
    else
      v16 = 0LL;
    if ( v16 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v16) >= 0 )
      {
        *((_QWORD *)this[96] + v11) = v16;
        v10 = this[96];
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v16);
      return 0LL;
    }
    v25 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v25 + 32) = v11;
LABEL_23:
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    return 0LL;
  }
  return result;
}
