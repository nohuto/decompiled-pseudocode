/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180037F84
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800365C0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___ @ 0x180036B80 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b5963e117fe1767c779e8f4655192291___.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180031BDC (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012D048 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18012D048.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  char v12; // al
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rax
  char *v16; // rsi
  HANDLE ProcessHeap; // rax
  char *v18; // r15
  char *v19; // rsi
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v4 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v20);
    v5 = *(__int64 **)v4;
    *(_DWORD *)(v4 + 24) = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      if ( v6 == v4 )
      {
        *v5 = *(_QWORD *)(v4 + 16);
        break;
      }
      v5 = (__int64 *)(v6 + 16);
      *(_QWORD *)v4 = v6 + 16;
    }
    *(_QWORD *)v4 = 0LL;
  }
  if ( *(_QWORD *)(a2 + 304) )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    v7 = *(volatile signed __int32 **)(a1 + 304);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      {
        v16 = *(char **)(a1 + 304);
        if ( v16 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v16 + 8);
          operator delete(v16, (const struct std::nothrow_t *)0x100);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
    v8 = *(volatile signed __int32 **)(a2 + 304);
    *(_QWORD *)(a1 + 304) = v8;
    if ( v8 )
      _InterlockedIncrement(v8);
  }
  else
  {
    v10 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      *v10 = 1;
      v10[2] = 0;
      *((_BYTE *)v10 + 12) = 0;
      v10[2] = *(_DWORD *)(a2 + 56);
      *((_BYTE *)v10 + 12) = *(_BYTE *)(a2 + 60);
      *((_OWORD *)v10 + 1) = *(_OWORD *)(a2 + 64);
      *((_OWORD *)v10 + 2) = *(_OWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 56) = 0;
      *(_BYTE *)(a2 + 60) = 0;
      memset_0(v10 + 12, 0, 0x20uLL);
      v11[12] = *(_DWORD *)(a2 + 96);
      *((_QWORD *)v11 + 7) = *(_QWORD *)(a2 + 104);
      if ( *((_BYTE *)v11 + 72) )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, *((LPVOID *)v11 + 8));
        *((_BYTE *)v11 + 72) = 0;
      }
      *((_QWORD *)v11 + 8) = 0LL;
      *((_QWORD *)v11 + 8) = *(_QWORD *)(a2 + 112);
      v12 = *(_BYTE *)(a2 + 120);
      *(_QWORD *)(a2 + 112) = 0LL;
      *((_BYTE *)v11 + 72) = v12;
      *(_BYTE *)(a2 + 120) = 0;
      v11[20] = *(_DWORD *)(a2 + 128);
      v11[21] = *(_DWORD *)(a2 + 132);
      wil::StoredFailureInfo::StoredFailureInfo((__int64)(v11 + 22), a2 + 136);
      *((_QWORD *)v11 + 31) = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      v13 = *(volatile signed __int32 **)(a1 + 304);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
        {
          v18 = *(char **)(a1 + 304);
          if ( v18 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v18 + 8);
            operator delete(v18, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      *(_QWORD *)(a1 + 304) = v11;
      *(_QWORD *)(a1 + 48) = (unsigned __int64)(v11 + 2) & -(__int64)(v11 != 0LL);
      v14 = *(volatile signed __int32 **)(a2 + 304);
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
        {
          v19 = *(char **)(a2 + 304);
          if ( v19 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v19 + 8);
            operator delete(v19, (const struct std::nothrow_t *)0x100);
          }
        }
        *(_QWORD *)(a2 + 304) = 0LL;
      }
      v15 = *(volatile signed __int32 **)(a1 + 304);
      *(_QWORD *)(a2 + 304) = v15;
      if ( v15 )
        _InterlockedIncrement(v15);
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
