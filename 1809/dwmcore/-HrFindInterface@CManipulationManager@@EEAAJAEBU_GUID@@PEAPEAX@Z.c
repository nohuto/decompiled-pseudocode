/*
 * XREFs of ?HrFindInterface@CManipulationManager@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EA500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationManager::HrFindInterface(CManipulationManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
    }
    else
    {
      *a3 = this;
      return 0;
    }
  }
  return v3;
}
