/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180047794
 * Callers:
 *     ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x180047750 (--_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180025EA8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ??1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x1800491D8 (--1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  __int64 v2; // r15
  char *v3; // rdi
  __int64 v4; // rsi
  CTopLevelWindow::WindowFrame::DPIImages *v5; // rsi
  __int64 v6; // r12
  CBaseObject **v7; // rbp
  CBaseObject **v8; // rdi
  __int64 v9; // r14
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx

  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 8), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 40), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 72), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 104), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 136), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 168), 1);
  v2 = 4LL;
  v3 = (char *)this + 248;
  v4 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v3, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 96), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 128), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 160), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 192), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 224), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v3 + 256), 1);
    v3 += 320;
    --v4;
  }
  while ( v4 );
  v5 = (CTopLevelWindow::WindowFrame *)((char *)this + 1496);
  v6 = 2LL;
  v7 = (CBaseObject **)((char *)this + 1496);
  do
  {
    v8 = v7;
    v9 = 22LL;
    do
    {
      if ( *v8 )
      {
        CBaseObject::Release(*v8);
        *v8 = 0LL;
      }
      v8 += 2;
      --v9;
    }
    while ( v9 );
    ++v7;
    --v6;
  }
  while ( v6 );
  v10 = (CBaseObject *)*((_QWORD *)this + 25);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 25) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 26) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 232);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 232) = 0LL;
  }
  do
  {
    v5 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v5 - 320);
    CTopLevelWindow::WindowFrame::DPIImages::~DPIImages(v5);
    --v2;
  }
  while ( v2 );
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 21);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 17);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 13);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 5);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 1);
}
