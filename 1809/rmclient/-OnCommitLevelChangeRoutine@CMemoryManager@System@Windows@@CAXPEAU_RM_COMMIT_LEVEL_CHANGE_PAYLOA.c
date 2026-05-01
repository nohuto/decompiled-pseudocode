/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x1800022B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180001920 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___ @ 0x180008C54 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Wind.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18000D9B0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) <= *(_DWORD *)a1 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>((RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelDecreasedEvent);
  }
  else
  {
    v5 = 0LL;
    v4 = 0LL;
    v3[0] = &v4;
    v1 = 0LL;
    v3[1] = &v5;
    AcquireSRWLockExclusive(&SRWLock);
    if ( Windows::System::CMemoryManager::s_levelIncreasedEvent )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::InternalAddRef(Windows::System::CMemoryManager::s_levelIncreasedEvent);
      v1 = v2;
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v1 )
    {
      Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_971d44314bc06fe495c30d812f15643d__Windows::Foundation::IEventHandler_IInspectable_____ptr64___(
        v3,
        v1,
        &Windows::System::CMemoryManager::s_levelIncreasedEvent);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
    }
  }
}
