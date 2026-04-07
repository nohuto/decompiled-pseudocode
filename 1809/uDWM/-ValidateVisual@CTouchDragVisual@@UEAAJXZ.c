/*
 * XREFs of ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x180098DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x180098B34 (-RemoveAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180098C70 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18009B6A0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::ValidateVisual(CTouchDragVisual *this)
{
  int v1; // eax
  DWORD TickCount; // ebp
  signed int v4; // edi
  __int64 v5; // rsi
  signed int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( *((_DWORD *)this + 86) > 1u )
    {
      TickCount = GetTickCount();
      v4 = *((_DWORD *)this + 86) - 1;
      if ( v4 > 0 )
      {
        v5 = 28LL * v4;
        do
        {
          if ( TickCount - *(_DWORD *)(v5 + *((_QWORD *)this + 40)) < *((_DWORD *)this + 74) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 40, v4--);
          v5 -= 28LL;
        }
        while ( v4 > 0 );
      }
      v6 = *((_DWORD *)this + 94) - 1;
      if ( v6 >= 0 )
      {
        v7 = 28LL * v6;
        do
        {
          if ( TickCount - *(_DWORD *)(*((_QWORD *)this + 44) + v7) < *((_DWORD *)this + 74) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 44, v6);
          v7 -= 28LL;
          --v6;
        }
        while ( v6 >= 0 );
      }
      CTouchDragVisual::UpdateVisual(this);
      v1 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v1 & 0xFFFFEFFF;
  }
  v8 = CTouchVisual::ValidateVisual(this);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x14Fu);
  return v9;
}
