/*
 * XREFs of ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x180180F74
 * Callers:
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x180180EA0 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180028244 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x1801816E8 (-CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ.c)
 *     ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x18018268C (-SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRegion(CDwmMetaRegion *this, HRGN *a2, const struct tagPOINT *a3)
{
  HRGN RectRgn; // rbp
  HRGN v6; // rdx
  HRGN v7; // r15
  HRGN v8; // r12
  HRGN v9; // r13
  signed int v10; // ebx
  signed int LastError; // eax
  __int64 v13; // rcx
  unsigned int v14; // r9d
  signed int v15; // eax
  signed int v16; // eax
  signed int v17; // eax
  int v18; // eax
  signed int v19; // eax
  char v20; // al
  HRGN v21; // rsi
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // eax
  signed int v28; // eax
  int v29; // eax
  signed int v30; // eax
  CDwmMetaRegion *v31; // rcx
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-48h]
  HRGN hrgnDst; // [rsp+78h] [rbp+10h]
  HRGN ho; // [rsp+88h] [rbp+20h]

  RectRgn = 0LL;
  ho = 0LL;
  v6 = *a2;
  v7 = 0LL;
  hrgnDst = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( v6 && a3 && *((_BYTE *)this + 40) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( !RectRgn )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v34 = 164;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
    {
      v15 = GetLastError();
      v10 = v15;
      if ( v15 > 0 )
        v10 = (unsigned __int16)v15 | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v34 = 168;
      goto LABEL_10;
    }
    OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
    SetLastError(0);
    v7 = CreateRectRgn(0, 0, 0, 0);
    if ( !v7 )
    {
      v16 = GetLastError();
      v10 = v16;
      if ( v16 > 0 )
        v10 = (unsigned __int16)v16 | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v34 = 175;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(v7, v7, *a2, 2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v34 = 179;
      goto LABEL_10;
    }
    SetLastError(0);
    v18 = CombineRgn(v7, v7, RectRgn, 1);
    if ( !v18 )
    {
      v19 = GetLastError();
      v10 = v19;
      if ( v19 > 0 )
        v10 = (unsigned __int16)v19 | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v34 = 184;
      goto LABEL_10;
    }
    if ( v18 == 1 )
    {
      CDwmMetaRegion::SetMoveRegion(this, *a2);
      *a2 = 0LL;
      *((struct tagPOINT *)this + 2) = *a3;
    }
    else
    {
      OffsetRgn(v7, -*((_DWORD *)this + 4), -*((_DWORD *)this + 5));
      CDwmMetaRegion::SetMoveRegion(this, v7);
      v7 = 0LL;
      *((_DWORD *)this + 4) += a3->x;
      *((_DWORD *)this + 5) += a3->y;
    }
    v20 = *((_BYTE *)this + 40);
  }
  else
  {
    CDwmMetaRegion::SetMoveRegion(this, v6);
    *a2 = 0LL;
    *((struct tagPOINT *)this + 2) = *a3;
    v20 = 1;
    *((_BYTE *)this + 40) = 1;
  }
  if ( v20 == 1 )
  {
    v21 = (HRGN)*((_QWORD *)this + 1);
    if ( v21 || (v21 = *(HRGN *)this) != 0LL )
    {
      SetLastError(0);
      v9 = CreateRectRgn(0, 0, 0, 0);
      if ( v9 )
      {
        SetLastError(0);
        hrgnDst = CreateRectRgn(0, 0, 0, 0);
        if ( hrgnDst )
        {
          SetLastError(0);
          ho = CreateRectRgn(0, 0, 0, 0);
          if ( ho )
          {
            SetLastError(0);
            if ( CombineRgn(ho, ho, *((HRGN *)this + 3), 2) )
            {
              SetLastError(0);
              v8 = CreateRectRgn(0, 0, 0, 0);
              if ( v8 )
              {
                SetLastError(0);
                if ( CombineRgn(v8, v8, *((HRGN *)this + 3), 2) )
                {
                  OffsetRgn(v8, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
                  SetLastError(0);
                  if ( CombineRgn(v9, ho, v8, 2) )
                  {
                    SetLastError(0);
                    v29 = CombineRgn(hrgnDst, v9, v21, 1);
                    if ( v29 )
                    {
                      v31 = this;
                      if ( v29 != 1 )
                      {
LABEL_96:
                        CDwmMetaRegion::ClearMoveData(v31);
                        goto LABEL_97;
                      }
                      v32 = CDwmMetaRegion::CalculateNoMoveDirty(this);
                      v10 = v32;
                      if ( v32 >= 0 )
                        goto LABEL_97;
                      v14 = v32;
                      v34 = 274;
LABEL_94:
                      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, v34, 0LL);
                      if ( v10 >= 0 )
                        goto LABEL_97;
                      v31 = this;
                      goto LABEL_96;
                    }
                    v30 = GetLastError();
                    v10 = v30;
                    if ( v30 > 0 )
                      v10 = (unsigned __int16)v30 | 0x80070000;
                    if ( v10 >= 0 )
                      v10 = -2003304445;
                    v34 = 263;
                  }
                  else
                  {
                    v28 = GetLastError();
                    v10 = v28;
                    if ( v28 > 0 )
                      v10 = (unsigned __int16)v28 | 0x80070000;
                    if ( v10 >= 0 )
                      v10 = -2003304445;
                    v34 = 257;
                  }
                }
                else
                {
                  v27 = GetLastError();
                  v10 = v27;
                  if ( v27 > 0 )
                    v10 = (unsigned __int16)v27 | 0x80070000;
                  if ( v10 >= 0 )
                    v10 = -2003304445;
                  v34 = 250;
                }
              }
              else
              {
                v26 = GetLastError();
                v10 = v26;
                if ( v26 > 0 )
                  v10 = (unsigned __int16)v26 | 0x80070000;
                if ( v10 >= 0 )
                  v10 = -2003304445;
                v34 = 246;
              }
            }
            else
            {
              v25 = GetLastError();
              v10 = v25;
              if ( v25 > 0 )
                v10 = (unsigned __int16)v25 | 0x80070000;
              if ( v10 >= 0 )
                v10 = -2003304445;
              v34 = 244;
            }
          }
          else
          {
            v24 = GetLastError();
            v10 = v24;
            if ( v24 > 0 )
              v10 = (unsigned __int16)v24 | 0x80070000;
            if ( v10 >= 0 )
              v10 = -2003304445;
            v34 = 240;
          }
        }
        else
        {
          v23 = GetLastError();
          v10 = v23;
          if ( v23 > 0 )
            v10 = (unsigned __int16)v23 | 0x80070000;
          if ( v10 >= 0 )
            v10 = -2003304445;
          v34 = 238;
        }
      }
      else
      {
        v22 = GetLastError();
        v10 = v22;
        if ( v22 > 0 )
          v10 = (unsigned __int16)v22 | 0x80070000;
        if ( v10 >= 0 )
          v10 = -2003304445;
        v34 = 237;
      }
LABEL_10:
      v14 = v10;
      goto LABEL_94;
    }
  }
LABEL_97:
  if ( v7 )
    DeleteObject(v7);
  if ( RectRgn )
    DeleteObject(RectRgn);
  if ( ho )
    DeleteObject(ho);
  if ( v8 )
    DeleteObject(v8);
  if ( hrgnDst )
    DeleteObject(hrgnDst);
  if ( v9 )
    DeleteObject(v9);
  return (unsigned int)v10;
}
