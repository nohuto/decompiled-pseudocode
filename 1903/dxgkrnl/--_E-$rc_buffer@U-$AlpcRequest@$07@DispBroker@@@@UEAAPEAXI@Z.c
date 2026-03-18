/*
 * XREFs of ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0035CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051E8 (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall rc_buffer<DispBroker::AlpcRequest<8>>::`vector deleting destructor'(
        ReferenceCounted *P,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  ReferenceCounted::~ReferenceCounted(P, a2, a3);
  if ( (v3 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
