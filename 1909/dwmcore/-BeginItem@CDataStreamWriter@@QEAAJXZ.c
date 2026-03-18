/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B7BC0
 * Callers:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180054B6C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180054CB0 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180054E20 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x180056260 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800563E0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180056560 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800566F0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // eax
  int v6; // edx
  signed int v7; // ebx
  unsigned int v8; // eax
  int v9; // edx
  __int64 v11; // rcx

  if ( !*((_QWORD *)this + 6) && !*((_DWORD *)this + 14) )
  {
    v1 = *((_QWORD *)this + 4);
    v2 = *(unsigned int *)(v1 + 20);
    if ( (unsigned int)(*(_DWORD *)(v1 + 16) - v2) >= 4 )
    {
      v3 = (_DWORD *)(v2 + v1 + 24);
      *((_QWORD *)this + 6) = v3;
      *v3 = 0;
      v4 = *((_QWORD *)this + 4);
      *((_DWORD *)this + 14) = 4;
      v5 = *(_DWORD *)(v4 + 20);
      v6 = v5 + 4;
      if ( v5 + 4 < v5 )
      {
        v7 = -2147024362;
        v6 = -1;
      }
      else
      {
        v7 = 0;
      }
      *(_DWORD *)(v4 + 20) = v6;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0x232u, 0LL);
      }
      else
      {
        v8 = *((_DWORD *)this + 11);
        v9 = v8 + 4;
        if ( v8 + 4 < v8 )
        {
          v7 = -2147024362;
          v9 = -1;
        }
        else
        {
          v7 = 0;
        }
        *((_DWORD *)this + 11) = v9;
        if ( v7 >= 0 )
          return (unsigned int)v7;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0x233u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v7, 0x9Au, 0LL);
      return (unsigned int)v7;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8000FFFF, 0x89u, 0LL);
  return 2147549183LL;
}
