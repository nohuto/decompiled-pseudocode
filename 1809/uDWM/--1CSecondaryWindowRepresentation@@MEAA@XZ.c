/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026AB4
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180026D10 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x1800260E4 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180026BA0 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180084734 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     McTemplateU0pp @ 0x18008481C (McTemplateU0pp.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  unsigned int i; // edi
  CWindowData *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v6 )
    CBaseObject::Release(v6);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v11 = *((_QWORD *)this + 4);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 40);
    else
      v12 = 0LL;
    McTemplateU0pp(v6, &RemoveSecondaryWindowRepresentation_Destroy, this, v12);
  }
  v8 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v8 )
    CWindowData::RemoveSecondaryWindowRepresentation(v8, this);
  v9 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v10 )
    CBaseObject::Release(v10);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 16);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
