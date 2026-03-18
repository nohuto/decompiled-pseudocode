/*
 * XREFs of PiSwRemovePdoAssociation @ 0x140782ED8
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x140782C94 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwFindPdoAssociation @ 0x14071F2F0 (PiSwFindPdoAssociation.c)
 *     PiSwPdoAssociationFree @ 0x140782F48 (PiSwPdoAssociationFree.c)
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
  PdoAssociation = (_QWORD *)PiSwFindPdoAssociation(a1, a2, 0);
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
