/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C012F020
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C012EEF0 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0019660 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C012F1A0 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C012F388 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
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
  __int64 v13; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v14; // rdi
  int v15; // ebp
  SIZE_T v16; // rax
  char *v17; // rax
  __int64 v18; // rcx
  char *v19; // rsi
  const void *v20; // rdx
  __int64 v21; // rax

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
      v15 = v8 + 4;
      v16 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v16 = -1LL;
      v17 = (char *)operator new(v16, 0x4B677844u, PagedPool);
      v19 = v17;
      if ( !v17 )
      {
        v21 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v21 + 32) = v8;
        goto LABEL_23;
      }
      v20 = this[96];
      if ( v20 )
        memmove(v17, v20, 8LL * *((unsigned int *)this + 190));
      memset(&v19[8 * *((unsigned int *)this + 190)], 0, 8LL * (unsigned int)(v15 - *((_DWORD *)this + 190)));
      operator delete[](this[96]);
      this[96] = v19;
      *((_DWORD *)this + 190) = v15;
    }
    v10 = this[96];
    v11 = v8;
    if ( v10[v8] )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
    v12 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v12 )
      v14 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v12);
    else
      v14 = 0LL;
    if ( v14 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v14) >= 0 )
      {
        *((_QWORD *)this[96] + v11) = v14;
        v10 = this[96];
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)v10[v11];
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v14);
      return 0LL;
    }
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 32) = v11;
LABEL_23:
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 0LL;
  }
  return result;
}
