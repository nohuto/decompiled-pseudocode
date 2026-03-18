/*
 * XREFs of ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180054F88
 * Callers:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180054B6C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180054CB0 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180054E20 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180057240 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // r14d
  int v7; // esi
  _DWORD *v8; // rcx
  CDataStreamWriter *i; // r8
  unsigned int v11; // edx
  int v12; // eax
  CDataStreamWriter *v13; // rax
  CDataStreamWriter *v14; // rax
  int v15; // eax
  int NewBlock; // eax
  CDataStreamWriter **v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v3 = -2147024362;
  v4 = a2 + 4;
  if ( a2 + 4 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0x165u, 0LL);
  }
  else
  {
    v5 = (a2 + 7) & 0xFFFFFFFC;
    v6 = v5;
    v7 = v5 < v4 ? 0x80070216 : 0;
    if ( v5 >= v4 )
    {
      v8 = (_DWORD *)*((_QWORD *)this + 4);
      if ( v8 )
      {
        if ( v8[4] - v8[5] >= v5 )
          goto LABEL_6;
        if ( !v8[5] )
        {
          operator delete(v8);
          *((_QWORD *)this + 4) = 0LL;
        }
      }
      for ( i = (CDataStreamWriter *)*((_QWORD *)this + 2);
            i != (CDataStreamWriter *)((char *)this + 16);
            i = *(CDataStreamWriter **)i )
      {
        LODWORD(v8) = *((_DWORD *)i + 4);
        if ( (unsigned int)v8 >= v6 )
        {
          v11 = *((_DWORD *)this + 10);
          v12 = -1;
          v4 = v11 + (_DWORD)v8;
          if ( v4 >= v11 )
            v12 = v4;
          v7 = v4 < v11 ? 0x80070216 : 0;
          *((_DWORD *)this + 10) = v12;
          if ( v4 >= v11 )
          {
            v13 = (CDataStreamWriter *)*((_QWORD *)this + 4);
            if ( v13 )
            {
              v17 = (CDataStreamWriter **)*((_QWORD *)this + 1);
              if ( *v17 == this )
              {
                *(_QWORD *)v13 = this;
                *((_QWORD *)v13 + 1) = v17;
                *v17 = v13;
                *((_QWORD *)this + 1) = v13;
                goto LABEL_17;
              }
            }
            else
            {
LABEL_17:
              v14 = *(CDataStreamWriter **)i;
              if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) == i )
              {
                v8 = (_DWORD *)*((_QWORD *)i + 1);
                if ( *(CDataStreamWriter **)v8 == i )
                {
                  *(_QWORD *)v8 = v14;
                  *((_QWORD *)v14 + 1) = v8;
                  *((_DWORD *)i + 5) = 0;
                  *((_QWORD *)this + 4) = i;
                  goto LABEL_6;
                }
              }
            }
            __fastfail(3u);
          }
          v18 = 416;
          goto LABEL_32;
        }
      }
      v15 = 0x4000;
      if ( *((_DWORD *)this + 10) < 0x4000u )
        v15 = *((_DWORD *)this + 10);
      if ( v6 + v15 < v6 )
      {
        v7 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024362, 0x1E0u, 0LL);
        goto LABEL_31;
      }
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v6 + v15);
      v7 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, NewBlock, 0x1E2u, 0LL);
    }
    else
    {
      v18 = 381;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, v18, 0LL);
    }
LABEL_6:
    v3 = v7;
    if ( v7 < 0 )
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v7, 0x167u, 0LL);
  }
  return v3;
}
