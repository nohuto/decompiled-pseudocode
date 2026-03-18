/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800DD290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800B85F0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rcx
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 144));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802920EC, 1u, v4, 0x235u, 0LL);
  }
  else if ( *((_DWORD *)g_pComposition + 274) == 6 )
  {
    v10 = *((_QWORD *)this + 3);
    v13 = a2;
    v11 = (*(__int64 (__fastcall **)(_QWORD, bool, void **))(**(_QWORD **)(v10 + 40) + 48LL))(
            *(_QWORD *)(v10 + 40),
            a2 != 0LL,
            &v13);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802920EC, 1u, v11, 0x23Eu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802920EC, 1u, v7, 0x239u, 0LL);
  }
  return v6;
}
