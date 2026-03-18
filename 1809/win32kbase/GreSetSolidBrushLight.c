/*
 * XREFs of GreSetSolidBrushLight @ 0x1C0071800
 * Callers:
 *     GreDCSelectBrush @ 0x1C001E370 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C00715E0 (GreDCSelectPen.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00229B0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005D960 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(struct OBJECT *a1, int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rsi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+70h] [rbp+8h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *((_DWORD *)a1 + 10);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0LL;
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)v13, a1, 0, 0, 0);
      if ( v14 )
      {
        if ( *((_DWORD *)a1 + 2) == 1 )
        {
          *((_DWORD *)a1 + 19) = a2;
          v3 = 1;
          if ( *((_DWORD *)a1 + 25) == -1 || (v9 = *((_DWORD *)a1 + 10), v9 < 0) )
          {
            v10 = v15;
          }
          else
          {
            v8 = (volatile signed __int32 *)*((_QWORD *)a1 + 15);
            v10 = ((unsigned int)v9 >> 30) & 1;
          }
          *((_DWORD *)a1 + 24) = 0;
          *((_DWORD *)a1 + 25) = -1;
          if ( a3 )
            v11 = *((_DWORD *)a1 + 10) & 0xC00 | 0x10;
          else
            v11 = 20;
          *((_DWORD *)a1 + 20) = 7;
          *((_DWORD *)a1 + 10) = v11;
          *((_DWORD *)a1 + 11) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        }
        else
        {
          v10 = v15;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v13);
        if ( v14 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v13);
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v8, v10);
          *((_QWORD *)a1 + 15) = 0LL;
        }
      }
    }
  }
  return v3;
}
