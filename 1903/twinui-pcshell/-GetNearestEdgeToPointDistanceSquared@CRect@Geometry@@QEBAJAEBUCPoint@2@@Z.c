/*
 * XREFs of ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x180368C08
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180369260 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180362678 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
        Geometry::CRect *this,
        const struct tagPOINT *a2)
{
  bool v2; // al
  int *v3; // rdx
  int *v4; // rcx
  _DWORD *v5; // r10
  unsigned int v6; // r9d
  int v7; // r11d
  signed int v8; // r9d
  int v9; // eax
  int v10; // ebx
  signed int v11; // eax
  int v12; // r9d
  int v13; // ebx
  int v14; // r8d
  int v15; // r11d
  int v16; // edx
  int v17; // r8d

  v2 = Geometry::CRect::Contains(this, a2);
  v6 = 0;
  if ( v2 )
    return v6;
  v7 = v3[1];
  if ( v7 >= v4[1] && v7 <= v4[3] )
  {
    v8 = abs32(*v3 - *v5);
    v9 = *v3 - v5[2];
LABEL_8:
    v11 = abs32(v9);
    if ( v8 >= v11 )
      v8 = v11;
    return (unsigned int)(v8 * v8);
  }
  v10 = *v3;
  if ( *v3 >= *v4 && v10 <= v4[2] )
  {
    v8 = abs32(v7 - v4[1]);
    v9 = v7 - v4[3];
    goto LABEL_8;
  }
  v12 = (v10 - *v4) * (v10 - *v4);
  v13 = (v10 - v4[2]) * (v10 - v4[2]);
  v14 = (v7 - v4[1]) * (v7 - v4[1]);
  v15 = (v7 - v4[3]) * (v7 - v4[3]);
  v16 = v12;
  if ( v12 + v14 >= v13 + v14 )
    v16 = v13;
  v17 = v16 + v14;
  if ( v15 + v12 >= v15 + v13 )
    v12 = v13;
  v6 = v15 + v12;
  if ( v17 < (int)v6 )
    return (unsigned int)v17;
  return v6;
}
