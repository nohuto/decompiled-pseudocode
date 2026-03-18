/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800BD160
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4)
{
  int v6; // r8d
  CExpression *v8; // rdi
  unsigned __int64 v9; // r10
  SIZE_T v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // edx
  struct CWeakResourceReference *v13; // r8
  struct CResource *ResourceWithoutType; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  struct CWeakResourceReference *v20; // [rsp+60h] [rbp+18h] BYREF

  v6 = *((_DWORD *)a3 + 2);
  v8 = this;
  if ( !v6
    || (v9 = *((unsigned int *)a3 + 3), !(_DWORD)v9)
    || (LODWORD(this) = v6 + *((_DWORD *)this + 94), (unsigned int)this > (unsigned int)v9) )
  {
    v17 = -2003303421;
    v19 = 71;
    goto LABEL_20;
  }
  if ( (*((_BYTE *)v8 + 408) & 1) != 0 )
  {
    v17 = -2147467259;
    v19 = 77;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v17, v19);
    goto LABEL_21;
  }
  if ( !*((_QWORD *)v8 + 46) )
  {
    v10 = 8LL * *((unsigned int *)a3 + 3);
    if ( !is_mul_ok(v9, 8uLL) )
      v10 = -1LL;
    *((_QWORD *)v8 + 46) = operator new(v10);
    v6 = *((_DWORD *)a3 + 2);
  }
  v11 = 0;
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v12 = *a4;
    v13 = 0LL;
    v20 = 0LL;
    if ( !v12 )
      goto LABEL_14;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v12);
    if ( !ResourceWithoutType )
      goto LABEL_14;
    v15 = CWeakReference<CVisual>::Create(ResourceWithoutType, &v20);
    v17 = v15;
    if ( v15 < 0 )
      break;
    v13 = v20;
LABEL_14:
    ++a4;
    ++v11;
    *(_QWORD *)(*((_QWORD *)v8 + 46) + 8LL * (unsigned int)(*((_DWORD *)v8 + 94))++) = v13;
    if ( v11 >= *((_DWORD *)a3 + 2) )
      return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x64u);
LABEL_21:
  if ( *((_DWORD *)a3 + 3) )
    *((_BYTE *)v8 + 408) |= 1u;
  return v17;
}
