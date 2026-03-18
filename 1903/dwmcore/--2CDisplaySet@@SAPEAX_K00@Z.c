/*
 * XREFs of ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800A3D54
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800A4574 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

LPVOID __fastcall CDisplaySet::operator new(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  SIZE_T v8; // rcx

  v3 = 0LL;
  v4 = 72 * a2;
  if ( is_mul_ok(a2, 0x48uLL) )
  {
    v6 = a3 << 6;
    if ( is_mul_ok(a3, 0x40uLL) )
    {
      v7 = v4 + 528;
      if ( v4 + 528 < v4 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0x2Eu, 0LL);
      }
      else
      {
        v8 = v6 + v7;
        if ( v6 + v7 < v6 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0x2Fu, 0LL);
        else
          return DefaultHeap::Alloc(v8);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0x2Du, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x80070216, 0x2Cu, 0LL);
  }
  return (LPVOID)v3;
}
