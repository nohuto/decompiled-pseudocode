/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00135E0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0014188 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00148F0 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0079610 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // rdi
  _LIST_ENTRY *p_m_PowerNotify; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *p_m_DriverOwned; // rdi
  _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v11; // al
  _LIST_ENTRY *p_m_PowerDriverNotified; // r15
  char v13; // bp
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  unsigned __int8 v16; // cl
  unsigned __int8 FxVerboseOn; // al
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rdx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v23; // rdi
  unsigned int v24; // ebp
  FxIoQueue *v25; // rax
  WDFQUEUE__ *v26; // r15
  unsigned __int8 v27; // r8
  WDFREQUEST__ *v28; // r8
  unsigned __int8 v29; // r8
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *v31; // rax
  _LIST_ENTRY *v32; // rax
  const void *_a1; // rdx
  unsigned __int16 v34; // r9
  unsigned __int8 v35; // al
  unsigned __int16 v36; // r9
  const void *v37; // rcx
  _LIST_ENTRY *v38; // rdx
  void *v39; // rdx
  const void *v40; // rcx
  _LIST_ENTRY *v41; // rcx
  _LIST_ENTRY *v42; // rax
  _LIST_ENTRY *v43; // rdx
  _LIST_ENTRY *v44; // rdx
  FxRequestBase *v45; // rdi
  __m128i m_IoStop; // xmm0
  FxIoQueue *v47; // rax
  unsigned int v48; // ebp
  void *v49; // rdx
  const void *v50; // rcx
  unsigned __int8 v51; // r8
  WDFREQUEST__ *v52; // r8
  WDFQUEUE__ *v53; // rdx
  unsigned __int8 v54; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v56; // rbx
  bool v57; // zf
  unsigned __int16 v58; // r9
  unsigned __int16 v59; // ax
  const void *v60; // rcx
  unsigned __int16 v61; // cx
  const void *v62; // rbx
  _LIST_ENTRY *v63; // rdx
  _LIST_ENTRY *v64; // rdx
  _LIST_ENTRY *v65; // r12
  void *v66; // rdi
  WDFQUEUE__ *v67; // rbp
  void *v68; // rcx
  const void *v69; // rax
  unsigned __int8 v70; // r8
  unsigned __int8 v71; // r8
  unsigned __int16 v72; // ax
  const void *v73; // rbx
  const void *v74; // rbx
  _FX_DRIVER_GLOBALS *v75; // rcx
  void *_a2; // [rsp+30h] [rbp-68h]
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-58h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-48h] BYREF
  FxIoQueueIoStop v79; // [rsp+60h] [rbp-38h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-28h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  switch ( this->m_PowerState )
  {
    case FxIoQueuePowerStartingTransition:
      if ( this->m_Dispatching == 1 )
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
      return 0;
    case FxIoQueuePowerStopping:
      *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      Flink = this->m_DriverOwned.Flink;
      FxVerboseOn = m_Globals->FxVerboseOn;
      if ( Flink != &this->m_DriverOwned )
      {
        if ( FxVerboseOn )
        {
          _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            _a1 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x56u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          Flink = p_m_DriverOwned->Flink;
        }
        goto LABEL_29;
      }
      if ( !FxVerboseOn )
        return 1;
      v34 = 87;
      goto LABEL_114;
    case FxIoQueuePowerStoppingNotifyingDriver:
      p_m_PowerNotify = &this->m_PowerNotify;
      v7 = this->m_PowerNotify.Flink;
      if ( v7 == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
        return 1;
      }
      if ( v7->Blink != p_m_PowerNotify )
        goto LABEL_53;
      v21 = v7->Flink;
      if ( v7->Flink->Blink != v7 )
        goto LABEL_53;
      p_m_PowerNotify->Flink = v21;
      v21->Blink = p_m_PowerNotify;
      Blink = this->m_PowerDriverNotified.Blink;
      if ( Blink->Flink != &this->m_PowerDriverNotified )
        goto LABEL_53;
      v7->Flink = &this->m_PowerDriverNotified;
      v23 = (FxRequestBase *)&v7[-19];
      v7->Blink = Blink;
      Blink->Flink = v7;
      this->m_PowerDriverNotified.Blink = v7;
      stopCallback = this->m_IoStop;
      if ( _mm_srli_si128((__m128i)stopCallback, 8).m128i_u64[0] && !v23->m_Canceled )
      {
        v24 = 1;
        v25 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
        if ( v25 != (FxIoQueue *)&this->m_DriverCancelable )
        {
          while ( ($41EACD23695CB34D39C03C31B435114F *)v25[-1].m_IoPkgListNode.m_ListEntry.Blink != &v23->120 )
          {
            v25 = (FxIoQueue *)v25->FxNonPagedObject::FxObject::__vftable;
            if ( v25 == (FxIoQueue *)&this->m_DriverCancelable )
              goto LABEL_38;
          }
          v24 = 268435457;
        }
LABEL_38:
        v26 = 0LL;
        if ( m_Globals->FxVerboseOn )
        {
          v39 = (void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v23->m_ObjectSize )
            v39 = 0LL;
          v40 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a2 = v39;
          if ( !this->m_ObjectSize )
            v40 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v40, _a2);
        }
        FxObject::AddRef(
          v23,
          (void *)0x646C6F48,
          5279,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Unlock(this, *PreviousIrql, v27);
        if ( m_Globals->FxVerifierOn )
          FxRequestBase::SetVerifierFlags(v23, 512);
        if ( v23->m_ObjectSize )
          v28 = (WDFREQUEST__ *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v28 = 0LL;
        if ( this->m_ObjectSize )
          v26 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        FxIoQueueIoStop::Invoke(&stopCallback, v26, v28, v24);
        v23->Release(v23, (void *)1684827976, 5289, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(this, PreviousIrql, v29);
      }
      return 1;
    case FxIoQueuePowerStoppingDriverNotified:
    case FxIoQueuePowerPurgeDriverNotified:
      p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
      v13 = 0;
      v14 = this->m_PowerDriverNotified.Flink;
      acknowledgedList.Blink = &acknowledgedList;
      p_acknowledgedList = &acknowledgedList;
      acknowledgedList.Flink = &acknowledgedList;
      if ( v14 == &this->m_PowerDriverNotified )
        goto LABEL_11;
      do
      {
        v30 = v14->Flink;
        if ( (unsigned __int8)(BYTE1(v14[3].Flink) - 1) <= 1u )
        {
          if ( v30->Blink != v14 )
            goto LABEL_53;
          v31 = v14->Blink;
          if ( v31->Flink != v14 )
            goto LABEL_53;
          v31->Flink = v30;
          v30->Blink = v31;
          v32 = acknowledgedList.Blink;
          if ( acknowledgedList.Blink->Flink != &acknowledgedList )
            goto LABEL_53;
          v14->Blink = acknowledgedList.Blink;
          v14->Flink = &acknowledgedList;
          v32->Flink = v14;
          acknowledgedList.Blink = v14;
        }
        v14 = v30;
      }
      while ( v30 != p_m_PowerDriverNotified );
      while ( 1 )
      {
        p_acknowledgedList = acknowledgedList.Flink;
LABEL_11:
        if ( p_acknowledgedList == &acknowledgedList )
          break;
        if ( p_acknowledgedList->Blink != &acknowledgedList )
          goto LABEL_53;
        v20 = p_acknowledgedList->Flink;
        if ( p_acknowledgedList->Flink->Blink != p_acknowledgedList )
          goto LABEL_53;
        acknowledgedList.Flink = p_acknowledgedList->Flink;
        v20->Blink = &acknowledgedList;
        FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql);
        v13 = 1;
      }
      if ( p_m_PowerDriverNotified->Flink != p_m_PowerDriverNotified )
      {
        if ( !m_Globals->FxVerboseOn )
          return v13;
        m_ObjectSize = this->m_ObjectSize;
        v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v57 = m_ObjectSize == 0;
        v58 = 92;
LABEL_107:
        if ( v57 )
          v56 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v58, WPP_FxIoQueue_cpp_Traceguids, v56);
        return v13;
      }
      if ( this->m_TwoPhaseCompletions )
      {
        if ( !m_Globals->FxVerboseOn )
          return v13;
        v59 = this->m_ObjectSize;
        v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v57 = v59 == 0;
        v58 = 93;
        goto LABEL_107;
      }
      v16 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching != 1 )
      {
        if ( v16 )
        {
          v61 = this->m_ObjectSize;
          v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v57 = v61 == 0;
          v58 = 95;
          goto LABEL_107;
        }
        return v13;
      }
      if ( v16 )
      {
        v60 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v60 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v60);
      }
      *p_m_PowerState = FxIoQueuePowerOff;
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
      return 1;
    case FxIoQueuePowerPurge:
      *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      Flink = this->m_DriverOwned.Flink;
      v35 = m_Globals->FxVerboseOn;
      if ( Flink != &this->m_DriverOwned )
      {
        if ( !v35 )
          goto LABEL_29;
        v36 = 88;
        goto LABEL_60;
      }
      if ( !v35 )
        return 1;
      v34 = 89;
      goto LABEL_114;
    case FxIoQueuePowerPurgeNotifyingDriver:
      v41 = &this->m_PowerNotify;
      v42 = this->m_PowerNotify.Flink;
      if ( v42 != &this->m_PowerNotify )
      {
        if ( v42->Blink != v41
          || (v43 = v42->Flink, v42->Flink->Blink != v42)
          || (v41->Flink = v43,
              v43->Blink = v41,
              v44 = this->m_PowerDriverNotified.Blink,
              v44->Flink != &this->m_PowerDriverNotified) )
        {
LABEL_53:
          __fastfail(3u);
        }
        v42->Flink = &this->m_PowerDriverNotified;
        v45 = (FxRequestBase *)&v42[-19];
        v42->Blink = v44;
        v44->Flink = v42;
        this->m_PowerDriverNotified.Blink = v42;
        m_IoStop = (__m128i)this->m_IoStop;
        BYTE1(v42[3].Flink) = 0;
        v79 = (FxIoQueueIoStop)m_IoStop;
        if ( _mm_srli_si128(m_IoStop, 8).m128i_u64[0] && !v45->m_Canceled )
        {
          v47 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
          if ( v47 == (FxIoQueue *)&this->m_DriverCancelable )
          {
LABEL_83:
            v48 = 2;
          }
          else
          {
            while ( ($41EACD23695CB34D39C03C31B435114F *)v47[-1].m_IoPkgListNode.m_ListEntry.Blink != &v45->120 )
            {
              v47 = (FxIoQueue *)v47->FxNonPagedObject::FxObject::__vftable;
              if ( v47 == (FxIoQueue *)&this->m_DriverCancelable )
                goto LABEL_83;
            }
            v48 = 268435458;
          }
          if ( m_Globals->FxVerboseOn )
          {
            v49 = (void *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v45->m_ObjectSize )
              v49 = 0LL;
            v50 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            _a2 = v49;
            if ( !this->m_ObjectSize )
              v50 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v50, _a2);
          }
          FxObject::AddRef(
            v45,
            (void *)0x646C6F48,
            5361,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Unlock(this, *PreviousIrql, v51);
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(v45, 512);
          v52 = (WDFREQUEST__ *)((unsigned __int64)v45 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v45->m_ObjectSize )
            v52 = 0LL;
          v53 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v53 = 0LL;
          FxIoQueueIoStop::Invoke(&v79, v53, v52, v48);
          v45->Release(
            v45,
            (void *)1684827976,
            5371,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Lock(this, PreviousIrql, v54);
        }
        return 1;
      }
      *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    case FxIoQueuePowerRestarting:
      *p_m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      Flink = this->m_DriverOwned.Flink;
      v11 = m_Globals->FxVerboseOn;
      if ( Flink == &this->m_DriverOwned )
      {
        if ( v11 )
        {
          v34 = 97;
LABEL_114:
          v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v62 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v34, WPP_FxIoQueue_cpp_Traceguids, v62);
        }
      }
      else if ( v11 )
      {
        v36 = 96;
LABEL_60:
        v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v37 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v36, WPP_FxIoQueue_cpp_Traceguids, v37);
        v38 = p_m_DriverOwned->Flink;
        this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
        this->m_PowerNotify.Flink = v38;
        v38->Blink = &this->m_PowerNotify;
        this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
        p_m_DriverOwned->Blink = p_m_DriverOwned;
        p_m_DriverOwned->Flink = p_m_DriverOwned;
      }
      else
      {
LABEL_29:
        this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
        this->m_PowerNotify.Flink = Flink;
        Flink->Blink = &this->m_PowerNotify;
        this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
        p_m_DriverOwned->Blink = p_m_DriverOwned;
        p_m_DriverOwned->Flink = p_m_DriverOwned;
      }
      return 1;
    case FxIoQueuePowerRestartingNotifyingDriver:
      v18 = &this->m_PowerNotify;
      v19 = this->m_PowerNotify.Flink;
      if ( v19 == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
        return 1;
      }
      if ( v19->Blink != v18 )
        goto LABEL_53;
      v63 = v19->Flink;
      if ( v19->Flink->Blink != v19 )
        goto LABEL_53;
      v18->Flink = v63;
      v63->Blink = v18;
      v64 = this->m_DriverOwned.Blink;
      if ( v64->Flink != &this->m_DriverOwned )
        goto LABEL_53;
      v19->Flink = &this->m_DriverOwned;
      v19->Blink = v64;
      v64->Flink = v19;
      this->m_DriverOwned.Blink = v19;
      v65 = v19 - 19;
      resumeCallback = this->m_IoResume;
      if ( !_mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] || HIBYTE(v65[13].Flink) )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v72 = this->m_ObjectSize;
          v73 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v72 )
            v73 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x63u, WPP_FxIoQueue_cpp_Traceguids, v73);
        }
      }
      else
      {
        v66 = (void *)((unsigned __int64)v65 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v67 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( m_Globals->FxVerboseOn )
        {
          v68 = (void *)((unsigned __int64)v65 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v65->Blink) )
            v68 = 0LL;
          v69 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a2 = v68;
          if ( !this->m_ObjectSize )
            v69 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v69, _a2);
        }
        FxObject::AddRef(
          (FxObject *)v65,
          (void *)0x646C6F48,
          5602,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Unlock(this, *PreviousIrql, v70);
        if ( !WORD1(v65->Blink) )
          v66 = 0LL;
        if ( !this->m_ObjectSize )
          v67 = 0LL;
        FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v67, v66);
        ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v65->Flink[1].Flink)(
          v65,
          1684827976LL,
          5608LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(this, PreviousIrql, v71);
      }
      return 1;
    case FxIoQueuePowerRestartingDriverNotified:
      if ( m_Globals->FxVerboseOn )
      {
        v74 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v57 = this->m_ObjectSize == 0;
        v75 = this->m_Globals;
        if ( v57 )
          v74 = 0LL;
        WPP_IFR_SF_q(v75, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v74);
      }
      *p_m_PowerState = FxIoQueuePowerOn;
      return 0;
    default:
      return 0;
  }
}
