/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0130AB0
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C0130A80 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D1164 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C012FF24 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01301F4 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C013074C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C0130920 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0130968 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0130C04 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C02C7488 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  _QWORD *v7; // rsi
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct DXGADAPTER *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _BYTE v26[64]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _BYTE v28[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v29; // [rsp+C0h] [rbp-40h]
  _QWORD v30[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v28, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v28, a2, 64);
  if ( (int)v5 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v5) = -1071774974;
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v7 != v7 && *(_DWORD *)this == 1 )
      {
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v28, this, (__int64)v6);
        if ( (_DWORD)v5 == -1073741266 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v6);
          v17[4] = v28;
          v17[3] = this;
          v17[5] = v29;
          WdLogEvent5_WdWarning(v17);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v29;
      *(_OWORD *)this = *v29;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v30[0] = 0LL;
        v30[1] = 0LL;
        *(_QWORD *)((char *)&v30[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v30[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v30[4] + 4) = 0LL;
        memset((char *)&v30[5] + 4, 0, 0x28uLL);
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v30, a2, v18);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v26, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v26, a2, 15);
        if ( (int)v5 >= 0 )
        {
          v19 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v30, (struct CCD_TOPOLOGY *)v26);
          v5 = v19;
          if ( v19 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v26),
                v23 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v26, 1LL),
                v5 = v23,
                v23 < 0) )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
            v24[3] = v5;
            v24[4] = v26;
            v24[5] = v27;
            WdLogEvent5_WdError(v24);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v30);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v26);
        goto LABEL_14;
      }
      v9 = (_DWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        goto LABEL_8;
      do
      {
        v12 = v9;
        if ( v9[8] == *((_DWORD *)a2 + 4) && v9[5] == *((_DWORD *)a2 + 1) && v9[6] == *((_DWORD *)a2 + 2) )
          break;
        v9 = *(_DWORD **)v9;
      }
      while ( v9 != (_DWORD *)v7 );
      if ( v9 == (_DWORD *)v7 )
      {
LABEL_8:
        v12 = operator new[](0x58uLL, 0x63644356u, PagedPool);
        if ( v12 )
        {
          *v12 = 0LL;
          v12[1] = 0LL;
          *(_QWORD *)((char *)v12 + 20) = 0LL;
          *(_QWORD *)((char *)v12 + 28) = 0LL;
          *(_QWORD *)((char *)v12 + 36) = 0LL;
          memset((char *)v12 + 44, 0, 0x28uLL);
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v25 = WdLogNewEntry5_WdLowResource(v11, v10, v6, v13);
          *(_QWORD *)(v25 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v25);
          LODWORD(v5) = -1073741801;
          goto LABEL_14;
        }
        v14 = (_QWORD *)v7[1];
        if ( (_QWORD *)*v14 != v7 )
          __fastfail(3u);
        *v12 = v7;
        v12[1] = v14;
        *v14 = v12;
        v7[1] = v12;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v12, a2, v6);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v28);
  return (unsigned int)v5;
}
