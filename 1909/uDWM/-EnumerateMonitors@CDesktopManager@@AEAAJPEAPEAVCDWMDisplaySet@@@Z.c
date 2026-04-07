/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B054
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18002B224 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18002B2A0 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18002B364 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  struct CDWMDisplaySet *v2; // rax
  struct CDWMDXGIEnumeration **v4; // rsi
  __int64 v5; // rcx
  CDWMDisplaySet *v6; // rcx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  struct CDWMDXGIEnumeration *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  void *v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 20);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 152);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *v4 = 0LL;
  }
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 20);
  if ( v6 )
  {
    CDWMDisplaySet::Release(v6);
    *((_QWORD *)this + 20) = 0LL;
  }
  v7 = CDWMDXGIEnumeration::Create(v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x423u, v23);
    return (unsigned int)v8;
  }
  v9 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   112LL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 1;
    v11 = v9 + 18;
    v10[16] = 0;
    *((_QWORD *)v10 + 5) = v11;
    *((_QWORD *)v10 + 6) = v11;
    v10[14] = 4;
    v10[15] = 4;
    v10[7] = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 20) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v22 = 1060;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v22, v23);
    return (unsigned int)v8;
  }
  v12 = *v4;
  *((_QWORD *)v10 + 1) = *v4;
  if ( v12 )
    (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v12)(v12);
  v13 = CDWMDisplaySet::EnumerateOutputs((CDWMDisplaySet *)v10);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3DC8, 1u, v13, 0x76u, v23);
  }
  else
  {
    v14 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v10);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3DC8, 1u, v14, 0x78u, v23);
    else
      CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v10);
  }
  if ( v8 < 0 )
  {
    v22 = 1061;
    goto LABEL_34;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 104, 8LL);
  v15 = *((_QWORD *)this + 20);
  v16 = 0LL;
  if ( *(_DWORD *)(v15 + 64) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8 * v16) + 88LL) + 16LL);
      v18 = *((unsigned int *)this + 32);
      v24 = v17;
      v19 = v18 + 1;
      if ( (int)v18 + 1 < (unsigned int)v18 )
        break;
      if ( v19 <= *((_DWORD *)this + 31) )
      {
        v8 = 0;
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v18) = v24;
        *((_DWORD *)this + 32) = v19;
      }
      else
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8, 1, &v24);
        v8 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u, v23);
        if ( v8 < 0 )
          goto LABEL_33;
      }
      v15 = *((_QWORD *)this + 20);
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
        return (unsigned int)v8;
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v23);
LABEL_33:
    v22 = 1067;
    goto LABEL_34;
  }
  return (unsigned int)v8;
}
