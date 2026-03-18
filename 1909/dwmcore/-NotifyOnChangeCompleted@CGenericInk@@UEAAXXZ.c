/*
 * XREFs of ?NotifyOnChangeCompleted@CGenericInk@@UEAAXXZ @ 0x18019F970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericInk::NotifyOnChangeCompleted(CGenericInk *this)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( *((_QWORD *)this + 9) >= v1 )
    v1 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v1;
}
