/*
 * XREFs of ?AllocateStub@BamoDataProviderRegistrarPrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderRegistrarStub@@@Z @ 0x18007B660
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AllocateStub(
        BamoDataProviderRegistrarPrincipal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct BamoDataProviderRegistrarStub **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *v5 = &BamoDataProviderRegistrarStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
    v5[1] = &BamoDataProviderRegistrarStub::`vftable'{for `IDataProviderRegistrarStub'};
    *((_DWORD *)v5 + 8) = 0;
    v5[5] = 0LL;
    *((_DWORD *)v5 + 6) = 1;
    *((_BYTE *)v5 + 48) = 0;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[9] = 0LL;
    v5[2] = &BamoImpl::BamoDataProviderRegistrarStubImpl::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a3 = (struct BamoDataProviderRegistrarStub *)v5;
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17BA,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x8007000ELL,
    v7);
  return 2147942414LL;
}
