/*
 * XREFs of ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x18006F6A4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x1800D8AA0 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  unsigned int v10; // ecx
  __int64 result; // rax
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  int v13; // eax
  unsigned int v14; // ecx

  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 12) )
    goto LABEL_18;
  do
  {
    if ( (unsigned int)v3 >= *a2 )
      break;
    v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL))(v8, 80LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 248LL))(v8) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(v8[8] + 104LL))(v8 + 8, &a3[v3]);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180280CA0, 1u, v9, 0x3FAu, 0LL);
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
          MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180280CA0, 1u, v13, 0x406u, 0LL);
        LODWORD(v3) = 1;
      }
    }
  }
  result = 2291662989LL;
  *a2 = v3;
  return result;
}
