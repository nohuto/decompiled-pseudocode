/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00FCB24
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3680 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00FC77C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??$Add@VDMMVIDPNTARGET@@@?$IndexedSet@VDMMVIDPNTARGET@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0009A9C (--$Add@VDMMVIDPNTARGET@@@-$IndexedSet@VDMMVIDPNTARGET@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00493B4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edi
  _QWORD *v14; // rax
  __int64 v15; // rax

  v4 = *a2;
  if ( !v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v11);
    v4 = *a2;
  }
  v5 = IndexedSet<DMMVIDPNTARGET>::Add<DMMVIDPNTARGET>(a1, v4) - 1;
  if ( v5 )
  {
    v9 = v5 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      v12 = WdLogNewEntry5_WdError(v7, v6, v8);
      WdLogEvent5_WdError(v12);
      v13 = -1073741823;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
      v14[3] = *(unsigned int *)(*a2 + 24);
      v14[4] = *a2;
      v14[5] = a1;
      WdLogEvent5_WdError(v14);
      v13 = -1071774926;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v15 + 24) = *a2;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    v13 = -1071774952;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v13;
}
