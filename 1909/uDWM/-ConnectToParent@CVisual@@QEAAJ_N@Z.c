/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180021B68
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800397DC (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 *     ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x180039FAC (-RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  struct CVisualProxy *v6; // rdx
  CVisualProxy *v7; // rcx
  int inserted; // eax
  int v9; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v2 = 0;
  if ( ((*((_BYTE *)this + 84) & 4) != 0) != a2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (4 * a2) | *((_BYTE *)this + 84) & 0xFB;
    v6 = (struct CVisualProxy *)*((_QWORD *)this + 2);
    *((_BYTE *)this + 84) = v5;
    v7 = *(CVisualProxy **)(*(_QWORD *)(v4 + 40) + 16LL);
    if ( (v5 & 4) != 0 )
    {
      inserted = CVisualProxy::InsertChildAt(v7, v6, 0);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x17Du, v10);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3E8u, v10);
    }
    else
    {
      v9 = CVisualProxy::RemoveChild(v7, v6);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x198u, v10);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x3ECu, v10);
    }
  }
  return (unsigned int)v2;
}
