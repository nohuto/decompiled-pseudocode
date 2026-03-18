/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0147E28
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00D8494 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v15, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v15, v2) < v2 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
      v14[3] = v2;
      v14[4] = this;
      v14[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v14);
      LODWORD(v11) = -1073741801;
      goto LABEL_6;
    }
    v7 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v15, 0, 1, 1, &i);
    v11 = v7;
    if ( v7 != -1073741789 )
      break;
  }
  if ( v7 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v13[3] = v11;
    v13[4] = this;
    v13[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v13);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v15);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v15);
  return (unsigned int)v11;
}
