/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Windows::Foundation::IEventHandler_IInspectable_____ @ 0x100078FC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_c8fac60120d0355ff66629c823b43c3a__Wind.c)
 *     ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z @ 0x100111E0 (-remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z.c)
 *     ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z @ 0x10011200 (-remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z @ 0x1000BA0D (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@Y.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z @ 0x1001044B (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z.c)
 */

int __thiscall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *this,
        __int64 a2)
{
  int v3; // ebx
  Microsoft::WRL::Details::EventTargetArray *v4; // esi
  RTL_SRWLOCK v5; // ecx
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // eax
  RTL_SRWLOCK v9; // eax
  struct IUnknown **v10; // ecx
  volatile signed __int32 **v11; // edx
  int v12; // esi
  struct IUnknown **v13; // ebx
  char v14; // cl
  __int64 v15; // rax
  bool v16; // zf
  int v18; // [esp+Ch] [ebp-18h]
  RTL_SRWLOCK *SRWLock; // [esp+10h] [ebp-14h]
  Microsoft::WRL::Details::EventTargetArray *v20; // [esp+14h] [ebp-10h] BYREF
  volatile signed __int32 **v21; // [esp+18h] [ebp-Ch] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [esp+1Ch] [ebp-8h] BYREF
  char v23; // [esp+23h] [ebp-1h]

  v3 = 0;
  v4 = 0;
  v20 = 0;
  SRWLock = this + 2;
  AcquireSRWLockExclusive(this + 2);
  v5.Ptr = this->Ptr;
  if ( !this->Ptr )
  {
LABEL_8:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return v3;
  }
  v6 = (_DWORD *)*((_DWORD *)v5.Ptr + 3);
  v7 = ((*((_DWORD *)v5.Ptr + 4) - (int)v6) >> 2) - 1;
  v22 = 0;
  v18 = v7;
  v21 = (volatile signed __int32 **)v7;
  v23 = 0;
  if ( !v7 )
  {
    if ( *v6 == a2 )
    {
LABEL_21:
      AcquireSRWLockExclusive(this + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v20, (char *)this);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        (Microsoft::WRL::Details::EventTargetArray **)this,
        (char *)&v22);
      if ( this != (RTL_SRWLOCK *)-4 )
        ReleaseSRWLockExclusive(this + 1);
      v4 = v20;
      goto LABEL_24;
    }
    goto LABEL_26;
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned int &>(
         (volatile signed __int32 **)&v22,
         (unsigned int *)&v21);
  if ( v8 < 0 )
  {
    v3 = v8;
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
    goto LABEL_8;
  }
  v9.Ptr = this->Ptr;
  v10 = (struct IUnknown **)*((_DWORD *)this->Ptr + 3);
  v11 = (volatile signed __int32 **)*((_DWORD *)this->Ptr + 5);
  v21 = v11;
  if ( v10 == *((struct IUnknown ***)v9.Ptr + 4) )
    goto LABEL_24;
  v12 = v18;
  v13 = v10;
  v14 = v23;
  do
  {
    if ( !v14 )
    {
      v15 = (int)*v13;
      if ( (_DWORD)a2 == (_DWORD)v15 )
      {
        v16 = HIDWORD(a2) == HIDWORD(v15);
        v11 = v21;
        if ( v16 )
        {
          v14 = 1;
          v23 = 1;
          goto LABEL_19;
        }
      }
      else
      {
        v11 = v21;
      }
    }
    if ( !v12 )
      break;
    Microsoft::WRL::Details::EventTargetArray::AddTail((volatile signed __int32 ***)v22, *v13, *v11);
    v14 = v23;
    v11 = ++v21;
    --v12;
LABEL_19:
    ++v13;
  }
  while ( v13 != *((struct IUnknown ***)this->Ptr + 4) );
  v4 = v20;
  v3 = 0;
  if ( v14 )
    goto LABEL_21;
LABEL_24:
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
LABEL_26:
  if ( this != (RTL_SRWLOCK *)-8 )
    ReleaseSRWLockExclusive(this + 2);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return v3;
}
