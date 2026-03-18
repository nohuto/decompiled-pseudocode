/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C0157358
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x1C01573D8 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1)
{
  CCD_BTL *v1; // rax
  __int64 v2; // rcx
  CCD_BTL *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
    return 3221225473LL;
  }
  else
  {
    v1 = (CCD_BTL *)operator new(0x98uLL, 0x63644356u, PagedPool);
    v3 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0x98uLL);
      CCD_BTL::CCD_BTL(v3);
      *(_QWORD *)v3 = &CCD_BTL_FULL::`vftable';
    }
    else
    {
      v3 = 0LL;
    }
    CCD_BTL::m_pGlobalBtl = v3;
    if ( v3 )
    {
      return 0LL;
    }
    else
    {
      v6 = WdLogNewEntry5_WdLowResource(v2);
      *(_QWORD *)(v6 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v6);
      return 3221225495LL;
    }
  }
}
