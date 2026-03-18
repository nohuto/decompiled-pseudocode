/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800D55C8
 * Callers:
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18009360C (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800D6608 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18006BB54 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        LPCSTR lpValue,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char v6; // si
  bool v7; // zf
  SIZE_T v8; // r8
  _BYTE *pvData; // r14
  unsigned int v10; // edi
  _BYTE *v11; // rax
  DWORD v12; // r15d
  int v13; // eax
  __int16 v14; // bx
  __int16 v15; // ax
  __int64 v16; // rcx
  char v17; // dl
  __int16 v18; // ax
  unsigned int v19; // eax
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // [rsp+40h] [rbp-30h] BYREF
  __int16 v28; // [rsp+44h] [rbp-2Ch]
  unsigned int v29[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+60h] [rbp-10h]
  DWORD v32; // [rsp+64h] [rbp-Ch]
  DWORD v33; // [rsp+68h] [rbp-8h]
  DWORD pcbData; // [rsp+B8h] [rbp+48h] BYREF

  if ( RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, 0LL, &pcbData) )
    return 0;
  v6 = 1;
  v7 = pcbData++ == -1;
  v8 = pcbData;
  if ( v7 )
    v8 = 1LL;
  pvData = HeapAlloc(WPF::g_processHeap, 0, v8);
  if ( !pvData
    || RegGetValueA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\Dwm", lpValue, 2u, 0LL, pvData, &pcbData) )
  {
    v6 = 0;
  }
  else
  {
    v31 = 0;
    v10 = 0;
    v32 = 0;
    v11 = pvData;
    v33 = 0;
    *(_QWORD *)v29 = pvData;
    v30 = 0LL;
    if ( *pvData )
    {
      v12 = pcbData;
      while ( 1 )
      {
        v13 = _o_strtoul(v11, v29, 16LL);
        v14 = v13;
        if ( (unsigned int)(v13 - 1) > 0xFFFE || **(_BYTE **)v29 != 58 )
          break;
        v15 = _o_strtoul(*(_QWORD *)v29 + 1LL, v29, 16LL);
        v16 = *(_QWORD *)v29;
        v17 = 0;
        if ( **(_BYTE **)v29 == 42 )
        {
          v15 *= 16;
          v17 = 1;
          v16 = ++*(_QWORD *)v29;
        }
        HIWORD(v27) = v15;
        v18 = -16;
        LOWORD(v27) = v14;
        if ( !v17 )
          v18 = -1;
        v28 = v18;
        v19 = v10 + 1;
        if ( v10 + 1 >= v10 )
          v12 = v10 + 1;
        v20 = v19 < v10 ? 0x80070216 : 0;
        if ( v19 < v10 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v20, 0xB5u);
        }
        else if ( v12 > v32 )
        {
          v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30, 6, 1, &v27);
          v20 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xC0u);
          v10 = v33;
        }
        else
        {
          v21 = v30;
          v22 = v10;
          v10 = v12;
          v33 = v12;
          v23 = 3 * v22;
          *(_DWORD *)(v30 + 2 * v23) = v27;
          *(_WORD *)(v21 + 2 * v23 + 4) = v28;
        }
        if ( v20 < 0 )
          break;
        v11 = *(_BYTE **)v29;
        if ( !**(_BYTE **)v29 )
          goto LABEL_21;
      }
      v6 = 0;
    }
    else
    {
LABEL_21:
      *a3 = v10;
      DynArrayImpl<0>::DetachData((__int64)&v30, 6u, a2);
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v30);
  }
  if ( pvData )
    WPF::ProcessHeapImpl::Free(pvData);
  return v6;
}
