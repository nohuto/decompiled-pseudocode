/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800584C0
 * Callers:
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180099980 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180099A80 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180099B60 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18009AA40 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // rax
  int v4; // ecx
  __int64 v5; // rcx
  int *v6; // rsi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // ecx

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v2 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    if ( (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *v2 >= 4 )
    {
      v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      v4 = *((_DWORD *)this + 10);
      *((_QWORD *)this + 4) = v3;
      *v3 = v4;
      v5 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = 4;
      v6 = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v7 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
      v8 = v7 + 4;
      if ( v7 + 4 < v7 )
      {
        v9 = -2147024362;
        v8 = -1;
      }
      else
      {
        v9 = 0;
      }
      *v6 = v8;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v9, 0x212u);
      }
      else
      {
        v10 = *((_DWORD *)this + 7);
        v11 = v10 + 4;
        if ( v10 + 4 < v10 )
        {
          v9 = -2147024362;
          v11 = -1;
        }
        else
        {
          v9 = 0;
        }
        *((_DWORD *)this + 7) = v11;
        if ( v9 >= 0 )
          return (unsigned int)v9;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x213u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x87u);
      return (unsigned int)v9;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0x76u);
  return 2147549183LL;
}
