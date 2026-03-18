/*
 * XREFs of ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x1801816E8
 * Callers:
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x180180F74 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CalculateNoMoveDirty(CDwmMetaRegion *this)
{
  int v1; // ebx
  void *v3; // rcx
  HRGN RectRgn; // rbp
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  HRGN v9; // rsi
  signed int v10; // eax
  __int64 v11; // rcx
  signed int LastError; // eax
  __int64 v13; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 40) )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      DeleteObject(v3);
      *((_QWORD *)this + 1) = 0LL;
    }
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( RectRgn )
    {
      SetLastError(0);
      if ( CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
      {
        OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
        SetLastError(0);
        v9 = CreateRectRgn(0, 0, 0, 0);
        if ( v9 )
        {
          SetLastError(0);
          if ( CombineRgn(v9, *(HRGN *)this, RectRgn, 4) )
          {
            *((_QWORD *)this + 1) = v9;
            v9 = 0LL;
          }
          else
          {
            LastError = GetLastError();
            v1 = LastError;
            if ( LastError > 0 )
              v1 = (unsigned __int16)LastError | 0x80070000;
            if ( v1 >= 0 )
              v1 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v1, 0x1CCu, 0LL);
          }
          if ( v9 )
            DeleteObject(v9);
        }
        else
        {
          v10 = GetLastError();
          v1 = v10;
          if ( v10 > 0 )
            v1 = (unsigned __int16)v10 | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v1, 0x1C7u, 0LL);
        }
      }
      else
      {
        v7 = GetLastError();
        v1 = v7;
        if ( v7 > 0 )
          v1 = (unsigned __int16)v7 | 0x80070000;
        if ( v1 >= 0 )
          v1 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v1, 0x1C3u, 0LL);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v5 = GetLastError();
      v1 = v5;
      if ( v5 > 0 )
        v1 = (unsigned __int16)v5 | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0x1BFu, 0LL);
    }
  }
  return (unsigned int)v1;
}
