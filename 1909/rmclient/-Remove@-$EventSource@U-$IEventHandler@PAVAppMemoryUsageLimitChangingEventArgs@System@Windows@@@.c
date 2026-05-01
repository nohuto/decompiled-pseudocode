/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ @ 0x10007B2B (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_fa4066cff981cf6e25503d416ba3b572__Wind.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z @ 0x10011220 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z @ 0x1000BA0D (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@Y.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z @ 0x1001044B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z.c)
 */

int __stdcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1)
{
  int v1; // ebx
  Microsoft::WRL::Details::EventTargetArray *v2; // edi
  _DWORD *v3; // edx
  int v4; // eax
  int v5; // eax
  Microsoft::WRL::Details::EventTargetArray *v6; // ecx
  volatile signed __int32 ***v7; // esi
  struct IUnknown **v8; // eax
  volatile signed __int32 **v9; // edx
  int v10; // edi
  struct IUnknown **v11; // ebx
  char v12; // al
  __int64 v13; // rax
  bool v14; // zf
  int v16; // [esp+Ch] [ebp-18h]
  Microsoft::WRL::Details::EventTargetArray *v17; // [esp+14h] [ebp-10h] BYREF
  volatile signed __int32 **v18; // [esp+18h] [ebp-Ch] BYREF
  volatile signed __int32 ***v19; // [esp+1Ch] [ebp-8h] BYREF
  char v20; // [esp+23h] [ebp-1h]

  v1 = 0;
  v2 = 0;
  v17 = 0;
  AcquireSRWLockExclusive(&stru_10018444);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
LABEL_8:
    ReleaseSRWLockExclusive(&stru_10018444);
    return v1;
  }
  v3 = (_DWORD *)*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 3);
  v4 = ((*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 4) - (int)v3) >> 2) - 1;
  v19 = 0;
  v16 = v4;
  v18 = (volatile signed __int32 **)v4;
  v20 = 0;
  if ( !v4 )
  {
    if ( *v3 == a1 )
    {
LABEL_21:
      AcquireSRWLockExclusive(&SRWLock);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v17,
        (char *)&Windows::System::CMemoryManager::s_limitChangeEvent);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &Windows::System::CMemoryManager::s_limitChangeEvent,
        (char *)&v19);
      ReleaseSRWLockExclusive(&SRWLock);
      v2 = v17;
      v7 = v19;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned int &>(
         (volatile signed __int32 **)&v19,
         (unsigned int *)&v18);
  if ( v5 < 0 )
  {
    v1 = v5;
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v19);
    goto LABEL_8;
  }
  v6 = Windows::System::CMemoryManager::s_limitChangeEvent;
  v7 = v19;
  v8 = (struct IUnknown **)*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 3);
  v9 = (volatile signed __int32 **)*((_DWORD *)Windows::System::CMemoryManager::s_limitChangeEvent + 5);
  v18 = v9;
  if ( v8 == *((struct IUnknown ***)Windows::System::CMemoryManager::s_limitChangeEvent + 4) )
    goto LABEL_22;
  v10 = v16;
  v11 = v8;
  v12 = v20;
  do
  {
    if ( !v12 )
    {
      v13 = (int)*v11;
      if ( (_DWORD)a1 == (_DWORD)v13 )
      {
        v14 = HIDWORD(a1) == HIDWORD(v13);
        v9 = v18;
        if ( v14 )
        {
          v12 = 1;
          v20 = 1;
          goto LABEL_19;
        }
      }
      else
      {
        v9 = v18;
      }
      v12 = v20;
    }
    if ( !v10 )
      break;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v7, *v11, *v9);
    v6 = Windows::System::CMemoryManager::s_limitChangeEvent;
    v9 = v18 + 1;
    v12 = v20;
    --v10;
    ++v18;
LABEL_19:
    ++v11;
  }
  while ( v11 != *((struct IUnknown ***)v6 + 4) );
  v2 = v17;
  v1 = 0;
  if ( v12 )
    goto LABEL_21;
LABEL_22:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v7);
LABEL_24:
  ReleaseSRWLockExclusive(&stru_10018444);
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  return v1;
}
