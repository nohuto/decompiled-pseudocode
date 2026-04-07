/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800838E0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800844B8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B5F70 (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@II@Z @ 0x1800B6604 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@II@Z.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(CMagnifier *this, const struct MAGN_FILTERLIST *a2)
{
  __int64 v3; // r15
  unsigned int v5; // r14d
  CVisualGroupProxy **v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-128h]
  struct CVisualProxy *v24[26]; // [rsp+40h] [rbp-118h] BYREF

  v3 = 0LL;
  v5 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  if ( dword_1800DEE90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEE90);
    if ( dword_1800DEE90 == -1 )
    {
      dword_1800DEDD4 = -2147023728;
      Init_thread_footer(&dword_1800DEE90);
    }
  }
  v6 = (CVisualGroupProxy **)((char *)this + 48);
  if ( *((_QWORD *)this + 6)
    || (v7 = CCompositor::CreateProxy<CVisualGroupProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               (char *)this + 48),
        v8 = v7,
        v7 >= 0) )
  {
    if ( !v5 || *(_DWORD *)a2 == 1 && *((_QWORD *)this + 7) == *((_QWORD *)a2 + 1) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                            + 16LL)
                                                              + 752LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
              0LL);
      v8 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDD4, 1LL, v21, 0xEAu);
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = 0LL;
      v23 = 0;
      if ( *(_DWORD *)a2 )
      {
        do
        {
          if ( (unsigned int)v11 >= 0x19 )
            break;
          if ( *((_QWORD *)this + 7) != *((_QWORD *)a2 + v11 + 1) )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
            if ( v12 )
            {
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 400);
                if ( v14 )
                {
                  ++v10;
                  v24[v3] = *(struct CVisualProxy **)(v14 + 16);
                  v3 = (unsigned int)(v3 + 1);
                }
              }
            }
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)a2 );
        v9 = 0;
      }
      if ( (unsigned int)v11 < v5 )
      {
        v15 = (_QWORD *)((char *)a2 + 8 * v11 + 8);
        while ( (unsigned int)v11 < 0x19 )
        {
          if ( *((_QWORD *)this + 7) != *v15 )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
            if ( !v16 )
            {
              v8 = -2147023728;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDD4, 1LL, -2147023728, 0x119u);
              return v8;
            }
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            v9 = v23;
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 400);
              if ( v18 )
              {
                v9 = ++v23;
                v24[v3] = *(struct CVisualProxy **)(*(_QWORD *)(v18 + 256) + 16LL);
                v3 = (unsigned int)(v3 + 1);
              }
            }
          }
          LODWORD(v11) = v11 + 1;
          ++v15;
          if ( (unsigned int)v11 >= v5 )
            break;
        }
      }
      v19 = CVisualGroupProxy::Update(*v6, v24, v10, v9);
      v8 = v19;
      if ( v19 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL)
                                                                              + 16LL)
                                                                + 752LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
                *(unsigned int *)(*((_QWORD *)*v6 + 2) + 24LL));
        v8 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDD4, 1LL, v20, 0x12Eu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDD4, 1LL, v19, 0x12Au);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DEDD4, 1LL, v7, 0xE2u);
  }
  return v8;
}
