/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B054 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18002BED8 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002C00C (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x18002C358 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002C4A4 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CB58 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v8; // rdi
  int updated; // eax
  __int64 v10; // rcx
  CDWMDisplay *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-58h]
  void *v17; // [rsp+28h] [rbp-50h]
  CDWMDisplay *v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  v18 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(v1 + 80) )
  {
    while ( 1 )
    {
      v5 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)(v1 + 56) + 8 * v3);
      if ( *(_DWORD *)(v6 + 376) )
        break;
LABEL_3:
      v1 = *((_QWORD *)this + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 80) )
        goto LABEL_4;
    }
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 352) + 288 * v5;
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v8);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( *(_DWORD *)(v8 + 184) || *(_DWORD *)(v8 + 188) || *(_DWORD *)(v8 + 192) || *(_DWORD *)(v8 + 196) )
      {
        v10 = *(_QWORD *)(v8 + 104);
        v19 = 0uLL;
        if ( (unsigned int)GetUniformSpaceMapping(v10, &v19) )
          *(_OWORD *)(v8 + 184) = v19;
        if ( *(char *)(v8 + 200) >= 0 )
        {
          CAnalogCompositorManager::GetInstance();
          updated = DXGIOutputInfo::Validate((DXGIOutputInfo *)v8);
          v2 = updated;
          if ( updated < 0 )
          {
            v16 = 268;
            goto LABEL_35;
          }
          v11 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 224LL);
          if ( v11 )
            v11 = CDWMDisplay::CDWMDisplay(v11, (struct CDWMDXGIAdapter *)v6, (const struct DXGIOutputInfo *)v8);
          v18 = v11;
          if ( !v11 )
          {
            v2 = -2147024882;
            v16 = 276;
            goto LABEL_32;
          }
          v12 = *((_DWORD *)this + 16);
          v13 = v12 + 1;
          if ( v12 + 1 < v12 )
          {
            v2 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v17);
LABEL_30:
            v16 = 278;
LABEL_32:
            v15 = v2;
            goto LABEL_36;
          }
          if ( v13 <= *((_DWORD *)this + 15) )
          {
            v2 = 0;
            *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v18;
            *((_DWORD *)this + 16) = v13;
          }
          else
          {
            v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v18);
            v2 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u, v17);
            if ( v2 < 0 )
              goto LABEL_30;
          }
          v18 = 0LL;
        }
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 376) )
        goto LABEL_3;
    }
    v16 = 243;
LABEL_35:
    v15 = updated;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16, v17);
LABEL_4:
    if ( v18 )
      CDWMDisplay::Release(v18);
  }
  return (unsigned int)v2;
}
