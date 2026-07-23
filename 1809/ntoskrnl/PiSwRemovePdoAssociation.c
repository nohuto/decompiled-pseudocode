/*
 * XREFs of PiSwRemovePdoAssociation @ 0x1406DA094
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x1406DA054 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwPdoAssociationFree @ 0x1406DA104 (PiSwPdoAssociationFree.c)
 *     PiSwFindPdoAssociation @ 0x1406DA26C (PiSwFindPdoAssociation.c)
 */

__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PdoAssociation; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = 0;
  PdoAssociation = (_QWORD *)PiSwFindPdoAssociation(a1, a2, 0LL);
  if ( PdoAssociation )
  {
    v4 = *PdoAssociation;
    if ( *(_QWORD **)(*PdoAssociation + 8LL) != PdoAssociation
      || (v5 = (_QWORD *)PdoAssociation[1], (_QWORD *)*v5 != PdoAssociation)
      || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = PdoAssociation[2], *(_QWORD **)(v6 + 8) != PdoAssociation + 2)
      || (v7 = (_QWORD *)PdoAssociation[3], (_QWORD *)*v7 != PdoAssociation + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    PiSwPdoAssociationFree(PdoAssociation);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
