/*
 * XREFs of ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x1800236B4
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800235CC (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180025CA4 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x18000473C (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateCapturedButton(CTopLevelWindow *this, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CButton *v8; // rcx
  CBaseObject *v9; // rcx
  volatile signed __int32 *v10; // rcx

  LODWORD(v2) = 4;
  v4 = 4LL;
  v5 = a2 - 8;
  if ( !v5 )
  {
    v2 = 1LL;
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v4 = 2LL;
    LODWORD(v2) = 2;
    goto LABEL_6;
  }
  v7 = v6 - 11;
  if ( !v7 )
  {
    v2 = 3LL;
LABEL_14:
    v4 = v2;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    LODWORD(v2) = 0;
    v4 = 0LL;
  }
LABEL_6:
  v8 = (CButton *)*((_QWORD *)this + 92);
  if ( v8 )
  {
    CButton::SetMouseCapture(v8, 0);
    v9 = (CBaseObject *)*((_QWORD *)this + 92);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 92) = 0LL;
    }
  }
  if ( (_DWORD)v2 != 4 )
  {
    v10 = (volatile signed __int32 *)*((_QWORD *)this + v4 + 60);
    if ( v10 )
    {
      *((_QWORD *)this + 92) = v10;
      _InterlockedIncrement(v10 + 2);
      CButton::SetMouseCapture((CButton *)v10, 1);
    }
  }
}
