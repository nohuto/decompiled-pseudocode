/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F1F4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293B80 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C0056368 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C02910F0 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 52);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
      DxgkCompositionObject::Release(*((DxgkCompositionObject **)this + 52));
      *((_QWORD *)this + 52) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 52) = a2;
      DxgkCompositionObject::AddRef(a2);
      DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 52), *((struct _EPROCESS **)this + 7));
    }
  }
}
