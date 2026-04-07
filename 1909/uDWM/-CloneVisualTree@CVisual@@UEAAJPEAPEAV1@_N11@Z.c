/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018130
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016C10 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023350 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800275A0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800395F0 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
  void *v21; // [rsp+28h] [rbp-28h]
  struct CVisual *v22; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v23; // [rsp+38h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( v2 )
  {
    v22 = v2;
  }
  else
  {
    v17 = CVisual::Create(&v22);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x461u, v21);
      v2 = v22;
      goto LABEL_16;
    }
    v2 = v22;
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
        &v23,
        0LL,
        0LL,
        *(_DWORD *)v20);
      if ( v23 )
      {
        inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v2 + 32), v23, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x47Au, v21);
          goto LABEL_16;
        }
        v16 = v23;
        if ( v23 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 2, 0xFFFFFFFF) == 1 && v16 )
            (**(void (__fastcall ***)(CBaseObject *, __int64))v16)(v16, 1LL);
          v23 = 0LL;
          v2 = v22;
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
  if ( v23 )
    CBaseObject::Release(v23);
  return v3;
}
