/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18001D950
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800FB594 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x180100078 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  ATL::CAtlException *v10; // rbx
  __int64 *v11; // rdx
  PropertyChangedContext *v12; // rax
  unsigned int v13; // edx
  PropertyChangedContext *v14; // r14
  PropertyChangedContext *v15; // rbx
  unsigned int v16; // esi
  CAudioSessionManager *v17; // rcx
  __int64 v18; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  __int64 v21; // [rsp+0h] [rbp-88h] BYREF
  int v22; // [rsp+30h] [rbp-58h]
  PropertyChangedContext *v23; // [rsp+38h] [rbp-50h]
  PropertyChangedContext *v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  ATL::CAtlException *v26; // [rsp+50h] [rbp-38h] BYREF
  struct _tagpropertykey *v27; // [rsp+58h] [rbp-30h]

  v25 = -2LL;
  v3 = a3;
  v27 = a3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + v6);
    if ( v3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&v3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&v3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)v3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
    v6 += 16LL;
    if ( v6 >= 0x50 )
      return 0LL;
  }
  v12 = (PropertyChangedContext *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v12;
  v24 = v12;
  if ( v12 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v12, (__int64)&ATL::g_strmgr);
    *((_QWORD *)v14 + 4) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v14 + 5) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v23 = v14;
  v15 = v14;
  v24 = v14;
  if ( !v14 )
  {
    v16 = -2147024882;
    v17 = WPP_GLOBAL_Control;
LABEL_39:
    if ( v17 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v17 + 7) & 0x800000) != 0
      && *((_BYTE *)v17 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v17 + 2), 37LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v16);
    }
    goto LABEL_43;
  }
  v16 = 0;
  try
  {
    if ( a2 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
    }
    else
    {
      LODWORD(v18) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v14, a2, (unsigned int)v18);
  }
  catch ( ATL::CAtlException *v26 )
  {
    v11 = &v21;
    v10 = v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      o__resetstkoflw_0();
    v22 = *(_DWORD *)v10;
    v16 = v22;
    if ( v22 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'(v23, (unsigned int)v11);
      v15 = v24;
LABEL_37:
      v17 = WPP_GLOBAL_Control;
      goto LABEL_38;
    }
    v15 = v24;
    v14 = v23;
    v3 = v27;
  }
  *(GUID *)((char *)v14 + 8) = v3->fmtid;
  *((_DWORD *)v14 + 6) = v3->pid;
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandlePropertyValueChanged, v14, 0LL);
  *((_QWORD *)v14 + 5) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v15 = 0LL;
    goto LABEL_37;
  }
  LastError = GetLastError();
  v16 = LastError;
  if ( LastError > 0 )
    v16 = (unsigned __int16)LastError | 0x80070000;
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v16);
    goto LABEL_37;
  }
LABEL_38:
  if ( (v16 & 0x80000000) != 0 )
    goto LABEL_39;
LABEL_43:
  if ( v15 )
    PropertyChangedContext::`scalar deleting destructor'(v15, v13);
  return v16;
}
