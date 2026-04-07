/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x1800122F8
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013130 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180010EE8 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012398 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        struct CWindowRepresentation *a3,
        __int64 a4)
{
  CWindowData *v6; // rcx
  char v7; // bl
  CWindowData *v8; // rsi
  bool v9; // bp
  int v10; // eax
  unsigned int v11; // ebx
  char v13; // r9
  void *v14; // [rsp+28h] [rbp-20h]
  __int128 v15; // [rsp+30h] [rbp-18h]

  v6 = *(CWindowData **)a3;
  v7 = 1;
  v8 = (CWindowData *)*((_QWORD *)a2 + 8);
  v15 = *((_OWORD *)a2 + 4);
  v9 = *(_QWORD *)a3 != (_QWORD)v8;
  if ( *(_QWORD *)a3 )
  {
    v13 = *(CWindowData **)a3 != v8 && v6 != this;
    CWindowData::RemoveSecondaryWindowRepresentation((__int64)v6, (__int64)a2, *((_DWORD *)a3 + 2), v13);
  }
  if ( !v9 || v8 == this )
    v7 = 0;
  LOBYTE(a4) = v7;
  v10 = CWindowData::AddSecondaryWindowRepresentation(v8, a2, DWORD2(v15), a4);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1E07u, v14);
  return v11;
}
