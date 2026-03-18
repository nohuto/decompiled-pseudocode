/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C010E78C
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C010E770 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0076174 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C007CCB8 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007CE58 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E2DC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(
        _QWORD *a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  HLSURF v8; // r14
  int v9; // edi
  int v10; // r15d
  __int64 Object; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  HLSURF v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-61h] BYREF
  int v17; // [rsp+38h] [rbp-59h]
  __int64 v18; // [rsp+40h] [rbp-51h] BYREF
  int v19; // [rsp+48h] [rbp-49h]
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  int v21; // [rsp+58h] [rbp-39h]
  __int64 v22; // [rsp+60h] [rbp-31h] BYREF
  __int64 v23; // [rsp+68h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  int v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+7Ch] [rbp-15h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  _BYTE v28[32]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+17h]
  __int64 v31; // [rsp+F8h] [rbp+67h] BYREF

  v8 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ(&v20, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(&v18, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(&v16, 1LL);
  v9 = *((_DWORD *)a2 + 63);
  v24 = *((_QWORD *)a2 + 33);
  v25 = *((_DWORD *)a2 + 68);
  v26 = *((_DWORD *)a2 + 69);
  v27 = *((_QWORD *)a2 + 25);
  v31 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !v20 || !v18 || !v16 )
    goto LABEL_36;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v31 = *((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v31) )
        goto LABEL_36;
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v9 &= ~2u;
  }
  if ( a4 && *((_QWORD *)a2 + 10) )
  {
    v22 = *((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v22) )
      goto LABEL_36;
  }
  else
  {
    a4 = 0;
  }
  v10 = a5;
  if ( !a5 || !*((_QWORD *)a2 + 11) )
  {
    v10 = 0;
    goto LABEL_20;
  }
  v23 = *((_QWORD *)a2 + 11);
  if ( !RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v23) )
  {
LABEL_36:
    v8 = 0LL;
    goto LABEL_37;
  }
LABEL_20:
  Object = AllocateObject(304LL, 18LL, 1LL);
  v12 = Object;
  if ( !Object )
    goto LABEL_36;
  if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *((_QWORD *)a2 + 33),
                       *((_DWORD *)a2 + 68),
                       *((_DWORD *)a2 + 69),
                       *((_QWORD *)a2 + 25),
                       *((_DWORD *)a2 + 72)) )
  {
    *(_DWORD *)(v12 + 252) = v9;
    *(_DWORD *)(v12 + 212) = *((_DWORD *)a2 + 53);
    *(_DWORD *)(v12 + 240) = *((_DWORD *)a2 + 60);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v28, (struct OBJECT *)v12, 0x12u, 8) )
    {
      v8 = *(HLSURF *)v12;
      v13 = (v9 & 0x10 | 0x40u) >> 4;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v12, 1, v13, (struct _CD_HLSURF_CREATIONCONTEXT *)&v24) >= 0 )
        *(_QWORD *)(v12 + 24) = a1;
      if ( a3 )
      {
        *(_QWORD *)(v12 + 128) = v20;
        v20 = 0LL;
      }
      if ( a4 )
      {
        v14 = *(HLSURF *)v12;
        *(_QWORD *)(v12 + 80) = v18;
        EtwTraceLifetimeAccum(v14, 1LL);
        v18 = 0LL;
      }
      if ( v10 )
      {
        *(_QWORD *)(v12 + 88) = v16;
        v16 = 0LL;
      }
      EtwLogicalSurfCreateEvent(v8, v13);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v12, 0, 0);
    }
    if ( v29 )
      _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
  }
LABEL_37:
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v8;
}
