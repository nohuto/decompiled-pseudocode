/*
 * XREFs of ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2PEAX@Z @ 0x1C003D894
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00E9958 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C022AB2C (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::DXGPROCESSVM(
        DXGPROCESSVM *this,
        struct DXGGLOBAL *a2,
        struct _EPROCESS *const a3,
        struct DXGPROCESS *a4,
        struct DXGPROCESS *a5,
        void *a6)
{
  char v8; // dl

  DXGPROCESS::DXGPROCESS(this, a2, a3);
  *((_BYTE *)this + 323) |= 8u;
  v8 = *((_BYTE *)this + 323);
  *(_QWORD *)this = &DXGPROCESSVM::`vftable';
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = a6;
  *((_QWORD *)this + 57) = a4;
  *((_BYTE *)this + 323) = v8 & 0xEF | (*(_QWORD *)(*((_QWORD *)a4 + 57) + 184LL) != 0LL ? 0x10 : 0);
  *((_QWORD *)this + 58) = a5;
  DXGPROCESS::SetWin32kInterface(this, *((const struct _DXGKWIN32KENG_INTERFACE *const *)a4 + 13));
  return this;
}
