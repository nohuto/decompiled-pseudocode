/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801E51A0
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801E5968 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C0328 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // cl
  int v10; // eax
  char v11; // al
  int v12; // xmm0_4
  int v13; // xmm1_4
  char v14; // al
  int v15; // xmm0_4
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-19h]
  __int64 v19; // [rsp+30h] [rbp-9h] BYREF
  int v20; // [rsp+38h] [rbp-1h]
  __int64 v21; // [rsp+70h] [rbp+37h]
  int v22; // [rsp+78h] [rbp+3Fh]
  char v23; // [rsp+7Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 564) & 0x30) == 0x30 )
    return 0;
  memset_0(&v19, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 22);
  v21 = 0LL;
  v22 = 18;
  v23 = 0;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 16);
  else
    v3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 136LL))(
         v3,
         *((unsigned int *)this + 46),
         &v19);
  v6 = v4;
  if ( v4 < 0 )
  {
    v18 = 685;
    goto LABEL_10;
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 4) )
    {
      v4 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v19, (struct SubchannelMaskInfo *)v7);
      v6 = v4;
      if ( v4 < 0 )
      {
        v18 = 696;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v18, 0LL);
        goto LABEL_11;
      }
    }
  }
  switch ( *((_DWORD *)this + 36) )
  {
    case 0x11:
LABEL_30:
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return 0;
    case 0x12:
      v14 = *((_BYTE *)this + 564);
      v15 = v19;
      if ( (v14 & 0x10) == 0 )
        *((_DWORD *)this + 78) = v19;
      if ( (v14 & 0x20) == 0 )
        *((_DWORD *)this + 84) = v15;
      goto LABEL_30;
    case 0x23:
      v11 = *((_BYTE *)this + 564);
      v12 = HIDWORD(v19);
      v13 = v19;
      if ( (v11 & 0x10) == 0 )
      {
        *((_DWORD *)this + 78) = v19;
        *((_DWORD *)this + 79) = v12;
      }
      if ( (v11 & 0x20) == 0 )
      {
        *((_DWORD *)this + 84) = v13;
        *((_DWORD *)this + 85) = v12;
      }
      goto LABEL_30;
    case 0x34:
      v9 = *((_BYTE *)this + 564);
      v10 = v20;
      if ( (v9 & 0x10) == 0 )
      {
        *((_QWORD *)this + 39) = v19;
        *((_DWORD *)this + 80) = v10;
      }
      if ( (v9 & 0x20) == 0 )
      {
        *((_QWORD *)this + 42) = v19;
        *((_DWORD *)this + 86) = v10;
      }
      goto LABEL_30;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(*((_DWORD *)this + 36) - 52), 0LL, 0, 0x80070057, 0x2E7u, 0LL);
LABEL_11:
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
