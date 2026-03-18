/*
 * XREFs of ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800573D0
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  _QWORD *v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  _QWORD v21[3]; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v21[0] = 1LL;
  v3 = 0;
  v21[1] = &CColorBrush::k_rgAnimDef;
  v5 = v21;
  v6 = 0LL;
  v19 = v21;
  v20 = 0LL;
  while ( 1 )
  {
    if ( v6 == 1 && v5 == v21 )
      goto LABEL_14;
    if ( v6 == *v5 )
    {
      gsl::details::terminate((gsl::details *)v6);
      JUMPOUT(0x180057484LL);
    }
    v6 = *(_QWORD *)(v5[1] + 8 * v6);
    if ( a2 == *(_DWORD *)v6 )
      break;
    gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v19);
    v6 = v20;
    v5 = v19;
  }
  if ( !v6 )
  {
LABEL_14:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x24u);
    return v3;
  }
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v6 + 4);
  if ( v10 <= 69 )
  {
    if ( v10 == 69 )
    {
      *((_DWORD *)a3 + 18) = 69;
      goto LABEL_9;
    }
    v13 = v10 - 17;
    if ( !v13 )
    {
      *(_BYTE *)a3 = *((_BYTE *)this + v9);
      *((_DWORD *)a3 + 18) = 17;
      goto LABEL_10;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *(_DWORD *)a3 = *(_DWORD *)((char *)this + v9);
      *((_DWORD *)a3 + 18) = 18;
      goto LABEL_10;
    }
    v15 = v14 - 17;
    if ( !v15 )
    {
      *((_DWORD *)a3 + 18) = 35;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + v9);
      goto LABEL_10;
    }
    v16 = v15 - 7;
    if ( !v16 )
    {
      *((_DWORD *)a3 + 18) = 42;
      *(_DWORD *)a3 = *(_DWORD *)((char *)this + v9);
      goto LABEL_10;
    }
    if ( v16 == 10 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + v9);
      *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v9 + 8);
      goto LABEL_10;
    }
LABEL_32:
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  v11 = v10 - 70;
  if ( v11 )
  {
    v17 = v11 - 1;
    if ( !v17 )
    {
      *((_DWORD *)a3 + 18) = 71;
      goto LABEL_9;
    }
    v18 = v17 - 33;
    if ( !v18 )
    {
      *((_DWORD *)a3 + 18) = 104;
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + v9);
      *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v9 + 16);
      goto LABEL_10;
    }
    if ( v18 == 161 )
    {
      *((_DWORD *)a3 + 18) = 265;
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + v9);
      *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v9 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v9 + 32);
      *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v9 + 48);
      goto LABEL_10;
    }
    goto LABEL_32;
  }
  *((_DWORD *)a3 + 18) = 70;
LABEL_9:
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + v9);
LABEL_10:
  *((_BYTE *)a3 + 76) = 1;
  return v3;
}
