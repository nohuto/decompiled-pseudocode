/*
 * XREFs of ?Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z @ 0x180043D08
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::Create(struct HMIL_CONNECTION__ *a1, struct CCompositor **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rsi
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rdx
  struct IDwmChannel *v10; // rcx
  struct IDwmChannel *v11; // rax
  void *v13; // [rsp+28h] [rbp-10h]
  struct IDwmChannel *v14; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = (CBaseObject *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CCompositor::`vftable';
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( !v5 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20u, v13);
    goto LABEL_13;
  }
  v14 = 0LL;
  v7 = MilConnection_CreateChannel(a1, &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x32u, v13);
    v10 = v14;
  }
  else
  {
    v9 = *((_QWORD *)v5 + 2);
    v10 = 0LL;
    v11 = v14;
    v14 = 0LL;
    *((_QWORD *)v5 + 2) = v11;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = v14;
    }
    v8 = 0;
  }
  if ( v8 >= 0 )
    goto LABEL_9;
  if ( v10 )
  {
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v10 + 40LL))(v10);
    v10 = v14;
LABEL_9:
    if ( v10 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x22u, v13);
  }
  else
  {
    v8 = 0;
    *a2 = v5;
    v6 = 0LL;
  }
LABEL_13:
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v8;
}
