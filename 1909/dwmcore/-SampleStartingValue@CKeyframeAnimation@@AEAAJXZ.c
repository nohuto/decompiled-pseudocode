/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800AA36C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6C40 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A7C04 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1802081F4 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C0298 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C0328 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // [rsp+28h] [rbp-19h]
  __int128 v20; // [rsp+38h] [rbp-9h] BYREF
  __int128 v21; // [rsp+48h] [rbp+7h]
  __int128 v22; // [rsp+58h] [rbp+17h]
  __int128 v23; // [rsp+68h] [rbp+27h]
  __int64 v24; // [rsp+78h] [rbp+37h]
  int v25; // [rsp+80h] [rbp+3Fh]
  char v26; // [rsp+84h] [rbp+43h]

  memset_0(&v20, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 44);
  v24 = 0LL;
  v25 = 18;
  v26 = 0;
  if ( *(_DWORD *)v2 )
    return 0;
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 16);
  else
    v4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v4 + 136LL))(
         v4,
         *((unsigned int *)this + 46),
         &v20);
  v7 = v5;
  if ( v5 < 0 )
  {
    v19 = 1959;
    goto LABEL_38;
  }
  v8 = *((_QWORD *)this + 24);
  if ( !v8
    || !*(_BYTE *)(v8 + 4)
    || (v5 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v20, (struct SubchannelMaskInfo *)v8),
        v7 = v5,
        v5 >= 0) )
  {
    v9 = *((_DWORD *)this + 36);
    *(_DWORD *)v2 = v9;
    if ( v9 > 52 )
    {
      v16 = v9 - 69;
      if ( !v16 || (v17 = v16 - 1) == 0 || (v18 = v17 - 1) == 0 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      v15 = (unsigned int)(v18 - 33);
      if ( !(_DWORD)v15 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        *(_QWORD *)(v2 + 24) = v21;
        goto LABEL_12;
      }
      if ( (_DWORD)v15 == 161 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        *(_OWORD *)(v2 + 24) = v21;
        *(_OWORD *)(v2 + 40) = v22;
        *(_OWORD *)(v2 + 56) = v23;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v9 == 52 )
      {
        *(_QWORD *)(v2 + 8) = v20;
        *(_DWORD *)(v2 + 16) = DWORD2(v20);
        goto LABEL_12;
      }
      v10 = v9 - 11;
      if ( !v10 )
      {
        Microsoft::WRL::ComPtr<CPathData>::operator=(v2 + 8, v24);
        goto LABEL_12;
      }
      v11 = v10 - 6;
      if ( !v11 )
      {
        *(_BYTE *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *(_DWORD *)(v2 + 8) = v20;
LABEL_12:
        v7 = 0;
        goto LABEL_13;
      }
      v15 = (unsigned int)(v12 - 17);
      if ( !(_DWORD)v15 )
      {
        *(_QWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      if ( (_DWORD)v15 == 7 )
      {
        *(_DWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
    }
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070057, 0x7EFu, 0LL);
    goto LABEL_13;
  }
  v19 = 1973;
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v19, 0LL);
LABEL_13:
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v7;
}
