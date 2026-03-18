/*
 * XREFs of ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??2CDisplaySet@@SAPEAX_K00@Z @ 0x18007F094 (--2CDisplaySet@@SAPEAX_K00@Z.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180080D5C (-CheckForDriverUpdating@CDisplaySet@@AEAAJXZ.c)
 *     ?ComputeDisplayBounds@CDisplaySet@@AEAAXXZ @ 0x180080E64 (-ComputeDisplayBounds@CDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800812CC (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::CreateNewDisplaySet(
        CDisplayManager *this,
        const struct CDXGIEnumeration *a2,
        int a3,
        int a4,
        unsigned int a5,
        bool *a6,
        struct CDisplaySet **a7)
{
  bool *v7; // r15
  char *v11; // rdi
  LONG DisplayConfigBufferSizes; // eax
  unsigned int v13; // ecx
  signed int v14; // ebx
  char *v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  CDisplayManager *v25; // [rsp+70h] [rbp+8h] BYREF

  v25 = this;
  v7 = a6;
  v11 = 0LL;
  *a6 = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, (UINT32 *)&v24, (UINT32 *)&a6);
  v14 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes > 0 )
    v14 = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  LODWORD(v25) = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18029B8B8, 2u, v14, 0x275u);
  }
  else
  {
    v15 = (char *)CDisplaySet::operator new(v13, (unsigned int)v24, (unsigned int)a6);
    v11 = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = 1;
      *((_DWORD *)v15 + 1) = a3;
      *((_DWORD *)v15 + 2) = a4;
      *((_DWORD *)v15 + 3) = a5;
      *((_QWORD *)v15 + 2) = 0LL;
      *(_QWORD *)(v15 + 36) = 0LL;
      *((_QWORD *)v15 + 6) = v15 + 80;
      *((_QWORD *)v15 + 7) = v15 + 80;
      *((_DWORD *)v15 + 16) = 4;
      *(_QWORD *)(v15 + 68) = 4LL;
      *((_WORD *)v15 + 56) = 0;
      *((_QWORD *)v15 + 66) = 0LL;
      *((_QWORD *)v15 + 67) = 0LL;
      *(_QWORD *)(v15 + 28) = 0LL;
      *((_DWORD *)v15 + 6) = 0;
      memset_0(v15 + 120, 0, 0x68uLL);
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v14 = -2147024882;
      LODWORD(v25) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_18029B8B8, 2u, -2147024882, 0x27Cu);
      goto LABEL_18;
    }
    *((_QWORD *)v11 + 2) = a2;
    if ( a2 )
      (**(void (__fastcall ***)(const struct CDXGIEnumeration *))a2)(a2);
    v17 = CDisplaySet::EnumerateOutputs((CDisplaySet *)v11);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_18029B8C0, 1u, v17, 0xBFu);
    }
    else
    {
      v19 = CDisplaySet::ArrangeCloneDisplays((CDisplaySet *)v11);
      v14 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_18029B8C0, 1u, v19, 0xC1u);
      }
      else
      {
        CDisplaySet::ComputeDisplayBounds((CDisplaySet *)v11);
        v21 = CDisplaySet::CheckForDriverUpdating((CDisplaySet *)v11);
        v14 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_18029B8C0, 1u, v21, 0xC5u);
      }
    }
    LODWORD(v25) = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_18029B8B8, 2u, v14, 0x287u);
    }
    else
    {
      *a7 = (struct CDisplaySet *)v11;
      v11 = 0LL;
    }
  }
  if ( v14 < 0 )
  {
    if ( !v11 )
      goto LABEL_18;
    *v7 = v11[112];
  }
  if ( v11 )
    CDisplaySet::Release((CDisplaySet *)v11);
LABEL_18:
  TranslateDXGIorD3DErrorInContext(v14, 3, &v25);
  return (unsigned int)v25;
}
