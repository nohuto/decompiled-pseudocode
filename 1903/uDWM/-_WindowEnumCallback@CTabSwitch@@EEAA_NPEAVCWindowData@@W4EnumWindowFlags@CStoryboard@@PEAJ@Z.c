/*
 * XREFs of ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ADE30
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTabSwitch::_WindowEnumCallback(CStoryboard *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // eax
  int v9; // eax
  char result; // al
  CBaseObject *v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v11 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 153) & 0xFFFu) - 2 <= 1 )
  {
    v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
    v9 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, a2, v8, 0, &v11);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x139Fu);
    if ( v11 )
      CBaseObject::Release(v11);
  }
  result = 1;
  *a4 = v4;
  return result;
}
