/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180025BC0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 * Callees:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180025D04 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x180027518 (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CDisplayManager::CreateNewDisplaySet(
        CDisplayManager *this,
        const struct CDXGIEnumeration *a2,
        int a3,
        int a4,
        bool *a5,
        struct CDisplaySet **a6)
{
  bool *v6; // rsi
  _DWORD *v10; // rbx
  LONG DisplayConfigBufferSizes; // eax
  unsigned __int64 v12; // rcx
  signed int v13; // edi
  _DWORD *v14; // rax
  unsigned int v15; // ecx
  void *v16; // rcx
  char *v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  CDisplayManager *v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = this;
  v6 = a5;
  v10 = 0LL;
  *a5 = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, (UINT32 *)&v21, (UINT32 *)&a5);
  v13 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes > 0 )
    v13 = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  LODWORD(v22) = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BE060, 2u, v13, 0x239u, 0LL);
  }
  else
  {
    v14 = CDisplaySet::operator new(v12, (unsigned int)v21, (unsigned int)a5);
    v10 = v14;
    if ( v14 )
    {
      *v14 = 1;
      v16 = v14 + 30;
      v14[1] = a3;
      v14[2] = a4;
      *((_QWORD *)v14 + 2) = 0LL;
      v14[10] = 0;
      v17 = (char *)(v14 + 20);
      *((_QWORD *)v10 + 6) = v17;
      *((_QWORD *)v10 + 7) = v17;
      v10[16] = 4;
      *(_QWORD *)(v10 + 17) = 4LL;
      *((_WORD *)v10 + 56) = 0;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
      memset_0(v16, 0, 0x68uLL);
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
    {
      v13 = -2147024882;
      LODWORD(v22) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802BE060, 2u, -2147024882, 0x23Fu, 0LL);
      goto LABEL_12;
    }
    v18 = CDisplaySet::Init((CDisplaySet *)v10, a2);
    LODWORD(v22) = v18;
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802BE060, 2u, v18, 0x24Au, 0LL);
    }
    else
    {
      *a6 = (struct CDisplaySet *)v10;
      v10 = 0LL;
    }
  }
  if ( v13 < 0 )
  {
    if ( !v10 )
      goto LABEL_12;
    *v6 = *((_BYTE *)v10 + 112);
  }
  if ( v10 )
    CDisplaySet::Release((CDisplaySet *)v10);
LABEL_12:
  TranslateDXGIorD3DErrorInContext((unsigned int)v13, 3LL, &v22);
  return (unsigned int)v22;
}
