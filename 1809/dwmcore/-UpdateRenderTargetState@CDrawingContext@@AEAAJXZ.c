/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800474D4
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180064198 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180076DAC (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  _QWORD *v1; // rdi
  CDisplaySet *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r14
  _DWORD *v6; // r15
  int v7; // eax
  CDisplayManager *v8; // rcx
  int v9; // edi
  int CurrentDisplaySetInternal; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  struct CDisplaySet *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  char v21; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  v1 = (_QWORD *)((char *)this + 360);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 45);
  v5 = 0LL;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *v1 = 0LL;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 44))(
    *((_QWORD *)this + 44),
    &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771,
    v1);
  if ( *v1 )
  {
    v9 = 0;
    goto LABEL_19;
  }
  v6 = (_DWORD *)((char *)this + 400);
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 44) + 120LL))(
         *((_QWORD *)this + 44),
         &v21,
         (char *)this + 400);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v7, 0x23FFu);
    goto LABEL_24;
  }
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 103) = -1;
  if ( *v6 == DisplayId::All || *v6 == DisplayId::None )
  {
LABEL_16:
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 44))(
           *((_QWORD *)this + 44),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v20) >= 0 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
    else
      v17 = 0;
    *((_DWORD *)this + 101) = v17;
    *((_BYTE *)this + 408) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 144LL))(*((_QWORD *)this + 44));
LABEL_19:
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    goto LABEL_21;
  }
  v19 = 0LL;
  CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal(v8, &v19);
  v9 = CurrentDisplaySetInternal;
  if ( CurrentDisplaySetInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CurrentDisplaySetInternal, 0xD9u);
  v3 = v19;
  if ( v9 >= 0 )
  {
    v12 = 0LL;
    if ( *((_DWORD *)v19 + 18) )
    {
      v13 = *((_QWORD *)v19 + 6);
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 8 * v12);
        v15 = *(_QWORD *)(v14 + 152);
        v16 = v15 ? *(_DWORD *)(v15 + 252) : *(_DWORD *)(v14 + 252);
        if ( *v6 == v16 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)v19 + 18) )
          goto LABEL_30;
      }
      v5 = *(_QWORD *)(v13 + 8 * v12);
      (**(void (__fastcall ***)(__int64))v14)(v5);
      *((_QWORD *)this + 52) = *(_QWORD *)(*(_QWORD *)(v5 + 152) + 16LL);
      *((_DWORD *)this + 103) = *(_DWORD *)(v5 + 300);
    }
    else
    {
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, 0x168u);
    }
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x240Du);
LABEL_21:
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v3);
    WPF::ProcessHeapImpl::Free(v3);
  }
LABEL_24:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v9;
}
