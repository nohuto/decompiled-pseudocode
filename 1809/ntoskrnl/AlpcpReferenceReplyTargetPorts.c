/*
 * XREFs of AlpcpReferenceReplyTargetPorts @ 0x140617294
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceReplyTargetPorts(__int64 Object, signed __int64 a2)
{
  _DWORD *v3; // rdi

  v3 = (_DWORD *)Object;
  if ( Object )
    v3 = (_DWORD *)(-(__int64)(ObReferenceObjectSafe(Object) != 0) & Object);
  if ( a2 )
    a2 &= -(__int64)(ObReferenceObjectSafe(a2) != 0);
  if ( v3 )
  {
    if ( a2 )
    {
      if ( (v3[104] & 0x20) == 0 && (*(_DWORD *)(a2 + 416) & 0x20) == 0 )
        return 0LL;
      ObfDereferenceObject(v3);
      goto LABEL_13;
    }
    ObfDereferenceObject(v3);
  }
  if ( a2 )
LABEL_13:
    ObfDereferenceObject((PVOID)a2);
  return 3221225527LL;
}
