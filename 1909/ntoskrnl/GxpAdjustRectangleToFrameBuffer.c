/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x140178FFC
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140178DC0 (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x14098EA14 (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        char a6)
{
  __int64 v6; // rax
  unsigned int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // r9d
  unsigned int v15; // esi
  unsigned int v16; // r12d
  unsigned int v17; // r8d
  __int64 v19; // [rsp+0h] [rbp-28h]
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]
  unsigned int v21; // [rsp+78h] [rbp+50h]

  v6 = *a2;
  v8 = *a1;
  v9 = 0;
  v10 = a1[1];
  v11 = *a1;
  v12 = v10;
  v13 = *a3;
  v19 = v6;
  v14 = v6;
  v20 = *(_QWORD *)a3;
  v21 = a3[2];
  if ( *a3 < (unsigned int)v6 )
    return (unsigned int)-1073741811;
  v15 = a3[1];
  if ( v15 < HIDWORD(v6) )
    return (unsigned int)-1073741811;
  v16 = *(_QWORD *)a3;
  if ( v10 > (int)v20 - (int)v6 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v12 = v20 - v6;
  }
  if ( v8 > HIDWORD(v20) - HIDWORD(v6) )
  {
    if ( a6 )
    {
      v11 = HIDWORD(v20) - HIDWORD(v6);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v12 < v10 && BYTE2(BgInternal) == 2 )
    {
      v14 = 0;
      LODWORD(v19) = 0;
    }
    else
    {
      v14 = v13 - v12 - v6;
      LODWORD(v19) = v14;
    }
    if ( v11 < v8 && BYTE2(BgInternal) == 2 )
    {
      v17 = 0;
      HIDWORD(v19) = 0;
      goto LABEL_8;
    }
    v17 = v15 - v11 - HIDWORD(v6);
    HIDWORD(v19) = v17;
  }
  else
  {
    v17 = HIDWORD(v6);
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 && (_BYTE)BgInternal )
  {
    v16 = v15;
    v20 = __PAIR64__(v13, v15);
    if ( BYTE2(BgInternal) == 1 )
    {
      if ( v12 >= v10 )
      {
        v17 = v13 - v6 - v12;
        HIDWORD(v19) = v17;
      }
      else
      {
        v17 = 0;
        HIDWORD(v19) = 0;
      }
      v14 = *((_DWORD *)a2 + 1);
      LODWORD(v19) = v14;
    }
    else
    {
      if ( v11 >= v8 )
      {
        v14 = v15 - *((_DWORD *)a2 + 1) - v11;
        LODWORD(v19) = v14;
      }
      else
      {
        v14 = 0;
        LODWORD(v19) = 0;
      }
      v17 = v6;
      HIDWORD(v19) = v6;
    }
  }
LABEL_8:
  if ( v16 < v14 || HIDWORD(v20) < v17 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v8;
    *a4 = v10;
  }
  if ( a5 )
    *a5 = v6;
  *(_QWORD *)a3 = v20;
  a3[2] = v21;
  *a2 = v19;
  *a1 = v11;
  a1[1] = v12;
  return v9;
}
