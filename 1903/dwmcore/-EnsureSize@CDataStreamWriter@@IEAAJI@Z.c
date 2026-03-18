/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180041ACC
 * Callers:
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x180041150 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800412D0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180041450 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800415E0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180042E7C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180042130 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // eax
  CDataStreamWriter *v4; // rdi
  unsigned int v5; // esi
  CDataStreamWriter *i; // r8
  unsigned int v8; // edx
  int v9; // eax
  CDataStreamWriter **v10; // rax
  CDataStreamWriter *v11; // rax
  CDataStreamWriter **v12; // rcx
  int v13; // eax
  int NewBlock; // eax
  unsigned int v15; // ecx
  CDataStreamWriter **v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v3 = (a2 + 3) & 0xFFFFFFFC;
  v4 = this;
  if ( v3 >= a2 )
    v2 = (a2 + 3) & 0xFFFFFFFC;
  v5 = v3 < a2 ? 0x80070216 : 0;
  if ( v3 < a2 )
  {
    v17 = 381;
    goto LABEL_31;
  }
  this = (CDataStreamWriter *)*((_QWORD *)this + 4);
  if ( this )
  {
    if ( *((_DWORD *)this + 4) - *((_DWORD *)this + 5) >= v2 )
      return v5;
    if ( !*((_DWORD *)this + 5) )
    {
      operator delete(this);
      *((_QWORD *)v4 + 4) = 0LL;
    }
  }
  for ( i = (CDataStreamWriter *)*((_QWORD *)v4 + 2);
        i != (CDataStreamWriter *)((char *)v4 + 16);
        i = *(CDataStreamWriter **)i )
  {
    LODWORD(this) = *((_DWORD *)i + 4);
    if ( (unsigned int)this >= v2 )
    {
      v8 = *((_DWORD *)v4 + 10);
      v9 = -1;
      LODWORD(this) = v8 + (_DWORD)this;
      if ( (unsigned int)this >= v8 )
        v9 = (int)this;
      v5 = (unsigned int)this < v8 ? 0x80070216 : 0;
      *((_DWORD *)v4 + 10) = v9;
      if ( (unsigned int)this >= v8 )
      {
        v10 = (CDataStreamWriter **)*((_QWORD *)v4 + 4);
        if ( v10 )
        {
          v16 = (CDataStreamWriter **)*((_QWORD *)v4 + 1);
          if ( *v16 == v4 )
          {
            *v10 = v4;
            v10[1] = (CDataStreamWriter *)v16;
            *v16 = (CDataStreamWriter *)v10;
            *((_QWORD *)v4 + 1) = v10;
            goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v11 = *(CDataStreamWriter **)i;
          if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) == i )
          {
            v12 = (CDataStreamWriter **)*((_QWORD *)i + 1);
            if ( *v12 == i )
            {
              *v12 = v11;
              *((_QWORD *)v11 + 1) = v12;
              *((_DWORD *)i + 5) = 0;
              *((_QWORD *)v4 + 4) = i;
              return v5;
            }
          }
        }
        __fastfail(3u);
      }
      v17 = 416;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, v17, 0LL);
      return v5;
    }
  }
  v13 = 0x4000;
  if ( *((_DWORD *)v4 + 10) < 0x4000u )
    v13 = *((_DWORD *)v4 + 10);
  if ( v13 + v2 < v2 )
  {
    v5 = -2147024362;
    v17 = 480;
    goto LABEL_31;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock(v4, v13 + v2);
  v5 = NewBlock;
  if ( NewBlock < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, NewBlock, 0x1E2u, 0LL);
  return v5;
}
