/*
 * XREFs of ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180021A98
 * Callers:
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x1800260D0 (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x180021F58 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002B130 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3,
        int *a4)
{
  int updated; // ebx
  __int64 v5; // r13
  int v6; // edi
  unsigned int v7; // esi
  __int64 *v8; // r14
  struct _RTL_CRITICAL_SECTION *v10; // r15
  __int64 v11; // r15
  volatile signed __int32 *v12; // rdx
  const struct DuckingDescriptor *v13; // r9
  unsigned int v14; // esi
  __int64 *v15; // r14
  __int64 v16; // r15
  _QWORD *v17; // rdx
  const struct DuckingDescriptor *v18; // r9
  int v20; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+34h] [rbp-1Ch] BYREF
  volatile signed __int32 *v22; // [rsp+38h] [rbp-18h] BYREF
  void *v23[2]; // [rsp+40h] [rbp-10h] BYREF

  updated = 0;
  v5 = 21LL * a2;
  v6 = 0;
  v7 = 0;
  v8 = (__int64 *)&off_18003A6A0[v5];
  v10 = this;
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v22,
      *v8);
    v11 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
            v10[17].SpinCount,
            &v22);
    v12 = v22 - 6;
    if ( _InterlockedExchangeAdd(v22 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
    if ( v11 )
    {
      v20 = 0;
      v13 = (const struct DuckingDescriptor *)v11;
      v10 = this;
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v7, 1, v13, a3, &v20);
      if ( updated < 0 )
      {
LABEL_24:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_158de36ba96f34aff738b3a01c8d0888_Traceguids, updated);
        }
        AudPolicyLogError("CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains", 152, updated);
        return (unsigned int)updated;
      }
      if ( v6 || v20 )
        v6 = 1;
    }
    else
    {
      v10 = this;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 0x15 );
  v14 = 0;
  v15 = (__int64 *)&off_18003A6A0[v5];
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v23,
      *v15);
    v16 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
            v10[17].SpinCount,
            v23);
    v17 = (char *)v23[0] - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23[0] - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    if ( v16 )
    {
      v21 = 0;
      v18 = (const struct DuckingDescriptor *)v16;
      v10 = this;
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v14, 0, v18, a3, &v21);
      if ( updated < 0 )
        goto LABEL_24;
      if ( v6 || v21 )
        v6 = 1;
    }
    else
    {
      v10 = this;
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 0x15 );
  if ( a4 )
    *a4 = v6;
  return (unsigned int)updated;
}
