/*
 * XREFs of ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18013D89C
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18013D8F8 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___ @ 0x1803A082C (StartLayout--ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x18013CC90 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 */

void __fastcall StartLayout::SelectionData::AddRegionCode(StartLayout::SelectionData *this, const unsigned __int16 *a2)
{
  _BYTE *v3; // rdx
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a2, &ppwsz) >= 0 )
  {
    v3 = (_BYTE *)*((_QWORD *)this + 2);
    if ( *((_BYTE **)this + 3) == v3 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)this + 1, v3, &ppwsz);
    }
    else
    {
      *(_QWORD *)v3 = ppwsz;
      *((_QWORD *)this + 2) += 8LL;
    }
    *(_BYTE *)this = 1;
  }
}
