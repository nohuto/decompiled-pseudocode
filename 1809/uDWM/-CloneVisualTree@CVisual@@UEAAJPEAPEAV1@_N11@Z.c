/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x1800195F0
 * Callers:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180010570 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001FD30 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038C60 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038F70 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  struct CVisual *v2; // rbx
  unsigned int v3; // esi
  __int64 v6; // r15
  char v7; // r12
  double v8; // xmm6_8
  double v9; // xmm3_8
  float v10; // xmm0_4
  float v11; // xmm0_4
  char v12; // r8
  _BYTE *v14; // rcx
  int inserted; // eax
  CBaseObject *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20[4]; // [rsp+20h] [rbp-30h]
  struct CVisual *v21; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v2 )
  {
    v21 = v2;
  }
  else
  {
    v17 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v21);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x48Eu);
      v2 = v21;
      goto LABEL_16;
    }
    v2 = v21;
  }
  LODWORD(v6) = -1;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 )
    {
      v6 = (unsigned int)(v6 + 1);
    }
    else
    {
      v7 = 1;
      v6 = 0LL;
    }
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
      break;
    v14 = *(_BYTE **)(*((_QWORD *)this + 6) + 8 * v6);
    if ( (v14[84] & 8) == 0 )
    {
      v20[0] = 1;
      (*(void (__fastcall **)(_BYTE *, CBaseObject **, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v14 + 152LL))(
        v14,
        &v22,
        0LL,
        0LL,
        *(_DWORD *)v20);
      if ( v22 )
      {
        inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v2 + 32), v22, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x4A7u);
          goto LABEL_16;
        }
        v16 = v22;
        if ( v22 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, 0xFFFFFFFF) == 1 && v16 )
            (**(void (__fastcall ***)(CBaseObject *, __int64))v16)(v16, 1LL);
          v22 = 0LL;
          v2 = v21;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 28) != *((_DWORD *)v2 + 28) || *((_DWORD *)this + 29) != *((_DWORD *)v2 + 29) )
  {
    *((_QWORD *)v2 + 14) = *((_QWORD *)this + 14);
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 8LL);
  }
  (*(void (__fastcall **)(struct CVisual *, char *))(*(_QWORD *)v2 + 96LL))(v2, (char *)this + 120);
  v8 = *((double *)this + 21);
  v9 = *((double *)this + 22);
  v10 = v8;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 21) - v10)) & _xmm) > 0.0000011920929
    || (v11 = v9,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 22) - v11)) & _xmm) > 0.0000011920929) )
  {
    v18 = *(_QWORD *)v2;
    *((double *)v2 + 21) = v8;
    *((double *)v2 + 22) = v9;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v18 + 24))(v2, 16LL);
  }
  v12 = *((_BYTE *)this + 84) & 1;
  if ( v12 != (*((_BYTE *)v2 + 84) & 1) )
  {
    v19 = *(_QWORD *)v2;
    *((_BYTE *)v2 + 84) = v12 | *((_BYTE *)v2 + 84) & 0xFE;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v19 + 24))(v2, 16LL);
  }
  if ( *((_DWORD *)this + 49) )
  {
    *(_OWORD *)((char *)v2 + 196) = *(_OWORD *)((char *)this + 196);
    *(_OWORD *)((char *)v2 + 212) = *(_OWORD *)((char *)this + 212);
    *(_QWORD *)((char *)v2 + 228) = *(_QWORD *)((char *)this + 228);
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 64LL);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v2 + 104LL))(v2);
  *a2 = v2;
  v2 = 0LL;
LABEL_16:
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v22 )
    CBaseObject::Release(v22);
  return v3;
}
