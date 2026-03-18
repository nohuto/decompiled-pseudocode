/*
 * XREFs of ?NotifyOnChangeCompleted@CGenericInk@@UEAAXXZ @ 0x180175BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericInk::NotifyOnChangeCompleted(CGenericInk *this)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
  if ( *((_QWORD *)this + 8) >= v1 )
    v1 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = v1;
}
