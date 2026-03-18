/*
 * XREFs of ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00DDC60
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00DDD1C (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00D7B5C (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB40 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DDF10 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_STORE::CONNECTED_SET_DESCRIPTOR *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _BYTE v12[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = a2;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v12, a3);
    v6 = *(int *)CCD_SET_STRING_ID::operator=(this, (__int64)v12);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v12);
    if ( (int)v6 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8, v7);
      v11[3] = v6;
      v11[4] = this;
      v11[5] = a2;
      v11[6] = a3;
      WdLogEvent5_WdAssertion(v11);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
