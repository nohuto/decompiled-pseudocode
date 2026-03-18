/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0278340
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0299A50 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E2DC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0278130 (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C027818C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r14
  __int64 v15; // rbx
  struct OBJECT *Object; // rsi
  __int64 (__fastcall *v17)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  _BYTE v19[32]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-A8h]
  _BYTE v21[32]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v22[80]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v23; // [rsp+128h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v23 = v15;
  if ( !v15 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, Object, 0xEu, 2);
    if ( v9 )
    {
      *((_QWORD *)this + 4) = Object;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v23);
      v17 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3200);
      if ( v17 )
        v10 = v17(*(_QWORD *)(v15 + 1800), a3, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      DCOBJ::~DCOBJ((DCOBJ *)v22);
    }
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v19);
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !Object )
    goto LABEL_18;
  if ( v9 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0LL;
      Object = 0LL;
    }
LABEL_18:
    if ( v9 )
      return v9;
  }
  if ( Object )
    FreeObject(Object, 14LL);
  return v9;
}
