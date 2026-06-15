/*
 * XREFs of ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180056E8C
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180057050 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     BlockSpatialAudioRegistryGates @ 0x18004C7C4 (BlockSpatialAudioRegistryGates.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSpatialProperties::SetSpatialAudioSettings(
        __int64 a1,
        const WCHAR *a2,
        unsigned __int8 a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        __int64 a6)
{
  const WCHAR *v7; // r13
  unsigned __int16 v9; // si
  __int64 v10; // rcx
  int v11; // eax
  char v12; // al
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r10
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v31; // [rsp+68h] [rbp-A0h]
  int v32[2]; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 v35[6]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  int *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]

  v33 = -2LL;
  *(_QWORD *)v32 = a4;
  v7 = a2;
  v31 = a5;
  v34 = a6;
  v9 = 0;
  if ( a4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)a1);
    v29 = a1;
    if ( (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, v7);
      LOWORD(v25) = *(_WORD *)(a1 + 6872);
      v38 = &v25;
      v39 = 2LL;
      v30 = *(_QWORD *)(a1 + 40);
      v40 = &v30;
      v41 = 8LL;
      v26 = a3;
      v42 = &v26;
      v43 = v16;
      v27 = *(unsigned __int8 *)(a1 + 74);
      v44 = &v27;
      v45 = v16;
      v28 = *(unsigned __int8 *)(a1 + 6852);
      v46 = &v28;
      v47 = v16;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177759, v17, v18, 8u, &pData);
    }
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 && (*(_BYTE *)(a1 + 6852) || a3) )
    {
      if ( *(_BYTE *)(a1 + 74) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        *(_BYTE *)(a1 + 74) = 0;
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 6872);
        if ( v11 )
        {
          if ( v11 == 1 )
            *(_DWORD *)(a1 + 6872) = 3;
        }
        else
        {
          *(_DWORD *)(a1 + 6872) = 1;
          if ( a1 )
            LeaveCriticalSection((LPCRITICAL_SECTION)a1);
          LOWORD(v25) = 0;
          while ( 1 )
          {
            memset_0(v35, 0, 0x28uLL);
            if ( v9 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&pDesc, v7);
              LOWORD(v26) = *(_WORD *)(a1 + 6872);
              v38 = &v26;
              v39 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177846, v19, v20, 4u, &pData);
            }
            v12 = BlockSpatialAudioRegistryGates();
            if ( !a3 && v12 < 0 )
              break;
            a3 = 0;
            v13 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&pData,
                    a6);
            CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v7, 0, *(__int64 *)v32, v31, v13, (__int64)v35);
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v29 = a1;
            v14 = *(_DWORD *)(a1 + 6872);
            if ( v14 <= 1 )
            {
              *(_DWORD *)(a1 + 6872) = 0;
              goto LABEL_16;
            }
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, v7);
              v38 = &v25;
              v39 = 2LL;
              LOWORD(v26) = *(_WORD *)(a1 + 6872);
              v40 = (__int64 *)&v26;
              v41 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801776C0, v23, v24, 5u, &pData);
              v14 = *(_DWORD *)(a1 + 6872);
            }
            if ( v14 != 3 )
            {
              *(_DWORD *)(a1 + 6872) = 0;
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
              goto LABEL_16;
            }
            *(_DWORD *)(a1 + 6872) = 1;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            v9 = v25 + 1;
            LOWORD(v25) = v9;
            if ( v9 >= 5u )
              goto LABEL_18;
          }
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&pDesc, v7);
            LOWORD(v26) = *(_WORD *)(a1 + 6872);
            v38 = &v26;
            v39 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801777F3, v21, v22, 4u, &pData);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)a1);
          *(_DWORD *)(a1 + 6872) = 0;
        }
      }
    }
LABEL_16:
    if ( a1 )
      LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  }
LABEL_18:
  v15 = *(_QWORD *)(a6 + 56);
  if ( v15 )
  {
    LOBYTE(a2) = v15 != a6;
    (*(void (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v15 + 32LL))(v15, a2);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
}
