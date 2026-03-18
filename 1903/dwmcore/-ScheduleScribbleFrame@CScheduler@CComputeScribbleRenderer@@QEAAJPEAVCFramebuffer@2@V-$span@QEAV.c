/*
 * XREFs of ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801B7EE8
 * Callers:
 *     ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x1801B62A4 (-Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV?$span@QEAVCComputeScribble@@$0?0@gsl@@PEAM1@Z @ 0x1801B7354 (-GetWakeupTimeBeforeVBlank@CScheduler@CComputeScribbleRenderer@@AEAAXV-$span@QEAVCComputeScribbl.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B7DB0 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
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
  float v12; // xmm0_4
  int v13; // eax
  float v14[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  float v17; // [rsp+44h] [rbp-Ch]
  float v18; // [rsp+48h] [rbp-8h]
  int v19; // [rsp+4Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  float v21; // [rsp+70h] [rbp+20h] BYREF

  if ( !WaitForSingleObject(this[6], 0) )
  {
    v9 = -2147467259;
    v10 = 172LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v15 = *a3;
  CComputeScribbleRenderer::CScheduler::GetWakeupTimeBeforeVBlank((__int64)this, (unsigned __int64 *)&v15, &v21, v14);
  v12 = v21;
  v13 = a5;
  while ( v12 > *((float *)this + 10) )
  {
    v12 = v12 - *((float *)this + 10);
    --v13;
  }
  v19 = 0;
  v17 = v12;
  v18 = v14[0];
  *(_QWORD *)&v15 = a2;
  *((_QWORD *)&v15 + 1) = a4;
  v16 = v13;
  v9 = CComputeScribbleRenderer::CScheduler::Schedule(
         (CComputeScribbleRenderer::CScheduler *)this,
         (const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *)&v15);
  if ( v9 < 0 )
  {
    v10 = 193LL;
    goto LABEL_3;
  }
  return 0LL;
}
