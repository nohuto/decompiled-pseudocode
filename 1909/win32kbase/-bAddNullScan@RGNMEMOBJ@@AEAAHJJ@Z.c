/*
 * XREFs of ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00AE2BC
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00116C0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C008D2D0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  __int64 result; // rax
  _DWORD *v7; // rdx

  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) - *(_DWORD *)(*(_QWORD *)this + 80LL)) >= 0x10
    || (result = RGNOBJ::bExpand(this, *(_DWORD *)(*(_QWORD *)this + 24LL) + 2176), (_DWORD)result) )
  {
    result = 1LL;
    v7 = *(_DWORD **)(*(_QWORD *)this + 40LL);
    ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    v7[1] = a2;
    v7[2] = a3;
    *(_DWORD *)(*(_QWORD *)this + 80LL) += 16;
    v7[3] = 0;
    *v7 = 0;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = v7 + 4;
  }
  return result;
}
