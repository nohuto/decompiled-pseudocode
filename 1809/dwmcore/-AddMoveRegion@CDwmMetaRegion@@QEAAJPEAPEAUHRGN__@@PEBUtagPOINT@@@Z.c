/*
 * XREFs of ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18017F30C
 * Callers:
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18017F244 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180094968 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x18017FA28 (-CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ.c)
 *     ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x180180958 (-SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
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
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  signed int v17; // eax
  int v18; // edx
  int v19; // r8d
  signed int v20; // eax
  int v21; // edx
  int v22; // r8d
  signed int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  signed int v27; // eax
  int v28; // edx
  int v29; // r8d
  char v30; // al
  HRGN v31; // rsi
  signed int v32; // eax
  int v33; // edx
  int v34; // r8d
  signed int v35; // eax
  int v36; // edx
  int v37; // r8d
  signed int v38; // eax
  int v39; // edx
  int v40; // r8d
  signed int v41; // eax
  int v42; // edx
  int v43; // r8d
  signed int v44; // eax
  int v45; // edx
  int v46; // r8d
  signed int v47; // eax
  int v48; // edx
  int v49; // r8d
  signed int v50; // eax
  int v51; // edx
  int v52; // r8d
  int v53; // eax
  signed int v54; // eax
  int v55; // edx
  int v56; // r8d
  CDwmMetaRegion *v57; // rcx
  int v58; // eax
  unsigned int v60; // [rsp+20h] [rbp-48h]
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
        v10 = CheckGUIHandleQuota(v14, v13, v15);
      v60 = 164;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v18, v19);
      v60 = 168;
      goto LABEL_10;
    }
    OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
    SetLastError(0);
    v7 = CreateRectRgn(0, 0, 0, 0);
    if ( !v7 )
    {
      v20 = GetLastError();
      v10 = v20;
      if ( v20 > 0 )
        v10 = (unsigned __int16)v20 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v21, v22);
      v60 = 175;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(v7, v7, *a2, 2) )
    {
      v23 = GetLastError();
      v10 = v23;
      if ( v23 > 0 )
        v10 = (unsigned __int16)v23 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v24, v25);
      v60 = 179;
      goto LABEL_10;
    }
    SetLastError(0);
    v26 = CombineRgn(v7, v7, RectRgn, 1);
    if ( !v26 )
    {
      v27 = GetLastError();
      v10 = v27;
      if ( v27 > 0 )
        v10 = (unsigned __int16)v27 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v28, v29);
      v60 = 184;
      goto LABEL_10;
    }
    if ( v26 == 1 )
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
    v30 = *((_BYTE *)this + 40);
  }
  else
  {
    CDwmMetaRegion::SetMoveRegion(this, v6);
    *a2 = 0LL;
    *((struct tagPOINT *)this + 2) = *a3;
    v30 = 1;
    *((_BYTE *)this + 40) = 1;
  }
  if ( v30 == 1 )
  {
    v31 = (HRGN)*((_QWORD *)this + 1);
    if ( v31 || (v31 = *(HRGN *)this) != 0LL )
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
                    v53 = CombineRgn(hrgnDst, v9, v31, 1);
                    if ( v53 )
                    {
                      v57 = this;
                      if ( v53 != 1 )
                      {
LABEL_96:
                        CDwmMetaRegion::ClearMoveData(v57);
                        goto LABEL_97;
                      }
                      v58 = CDwmMetaRegion::CalculateNoMoveDirty(this);
                      v10 = v58;
                      if ( v58 >= 0 )
                        goto LABEL_97;
                      v60 = 274;
                      v16 = v58;
LABEL_94:
                      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v16, v60);
                      if ( v10 >= 0 )
                        goto LABEL_97;
                      v57 = this;
                      goto LABEL_96;
                    }
                    v54 = GetLastError();
                    v10 = v54;
                    if ( v54 > 0 )
                      v10 = (unsigned __int16)v54 | 0x80070000;
                    if ( v10 >= 0 )
                      v10 = CheckGUIHandleQuota(v14, v55, v56);
                    v60 = 263;
                  }
                  else
                  {
                    v50 = GetLastError();
                    v10 = v50;
                    if ( v50 > 0 )
                      v10 = (unsigned __int16)v50 | 0x80070000;
                    if ( v10 >= 0 )
                      v10 = CheckGUIHandleQuota(v14, v51, v52);
                    v60 = 257;
                  }
                }
                else
                {
                  v47 = GetLastError();
                  v10 = v47;
                  if ( v47 > 0 )
                    v10 = (unsigned __int16)v47 | 0x80070000;
                  if ( v10 >= 0 )
                    v10 = CheckGUIHandleQuota(v14, v48, v49);
                  v60 = 250;
                }
              }
              else
              {
                v44 = GetLastError();
                v10 = v44;
                if ( v44 > 0 )
                  v10 = (unsigned __int16)v44 | 0x80070000;
                if ( v10 >= 0 )
                  v10 = CheckGUIHandleQuota(v14, v45, v46);
                v60 = 246;
              }
            }
            else
            {
              v41 = GetLastError();
              v10 = v41;
              if ( v41 > 0 )
                v10 = (unsigned __int16)v41 | 0x80070000;
              if ( v10 >= 0 )
                v10 = CheckGUIHandleQuota(v14, v42, v43);
              v60 = 244;
            }
          }
          else
          {
            v38 = GetLastError();
            v10 = v38;
            if ( v38 > 0 )
              v10 = (unsigned __int16)v38 | 0x80070000;
            if ( v10 >= 0 )
              v10 = CheckGUIHandleQuota(v14, v39, v40);
            v60 = 240;
          }
        }
        else
        {
          v35 = GetLastError();
          v10 = v35;
          if ( v35 > 0 )
            v10 = (unsigned __int16)v35 | 0x80070000;
          if ( v10 >= 0 )
            v10 = CheckGUIHandleQuota(v14, v36, v37);
          v60 = 238;
        }
      }
      else
      {
        v32 = GetLastError();
        v10 = v32;
        if ( v32 > 0 )
          v10 = (unsigned __int16)v32 | 0x80070000;
        if ( v10 >= 0 )
          v10 = CheckGUIHandleQuota(v14, v33, v34);
        v60 = 237;
      }
LABEL_10:
      v16 = v10;
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
