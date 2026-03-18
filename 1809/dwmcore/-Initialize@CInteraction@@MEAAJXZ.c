/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x180089360
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180089448 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180089700 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z @ 0x180089724 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x18019BC0C (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned __int64 v3; // rcx
  struct IInteractionContextWrapper *v4; // rbx
  CInteractionContextWrapper *v5; // rax
  unsigned __int64 v6; // rcx
  struct IInteractionContextWrapper *v7; // rdi
  CInteractionContextWrapper *v8; // rax
  unsigned __int64 v9; // rcx
  struct IInteractionContextWrapper *v10; // rsi
  CInteractionContextWrapper *v11; // rax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  struct IInteractionContextWrapper *v17; // [rsp+58h] [rbp+10h] BYREF
  struct IInteractionContextWrapper *v18; // [rsp+60h] [rbp+18h] BYREF
  struct IInteractionContextWrapper *v19; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( v2 )
    v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  else
    v4 = 0LL;
  v19 = v4;
  if ( !v4 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x82u);
LABEL_24:
    SAFE_DELETE<IInteractionContextWrapper>(&v19);
    SAFE_DELETE<IInteractionContextWrapper>(&v17);
    SAFE_DELETE<IInteractionContextWrapper>(&v18);
    return v15;
  }
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( v5 )
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v7 = 0LL;
  v17 = v7;
  if ( !v7 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x85u);
    goto LABEL_24;
  }
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v6);
  if ( v8 )
    v10 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  else
    v10 = 0LL;
  v18 = v10;
  if ( !v10 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x88u);
    goto LABEL_24;
  }
  v11 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v9);
  if ( v11 )
    v11 = CInteractionContextWrapper::CInteractionContextWrapper(v11);
  if ( !v11 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x8Bu);
    goto LABEL_24;
  }
  v13 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 336), v4, v7, v10, v11);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x8Du);
    goto LABEL_24;
  }
  return v15;
}
