/*
 * XREFs of ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0101E78
 * Callers:
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z @ 0x1C0044400 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0101CA0 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  HANDLE ProcessId; // rax

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DXGPROCESS::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  else
    ProcessId = 0LL;
  *((_QWORD *)this + 8) = ProcessId;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 39;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 85;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 37;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_WORD *)this + 132) = 0;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  *((_BYTE *)this + 299) &= 0x9Fu;
  *((_QWORD *)this + 36) = 0LL;
  *((_WORD *)this + 148) = 0;
  *((_BYTE *)this + 298) = 0;
  *(_WORD *)((char *)this + 301) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_WORD *)this + 200) = 0;
  *(_QWORD *)((char *)this + 404) = 0LL;
  *((_DWORD *)this + 103) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_BYTE *)this + 424) = 0;
  *((_DWORD *)this + 60) = 2;
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_BYTE *)this + 299) &= 0x61u;
  *((_DWORD *)this + 92) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 22);
  return this;
}
