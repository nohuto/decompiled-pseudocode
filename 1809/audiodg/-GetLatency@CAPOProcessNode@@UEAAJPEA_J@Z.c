/*
 * XREFs of ?GetLatency@CAPOProcessNode@@UEAAJPEA_J@Z @ 0x140018130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOProcessNode::GetLatency(CAPOProcessNode *this, __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 4) + 40LL) + 32LL))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 40LL),
           a2);
}
