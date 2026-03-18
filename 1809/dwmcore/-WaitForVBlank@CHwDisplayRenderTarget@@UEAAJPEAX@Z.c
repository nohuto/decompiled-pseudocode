/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800EADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 208));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18024C878, 1u, v4, 0x235u);
  }
  else if ( *(_DWORD *)(*(_QWORD *)&g_pComposition + 1080LL) == 6 )
  {
    v10 = *((_QWORD *)this + 3);
    v13 = a2;
    v11 = (*(__int64 (__fastcall **)(_QWORD, bool, void **))(**(_QWORD **)(v10 + 40) + 48LL))(
            *(_QWORD *)(v10 + 40),
            a2 != 0LL,
            &v13);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18024C878, 1u, v11, 0x23Eu);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18024C878, 1u, v7, 0x239u);
  }
  return v6;
}
