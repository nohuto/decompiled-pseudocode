/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00076EC (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0007C50 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007E60 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000F230 (DxgkGetSessionTokenManager.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014450 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0014AD0 (-DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C00150C0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  DXGFASTMUTEX *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)this + 74);
  v3 = 0LL;
  if ( v2 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2);
    v12 = (DXGFASTMUTEX *)(v2 + 80);
    if ( v2 == -80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL, v4);
      *(_QWORD *)(v9 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v12 + 2) == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v4);
      *(_QWORD *)(v10 + 24) = 666LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v13 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v4);
      v11[5] = &v12;
      v11[3] = 275LL;
      v11[4] = 4LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    DXGFASTMUTEX::Acquire(v12);
    v13 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * CurrentProcessSessionId);
      v13 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v12);
      return (struct DXGSESSIONDATA *)v7;
    }
  }
  return (struct DXGSESSIONDATA *)v3;
}
