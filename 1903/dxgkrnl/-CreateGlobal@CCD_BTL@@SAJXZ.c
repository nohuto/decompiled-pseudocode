/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C015A074
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x1C015A0F4 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1, __int64 a2)
{
  CCD_BTL *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CCD_BTL *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
    return 3221225473LL;
  }
  else
  {
    v2 = (CCD_BTL *)operator new[](0x98uLL, 0x63644356u, PagedPool);
    v7 = v2;
    if ( v2 )
    {
      memset(v2, 0, 0x98uLL);
      CCD_BTL::CCD_BTL(v7);
      *(_QWORD *)v7 = &CCD_BTL_FULL::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    CCD_BTL::m_pGlobalBtl = v7;
    if ( v7 )
    {
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
      *(_QWORD *)(v10 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
  }
}
