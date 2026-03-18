/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C02138E0
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021331C (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C0213C30 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

void __fastcall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  int v4; // r8d
  _BYTE *v5; // rsi
  char v6; // bl
  char v7; // al
  struct InteractiveControlManager *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rax

  LODWORD(InteractiveControlDefaultScroller::s_ballistics) = *((_DWORD *)InteractiveControlManager::Instance() + 55);
  v4 = *((_DWORD *)InteractiveControlManager::Instance() + 57);
  dword_1C032FCE0 = 0;
  dword_1C032FCE8 = 0;
  dword_1C032FCD8 = v4;
  dword_1C032FCD4 = *((_DWORD *)InteractiveControlManager::Instance() + 59);
  dword_1C032FCDC = *((_DWORD *)InteractiveControlManager::Instance() + 61);
  dword_1C032FCE4 = *((_DWORD *)InteractiveControlManager::Instance() + 63);
  dword_1C032FCEC = *((_DWORD *)InteractiveControlManager::Instance() + 65);
  v5 = *(_BYTE **)(*((_QWORD *)a2 + 2) + 416LL);
  v6 = v5[1025];
  *((_BYTE *)this + 52) = v6;
  v7 = v5[1024];
  *((_BYTE *)this + 53) = v7;
  if ( !v6 )
  {
    if ( !v7 )
    {
      *((_WORD *)this + 26) = 258;
      v6 = 2;
    }
    if ( !v6 )
    {
      *((_BYTE *)this + 52) = 2;
      v6 = 2;
    }
  }
  v8 = InteractiveControlManager::Instance();
  if ( v6 == 2 )
    v9 = *((_DWORD *)v8 + 51);
  else
    v9 = *((_DWORD *)v8 + 53);
  if ( *((_DWORD *)this + 14) == 1 )
    v10 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
  else
    v10 = v9;
  v11 = (unsigned __int8)v5[1026];
  if ( v11 <= v10 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v11 = *((_DWORD *)InteractiveControlManager::Instance() + 45);
    else
      v11 = v9;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v11;
  v12 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v12;
  *((_QWORD *)this + 2) = v12;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
