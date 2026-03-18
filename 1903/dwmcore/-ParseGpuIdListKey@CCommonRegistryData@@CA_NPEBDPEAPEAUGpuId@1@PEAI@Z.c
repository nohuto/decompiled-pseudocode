/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800E22D8
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800259C4 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800B40AC (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18007DC60 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        LPCSTR lpValue,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v6; // si
  _BYTE *pvData; // rbx
  unsigned int v8; // edi
  _BYTE *v9; // rax
  int v10; // eax
  __int16 v11; // r14
  __int16 v12; // ax
  __int64 v13; // rcx
  char v14; // dl
  __int16 v15; // ax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  signed int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  int v24; // [rsp+40h] [rbp-30h] BYREF
  __int16 v25; // [rsp+44h] [rbp-2Ch]
  unsigned int v26[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF
  int v28; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+64h] [rbp-Ch]
  unsigned int v30; // [rsp+68h] [rbp-8h]
  DWORD pcbData; // [rsp+B8h] [rbp+48h] BYREF

  if ( RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, 0LL, &pcbData) )
    return 0;
  v6 = 1;
  pvData = DefaultHeap::Alloc(++pcbData);
  if ( !pvData
    || RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, pvData, &pcbData) )
  {
    v6 = 0;
    goto LABEL_17;
  }
  v28 = 0;
  v8 = 0;
  v29 = 0;
  *(_QWORD *)v26 = pvData;
  v9 = pvData;
  v27 = 0LL;
  v30 = 0;
  if ( !*pvData )
  {
LABEL_15:
    *a3 = v8;
    DynArrayImpl<0>::DetachData((__int64)&v27, 6u, a2);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v10 = _o_strtoul(v9, v26, 16LL);
    v11 = v10;
    if ( (unsigned int)(v10 - 1) > 0xFFFE || **(_BYTE **)v26 != 58 )
      break;
    v12 = _o_strtoul(*(_QWORD *)v26 + 1LL, v26, 16LL);
    v13 = *(_QWORD *)v26;
    v14 = 0;
    if ( **(_BYTE **)v26 == 42 )
    {
      v12 *= 16;
      v14 = 1;
      v13 = ++*(_QWORD *)v26;
    }
    HIWORD(v24) = v12;
    v15 = -16;
    LOWORD(v24) = v11;
    if ( !v14 )
      v15 = -1;
    v16 = v8 + 1;
    v25 = v15;
    if ( v8 + 1 < v8 )
    {
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v16 <= v29 )
      {
        v17 = v27;
        v18 = v8++;
        v30 = v16;
        v19 = 3 * v18;
        *(_DWORD *)(v27 + 2 * v19) = v24;
        *(_WORD *)(v17 + 2 * v19 + 4) = v25;
        goto LABEL_14;
      }
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v27, 6, 1, &v24);
      v23 = v21;
      if ( v21 >= 0 )
      {
        v8 = v30;
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC3u, 0LL);
      v8 = v30;
    }
    if ( v23 < 0 )
      break;
LABEL_14:
    v9 = *(_BYTE **)v26;
    if ( !**(_BYTE **)v26 )
      goto LABEL_15;
  }
  v6 = 0;
LABEL_16:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27);
LABEL_17:
  if ( pvData )
    operator delete(pvData);
  return v6;
}
