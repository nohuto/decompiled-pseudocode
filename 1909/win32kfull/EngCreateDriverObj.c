/*
 * XREFs of EngCreateDriverObj @ 0x1C0282C30
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C02982A0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0090C08 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
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
  __int64 CurrentProcess; // rax
  HDEV v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v12 = Object;
  if ( Object )
  {
    v15[0] = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 225);
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    v16 = 0LL;
    *((_QWORD *)v12 + 7) = CurrentProcess;
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v16, v12, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)v15);
    else
      FreeObject(v12, 28LL);
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  }
  return (HDRVOBJ)v3;
}
