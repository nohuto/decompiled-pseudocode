/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B7A4
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x180028C1C (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180029AEC (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18002B5AC (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18002B664 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18002B6E0 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002BEF4 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // r15
  unsigned int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x438u);
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
    v22 = 1081;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v22);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDC88, 1u, v13, 0x76u);
  }
  else
  {
    v14 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v10);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDC88, 1u, v14, 0x78u);
    else
      CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v10);
  }
  if ( v8 < 0 )
  {
    v22 = 1082;
    goto LABEL_37;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 104, 8LL);
  v15 = *((_QWORD *)this + 20);
  v16 = 0LL;
  if ( *(_DWORD *)(v15 + 64) )
  {
    v17 = v23;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 8 * v16) + 88LL) + 16LL);
      v18 = *((unsigned int *)this + 32);
      v19 = v18 + 1;
      if ( (int)v18 + 1 >= (unsigned int)v18 )
        v17 = v18 + 1;
      v8 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
      if ( v19 < (unsigned int)v18 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
      }
      else if ( v17 <= *((_DWORD *)this + 31) )
      {
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v18) = v23;
        *((_DWORD *)this + 32) = v17;
      }
      else
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8u, 1, &v23);
        v8 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
      }
      if ( v8 < 0 )
        break;
      v15 = *((_QWORD *)this + 20);
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
        return (unsigned int)v8;
    }
    v22 = 1088;
    goto LABEL_37;
  }
  return (unsigned int)v8;
}
