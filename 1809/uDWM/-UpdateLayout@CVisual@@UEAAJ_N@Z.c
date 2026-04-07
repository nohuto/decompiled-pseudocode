/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800256E0
 * Callers:
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800255D0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180025620 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180025690 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800AF9A0 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@UdwmTopVisual@@UEAAJ_N@Z @ 0x1800AFA80 (-UpdateLayout@UdwmTopVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebp
  int v6; // ecx
  int v7; // edx
  int v8; // r14d
  unsigned __int64 v9; // r9
  int v10; // edi
  bool v11; // zf
  int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // r8
  int v15; // edi
  int v16; // eax
  int v17; // eax
  unsigned int v19; // edi
  char v20; // si
  __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  if ( !v2 )
    goto LABEL_16;
  v6 = *((_DWORD *)this + 32);
  v7 = *((_DWORD *)this + 34);
  if ( v6 == 0x7FFFFFFF
    && *((_DWORD *)this + 33) == 0x7FFFFFFF
    && v7 == 0x7FFFFFFF
    && *((_DWORD *)this + 35) == 0x7FFFFFFF )
  {
    goto LABEL_16;
  }
  v8 = 0;
  v22 = *((_QWORD *)this + 15);
  v9 = HIDWORD(v22);
  v10 = 0;
  v11 = *((_DWORD *)this + 33) == 0x7FFFFFFF;
  v23 = 0LL;
  if ( v11 )
  {
    if ( v6 != 0x7FFFFFFF )
    {
      v8 = v6;
      LODWORD(v23) = v6;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v2 + 120);
    if ( v6 != 0x7FFFFFFF )
    {
      v13 = v12 - *((_DWORD *)this + 33) - v6;
      LODWORD(v23) = v6;
      v14 = v13;
      v8 = v6;
      goto LABEL_6;
    }
    v8 = v12 - v22 - *((_DWORD *)this + 33);
    LODWORD(v23) = v8;
  }
  v14 = (unsigned int)v22;
LABEL_6:
  if ( *((_DWORD *)this + 35) == 0x7FFFFFFF )
  {
    if ( v7 != 0x7FFFFFFF )
    {
      v10 = v7;
      HIDWORD(v23) = v7;
    }
    goto LABEL_30;
  }
  v15 = *(_DWORD *)(v2 + 124);
  if ( v7 == 0x7FFFFFFF )
  {
    v10 = v15 - HIDWORD(v22) - *((_DWORD *)this + 35);
    HIDWORD(v23) = v10;
LABEL_30:
    v16 = HIDWORD(v22);
    goto LABEL_9;
  }
  HIDWORD(v23) = v7;
  v16 = v15 - v7 - *((_DWORD *)this + 35);
  v10 = v7;
LABEL_9:
  if ( (int)v14 <= 0 )
    v14 = 0LL;
  LODWORD(v22) = v14;
  if ( v16 <= 0 )
    v16 = 0;
  HIDWORD(v22) = v16;
  v17 = (*(__int64 (__fastcall **)(CVisual *, unsigned __int64 *, __int64, unsigned __int64))(*(_QWORD *)this + 96LL))(
          this,
          &v22,
          v14,
          v9);
  v5 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x11Cu);
    return v5;
  }
  if ( v8 != *((_DWORD *)this + 28) || v10 != *((_DWORD *)this + 29) )
  {
    *((_QWORD *)this + 14) = v23;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
LABEL_16:
  if ( a2 )
  {
    v19 = -1;
    v20 = 0;
    while ( 1 )
    {
      if ( v20 )
      {
        ++v19;
      }
      else
      {
        v20 = 1;
        v19 = 0;
      }
      if ( v19 >= *((_DWORD *)this + 18) )
        break;
      v21 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v19);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, 2LL);
    }
  }
  return v5;
}
