/*
 * XREFs of ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18022FD24
 * Callers:
 *     ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x18022E320 (-Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x18022F310 (-GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV-$span@QEAVCComputeScribbl.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FBEC (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::ScheduleScribbleFrame(
        HANDLE *this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  float v12; // xmm6_4
  int v13; // ebx
  float v14[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h]
  float v17; // [rsp+44h] [rbp-1Ch]
  float v18; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  float v20; // [rsp+80h] [rbp+20h] BYREF

  if ( !WaitForSingleObject(this[6], 0) )
  {
    v9 = -2147467259;
    v10 = 167LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v15 = *a3;
  CComputeScribbleRenderer::CScheduler::GetWakeupTimeBeforeVBlank((__int64)this, (__int64 *)&v15, &v20, v14);
  v12 = v20;
  v13 = a5;
  while ( v12 > *((float *)this + 10) )
  {
    v12 = v12 - *((float *)this + 10);
    --v13;
  }
  memset_0(&v15, 0, 0x20uLL);
  v18 = v14[0];
  v17 = v12;
  *(_QWORD *)&v15 = a2;
  *((_QWORD *)&v15 + 1) = a4;
  v16 = v13;
  v9 = CComputeScribbleRenderer::CScheduler::Schedule(
         (CComputeScribbleRenderer::CScheduler *)this,
         (const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *)&v15);
  if ( v9 < 0 )
  {
    v10 = 188LL;
    goto LABEL_3;
  }
  return 0LL;
}
