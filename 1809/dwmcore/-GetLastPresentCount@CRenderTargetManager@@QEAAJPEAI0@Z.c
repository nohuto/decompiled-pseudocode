/*
 * XREFs of ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800C7FCC
 * Callers:
 *     ?UpdatePresentCounts@CScheduleFrameInfoVolatileData@@QEAAXAEBVCComposition@@@Z @ 0x1800C7EE4 (-UpdatePresentCounts@CScheduleFrameInfoVolatileData@@QEAAXAEBVCComposition@@@Z.c)
 * Callees:
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18007A73C (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::GetLastPresentCount(
        CRenderTargetManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  int v13; // eax
  __int64 v14; // rcx

  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_18;
  do
  {
    if ( (unsigned int)v3 >= *a2 )
      break;
    v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL))(v8, 76LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 224LL))(v8) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(v8[8] + 104LL))(v8 + 8, &a3[v3]);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18024C878, 1u, v9, 0x414u);
      v3 = (unsigned int)(v3 + 1);
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < *((_DWORD *)this + 12) );
  if ( !(_DWORD)v3 )
  {
LABEL_18:
    if ( *a2 )
    {
      PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
      if ( PrimaryRenderTargetNoRef )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)PrimaryRenderTargetNoRef + 8) + 104LL))(
                (__int64)PrimaryRenderTargetNoRef + 64,
                a3);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_18024C878, 1u, v13, 0x420u);
        LODWORD(v3) = 1;
      }
    }
  }
  result = 2291662989LL;
  *a2 = v3;
  return result;
}
