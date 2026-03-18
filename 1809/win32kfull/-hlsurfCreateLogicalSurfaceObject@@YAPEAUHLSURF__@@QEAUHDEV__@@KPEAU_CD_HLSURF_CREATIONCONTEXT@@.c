/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D224
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA08 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0076174 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C007CCB8 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007CE58 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E2DC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HLSURF __fastcall hlsurfCreateLogicalSurfaceObject(_QWORD *a1, unsigned int a2, struct _CD_HLSURF_CREATIONCONTEXT *a3)
{
  __int64 Object; // rax
  HLSURF v7; // rbx
  __int64 v8; // rdi
  _BYTE v10[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  Object = AllocateObject(304LL, 18LL, 1LL);
  v7 = 0LL;
  v8 = Object;
  if ( Object
    && (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *(_QWORD *)a3,
                       *((_DWORD *)a3 + 2),
                       *((_DWORD *)a3 + 3),
                       *((_QWORD *)a3 + 2),
                       1) )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v10, (struct OBJECT *)v8, 0x12u, 8u) )
    {
      v7 = *(HLSURF *)v8;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v8, 1, a2, a3) >= 0 )
        *(_QWORD *)(v8 + 24) = a1;
      EtwLogicalSurfCreateEvent(v7, a2);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v8, 0, 0);
    }
    if ( v11 )
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
  }
  return v7;
}
