/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800134CC
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800135B0 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int v3; // eax
  int IdealWindowRepresentationType; // eax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // eax

  *((_DWORD *)a3 + 2) = 0;
  v3 = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 605) & 1) != 0 && !a2 )
  {
    *((_DWORD *)a3 + 2) = 3;
    v3 = 3;
  }
  if ( !v3 )
  {
    IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
    *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
    if ( !IdealWindowRepresentationType
      && !a2
      && (*((_BYTE *)this + 608) & 4) == 0
      && !CWindowData::IsImmersiveWindow(this) )
    {
      v9 = 0LL;
      if ( *((_DWORD *)this + 146) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 70) + 8 * v9);
          v11 = CWindowData::GetIdealWindowRepresentationType(v10);
          *((_DWORD *)a3 + 2) = v11;
          if ( v11 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 146) )
            goto LABEL_4;
        }
        *(_QWORD *)a3 = v10;
      }
    }
  }
LABEL_4:
  v8 = *((_DWORD *)a3 + 2);
  if ( !v8 )
  {
    *((_DWORD *)a3 + 2) = 3;
    v8 = 3;
  }
  if ( a2 )
  {
    if ( v8 == 3 )
      *((_DWORD *)a3 + 2) = 1;
  }
}
