/*
 * XREFs of EngCreateDriverObj @ 0x1C026A110
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C0282110 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E2DC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct OBJECT *v12; // rbx
  _BYTE v14[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  HDEV v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v12 = Object;
  if ( Object )
  {
    v16 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 225);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v9, v8, v10, v11);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v14, v12, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16);
    else
      FreeObject(v12, 28LL);
    if ( v15 )
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
  }
  return (HDRVOBJ)v3;
}
