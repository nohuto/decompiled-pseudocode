/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x14016F1B0
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14016EFB8 (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x14094F9FC (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        unsigned int *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5,
        char a6)
{
  unsigned int v6; // r15d
  __int64 v8; // r8
  unsigned int v10; // r14d
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r9d
  unsigned int v16; // r12d
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v20; // [rsp+0h] [rbp-28h]
  __int64 v21; // [rsp+8h] [rbp-20h]
  int v23; // [rsp+78h] [rbp+50h]
  __int64 v24; // [rsp+80h] [rbp+58h]

  v6 = *a1;
  v8 = *(_QWORD *)a2;
  v10 = a1[1];
  v11 = *a1;
  v12 = 0;
  v13 = v10;
  v21 = *a3;
  v14 = *a3;
  v20 = *(_QWORD *)a2;
  v24 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a3 + 2);
  if ( v14 < (unsigned int)*(_QWORD *)a2 )
    return (unsigned int)-1073741811;
  v15 = *((_DWORD *)a3 + 1);
  if ( v15 < HIDWORD(v8) )
    return (unsigned int)-1073741811;
  v16 = *a3;
  if ( v10 > (int)v21 - (int)v8 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v13 = v21 - v8;
  }
  if ( v6 > HIDWORD(v21) - HIDWORD(v8) )
  {
    if ( a6 )
    {
      v11 = HIDWORD(v21) - HIDWORD(v24);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v13 < v10 && BYTE2(BgInternal) == 2 )
    {
      v18 = 0;
      LODWORD(v24) = 0;
    }
    else
    {
      v18 = v14 - v13 - v24;
      LODWORD(v24) = v18;
    }
    if ( v11 < v6 && BYTE2(BgInternal) == 2 )
    {
      v17 = 0;
      HIDWORD(v24) = 0;
      goto LABEL_8;
    }
    v17 = v15 - v11 - HIDWORD(v24);
    HIDWORD(v24) = v17;
  }
  else
  {
    v17 = HIDWORD(*(_QWORD *)a2);
    v18 = v24;
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 && (_BYTE)BgInternal )
  {
    HIDWORD(v21) = *a3;
    v16 = *((_DWORD *)a3 + 1);
    LODWORD(v21) = v16;
    if ( BYTE2(BgInternal) == 1 )
    {
      if ( v13 >= v10 )
      {
        v17 = v14 - *a2 - v13;
        HIDWORD(v24) = v17;
      }
      else
      {
        v17 = 0;
        HIDWORD(v24) = 0;
      }
      v18 = a2[1];
      LODWORD(v24) = v18;
    }
    else
    {
      if ( v11 >= v6 )
      {
        v18 = v15 - a2[1] - v11;
        LODWORD(v24) = v18;
      }
      else
      {
        v18 = 0;
        LODWORD(v24) = 0;
      }
      v17 = *a2;
      HIDWORD(v24) = *a2;
    }
  }
LABEL_8:
  if ( v16 < v18 || HIDWORD(v21) < v17 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v6;
    *a4 = v10;
  }
  if ( a5 )
    *a5 = v20;
  *a3 = v21;
  *((_DWORD *)a3 + 2) = v23;
  *(_QWORD *)a2 = v24;
  *a1 = v11;
  a1[1] = v13;
  return v12;
}
