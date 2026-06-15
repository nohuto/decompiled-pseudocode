/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180021DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180021F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  signed int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  bool v9; // si
  int v10; // eax
  float *v11; // rbx
  _QWORD *v12; // rdx
  struct TSSession *v14; // [rsp+20h] [rbp-38h] BYREF
  void *v15[3]; // [rsp+28h] [rbp-30h] BYREF

  v15[1] = (void *)-2LL;
  v7 = 0;
  v14 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15[2] = v8;
  v9 = 1;
  v10 = TsSessionFromSessionId(a2, 1, 0LL, &v14);
  if ( v10 )
  {
    v7 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v7 = v10;
LABEL_13:
    if ( v7 >= 0 )
      goto LABEL_19;
    goto LABEL_14;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v15,
    (__int64)a3);
  v11 = (float *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                   (char *)v14 + 280,
                   v15);
  v12 = (char *)v15[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
  if ( !v11 )
  {
    v7 = -2147024809;
LABEL_14:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v7);
    }
    AudPolicyLogError("TsSessionUpdateDuckingGainForId", 2524, v7);
    goto LABEL_19;
  }
  if ( *v11 == a4 )
    v9 = 0;
  *a5 = v9;
  if ( v9 )
  {
    *v11 = a4;
    goto LABEL_13;
  }
LABEL_19:
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v7;
}
