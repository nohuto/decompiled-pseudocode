/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C017A194
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C017B000 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00047DC (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C017C300 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017E100 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017E75C (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  struct tagHID_POINTER_DEVICE_INFO *v3; // rbp
  CInertiaManager *Instance; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  struct tagPOINT v7; // rax
  void *v8; // r9
  CHidInput *v9; // rcx

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 74), 19);
  if ( v2 )
  {
    v3 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 480);
    Instance = CInertiaManager::GetInstance();
    v5 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                      Instance,
                      gptCursorAsync,
                      15LL);
    v6 = v5;
    if ( v5 )
    {
      *((_OWORD *)this + 13) = *(_OWORD *)v5;
      *((_OWORD *)this + 14) = *((_OWORD *)v5 + 1);
      *((_OWORD *)this + 15) = *((_OWORD *)v5 + 2);
      *((_OWORD *)this + 16) = *((_OWORD *)v5 + 3);
      *((_OWORD *)this + 17) = *((_OWORD *)v5 + 4);
      *((_OWORD *)this + 18) = *((_OWORD *)v5 + 5);
      *((_OWORD *)this + 19) = *((_OWORD *)v5 + 6);
      *((_OWORD *)this + 20) = *((_OWORD *)v5 + 7);
      *((_OWORD *)this + 21) = *((_OWORD *)v5 + 8);
      *((_OWORD *)this + 22) = *((_OWORD *)v5 + 9);
      *((_OWORD *)this + 23) = *((_OWORD *)v5 + 10);
      *((_OWORD *)this + 24) = *((_OWORD *)v5 + 11);
      *((struct tagPOINT *)this + 50) = gptCursorAsync;
      v7 = CPTPProcessor::TransformTPScreenToHimetric(v3, gptCursorAsync);
      v8 = (void *)*((_QWORD *)this + 74);
      *((_DWORD *)this + 105) |= 1u;
      *((struct tagPOINT *)this + 51) = v7;
      CHidInput::HandlePTPInertiaTimer(v9, 0, 0x32u, v8);
      *((_BYTE *)this + 584) = 1;
      CInertiaManager::InvalidateInertiaInfo(Instance, *v6, v6[1]);
    }
  }
}
