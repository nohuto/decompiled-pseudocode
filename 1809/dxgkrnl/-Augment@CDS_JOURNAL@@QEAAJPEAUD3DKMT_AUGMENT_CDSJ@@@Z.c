/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4CB0
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C00B4C80 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4E04 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B4EB4 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B4FBC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00B5A8C (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC7FC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00CDE68 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C013AF50 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C028DE90 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  _QWORD *v7; // rsi
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct DXGADAPTER *v16; // r8
  bool v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _BYTE v23[64]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[12]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v25, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v25, a2, 0x40u);
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
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v25, this);
        if ( (_DWORD)v5 == -1073741266 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v6);
          v15[4] = v25;
          v15[3] = this;
          v15[5] = v26;
          WdLogEvent5_WdWarning(v15);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v26;
      *(_OWORD *)this = *v26;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v27[0] = 0LL;
        v27[1] = 0LL;
        *(_QWORD *)((char *)&v27[2] + 4) = 0LL;
        *(_QWORD *)((char *)&v27[3] + 4) = 0LL;
        *(_QWORD *)((char *)&v27[4] + 4) = 0LL;
        memset((char *)&v27[5] + 4, 0, 0x28uLL);
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v27, a2, v16);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v23, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v23, a2, 0xFu);
        if ( (int)v5 >= 0 )
        {
          v18 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v27, (struct CCD_TOPOLOGY *)v23, v17);
          v5 = v18;
          if ( v18 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v23),
                v20 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v23, 1u),
                v5 = v20,
                v20 < 0) )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
            v21[3] = v5;
            v21[4] = v23;
            v21[5] = v24;
            WdLogEvent5_WdError(v21);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v27);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v23);
        goto LABEL_14;
      }
      v9 = (_DWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        goto LABEL_8;
      do
      {
        v11 = v9;
        if ( v9[8] == *((_DWORD *)a2 + 4) && v9[5] == *((_DWORD *)a2 + 1) && v9[6] == *((_DWORD *)a2 + 2) )
          break;
        v9 = *(_DWORD **)v9;
      }
      while ( v9 != (_DWORD *)v7 );
      if ( v9 == (_DWORD *)v7 )
      {
LABEL_8:
        v11 = operator new(0x58uLL, 0x63644356u, PagedPool);
        if ( v11 )
        {
          *v11 = 0LL;
          v11[1] = 0LL;
          *(_QWORD *)((char *)v11 + 20) = 0LL;
          *(_QWORD *)((char *)v11 + 28) = 0LL;
          *(_QWORD *)((char *)v11 + 36) = 0LL;
          memset((char *)v11 + 44, 0, 0x28uLL);
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
        {
          v22 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v22 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v22);
          LODWORD(v5) = -1073741801;
          goto LABEL_14;
        }
        v12 = (_QWORD *)v7[1];
        if ( (_QWORD *)*v12 != v7 )
          __fastfail(3u);
        *v11 = v7;
        v11[1] = v12;
        *v12 = v11;
        v7[1] = v11;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v11, a2, v6);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v25);
  return (unsigned int)v5;
}
