/*
 * XREFs of EngCreateDriverObj @ 0x1C02570C0
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C026E120 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00CA984 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct OBJECT *v10; // rbx
  __int64 CurrentProcess; // rax
  HDEV v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v10 = Object;
  if ( Object )
  {
    v13[0] = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 224);
    CurrentProcess = PsGetCurrentProcess(v9, v8);
    v14 = 0LL;
    *((_QWORD *)v10 + 7) = CurrentProcess;
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v14, v10, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)v13);
    else
      FreeObject(v10, 28LL);
    if ( v14 )
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
  }
  return (HDRVOBJ)v3;
}
