/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180034DBC
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180034CFC (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x1800272F8 (BlockSpatialAudioRegistryGates.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180035448 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003823C (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        LPCRITICAL_SECTION lpCriticalSection,
        LPCWSTR pwsz,
        unsigned __int8 a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6)
{
  const WCHAR *v7; // r13
  unsigned __int16 v9; // si
  const GUID *v10; // r9
  LPCGUID v11; // r8
  PRTL_CRITICAL_SECTION_DEBUG v12; // rcx
  int SpinCount; // eax
  char v14; // al
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int RecursionCount_low; // [rsp+54h] [rbp-B4h] BYREF
  LPCRITICAL_SECTION v28; // [rsp+58h] [rbp-B0h]
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+68h] [rbp-A0h]
  int v31[2]; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34[6]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  PRTL_CRITICAL_SECTION_DEBUG *p_DebugInfo; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  const GUID *v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  const GUID *v44; // [rsp+120h] [rbp+18h]
  int *p_RecursionCount_low; // [rsp+128h] [rbp+20h]
  const GUID *v46; // [rsp+130h] [rbp+28h]

  v32 = -2LL;
  *(_QWORD *)v31 = a4;
  v7 = pwsz;
  v30 = a5;
  v33 = a6;
  v9 = 0;
  if ( a4 )
  {
    EnterCriticalSection(lpCriticalSection);
    v28 = lpCriticalSection;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, v7);
      LOWORD(v24) = lpCriticalSection[171].SpinCount;
      v37 = &v24;
      v38 = 2LL;
      DebugInfo = lpCriticalSection[1].DebugInfo;
      p_DebugInfo = &DebugInfo;
      v40 = 8LL;
      v25 = a3;
      v41 = &v25;
      v42 = v10;
      v26 = BYTE2(lpCriticalSection[1].SpinCount);
      v43 = &v26;
      v44 = v10;
      RecursionCount_low = LOBYTE(lpCriticalSection[171].RecursionCount);
      p_RecursionCount_low = &RecursionCount_low;
      v46 = v10;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CA5F, v11, v10, 8u, &pData);
    }
    v12 = lpCriticalSection[1].DebugInfo;
    if ( v12 && (LOBYTE(lpCriticalSection[171].RecursionCount) || a3) )
    {
      if ( BYTE2(lpCriticalSection[1].SpinCount) )
      {
        (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v12->Type + 32LL))(v12);
        BYTE2(lpCriticalSection[1].SpinCount) = 0;
      }
      else
      {
        SpinCount = lpCriticalSection[171].SpinCount;
        if ( SpinCount )
        {
          if ( SpinCount == 1 )
            LODWORD(lpCriticalSection[171].SpinCount) = 3;
        }
        else
        {
          LODWORD(lpCriticalSection[171].SpinCount) = 1;
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          LOWORD(v24) = 0;
          while ( 1 )
          {
            memset_0(v34, 0, 0x28uLL);
            if ( v9 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&pDesc, v7);
              LOWORD(v25) = lpCriticalSection[171].SpinCount;
              v37 = &v25;
              v38 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CAF9, v20, v21, 4u, &pData);
            }
            v14 = BlockSpatialAudioRegistryGates();
            if ( !a3 && v14 < 0 )
              break;
            a3 = 0;
            v18 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    &pData,
                    a6);
            CSpatialProperties::SetSpatialAudioSettingsInternal(
              (int)lpCriticalSection,
              (int)v7,
              0,
              v31[0],
              v30,
              v18,
              (__int64)v34);
            EnterCriticalSection(lpCriticalSection);
            v28 = lpCriticalSection;
            v19 = lpCriticalSection[171].SpinCount;
            if ( v19 <= 1 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              goto LABEL_18;
            }
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, v7);
              v37 = &v24;
              v38 = 2LL;
              LOWORD(v25) = lpCriticalSection[171].SpinCount;
              p_DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG *)&v25;
              v40 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C9AA, v22, v23, 5u, &pData);
              v19 = lpCriticalSection[171].SpinCount;
            }
            if ( v19 != 3 )
            {
              LODWORD(lpCriticalSection[171].SpinCount) = 0;
              (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
              goto LABEL_18;
            }
            LODWORD(lpCriticalSection[171].SpinCount) = 1;
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            v9 = v24 + 1;
            LOWORD(v24) = v9;
            if ( v9 >= 5u )
              goto LABEL_20;
          }
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&pDesc, v7);
            LOWORD(v25) = lpCriticalSection[171].SpinCount;
            v37 = &v25;
            v38 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CA0C, v15, v16, 4u, &pData);
          }
          EnterCriticalSection(lpCriticalSection);
          LODWORD(lpCriticalSection[171].SpinCount) = 0;
        }
      }
    }
LABEL_18:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
LABEL_20:
  v17 = *(_QWORD *)(a6 + 56);
  if ( v17 )
  {
    LOBYTE(pwsz) = v17 != a6;
    (*(void (__fastcall **)(__int64, LPCWSTR))(*(_QWORD *)v17 + 32LL))(v17, pwsz);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
