/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1C00185D0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0081ED0 (VidSchInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x88 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 136LL * a2, 0x39616956u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[36] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 136 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
