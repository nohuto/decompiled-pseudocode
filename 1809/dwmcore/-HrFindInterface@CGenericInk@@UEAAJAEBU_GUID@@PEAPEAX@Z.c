/*
 * XREFs of ?HrFindInterface@CGenericInk@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180199320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericInk::HrFindInterface(CGenericInk *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500033LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
